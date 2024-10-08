#ifndef HELPER_HPP
#define HELPER_HPP

#include <string>
#include <sstream>
#include "cg.hpp"
#include "source.hpp"
#include "hw3_output.hpp"
#include "SymbolTable.hpp"
using namespace std;
extern int yylineno; 


int var_counter=0;

string freshVar() {
    ostringstream oss;
    oss<<"%t"<<var_counter++;
    return oss.str();
}


string getLLVMType(const string& type) { // i8 or i32
    if (type == "int") {
        return "i32";
    } else if (type == "byte") {
        return "i8";
    }else if (type == "bool") {
        return "i1";
    }else if (type == "string") {
        return "i8*"; 
    }
    return "bug at getLLVMType";
}

void string_declare(const string& varName, const string& strValue) {
      CodeBuffer::instance().emitGlobal(varName + " = internal constant [" 
                                      + to_string(strValue.length() + 1) 
                                      + " x i8] c\"" + strValue + "\\00\"");
}



void emitDebugPrint(const std::string& message) {
    // Emit the printf call
    CodeBuffer::instance().emit(message);
}


//_________________________________________arethmitics_________________________________________

string promoteByteToInt(ExpNode* byteNode) {
    string intVar = freshVar();
    CodeBuffer::instance().emit(intVar + " = zext i8 " + byteNode->llvm_var + " to i32");
    return intVar;
}

ExpNode* truncateIntToByte(ExpNode* intNode) {
    string byteVar = freshVar();
    CodeBuffer::instance().emit(byteVar + " = trunc i32 " + intNode->llvm_var + " to i8");
    return new ExpNode("byte", byteVar);
}

/*
ExpNode* emitArithmetic(const string& op, ExpNode* le, ExpNode* re) {
    string result = freshVar();
    string leVar = le->llvm_var;
    string reVar = re->llvm_var;
    string resultType = (le->type == "int" || re->type == "int") ? "int" : "byte";

    if (le->type == "byte" && resultType == "int") {
        leVar = promoteByteToInt(le);
    }
    if (re->type == "byte" && resultType == "int") {
        reVar = promoteByteToInt(re);
    }

    string llvmType = (resultType == "int") ? "i32" : "i8";
    CodeBuffer::instance().emit(result + " = " + op + " " + llvmType + " " + leVar + ", " + reVar);

    return new ExpNode(resultType, result);
}
*/

//not including division 
ExpNode* emitArithmetic(const string& op, ExpNode* le, ExpNode* re) {//(le=left expression , re=...)
    string result = freshVar();
    string leVar = le->llvm_var;
    string reVar = re->llvm_var;
if (le->type == "byte" && re->type == "byte") {
    //    leVar=promoteByteToInt(le);
    //    reVar=promoteByteToInt(re);

        CodeBuffer::instance().emit(result + " = " + op + " i8 " + leVar + ", " + reVar);
        return new ExpNode("byte", result);

        // return truncateIntToByte(new ExpNode("int", result));
    } else {
        // One or both operands are int (i32), cast byte to int if necessary
        if (le->type == "byte") {
            leVar= promoteByteToInt(le);
        }
        if (re->type == "byte") {
            reVar=promoteByteToInt(re);
        }
        CodeBuffer::instance().emit(result + " = " + op + " i32 " + leVar + ", " + reVar);
        return new ExpNode("int", result);
    }
}

ExpNode* emitDivision(ExpNode* le, ExpNode* re) {
    string result = freshVar();
    string leVar = le->llvm_var;
    string reVar = re->llvm_var;
    string resultType = (le->type == "int" || re->type == "int") ? "int" : "byte";

    // Promote to int if necessary
    if (le->type == "byte" && resultType == "int") {
        leVar = promoteByteToInt(le);
    }
    if (re->type == "byte" && resultType == "int") {
        reVar = promoteByteToInt(re);
    }
    
    // Division by zero check
    string checkZero = freshVar();
    string labelDivByZero = CodeBuffer::instance().freshLabel();
    string labelSafeDiv = CodeBuffer::instance().freshLabel();
    
    string checkType = (resultType == "int") ? "i32" : "i8";
    CodeBuffer::instance().emit(checkZero + " = icmp eq " + checkType + " " + reVar + ", 0");
    CodeBuffer::instance().emit("br i1 " + checkZero + ", label %" + labelDivByZero + ", label %" + labelSafeDiv);
    
    // Division by zero case
    CodeBuffer::instance().emit(labelDivByZero + ":");
    CodeBuffer::instance().emit("call void @print(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @.str_zeroDiv, i32 0, i32 0))");
    CodeBuffer::instance().emit("call void @exit(i32 1)");
    CodeBuffer::instance().emit("unreachable");
    
    // Safe division case
    CodeBuffer::instance().emit(labelSafeDiv + ":");
    if (resultType == "int") {
        CodeBuffer::instance().emit(result + " = sdiv i32 " + leVar + ", " + reVar);
    } else {
        CodeBuffer::instance().emit(result + " = udiv i8 " + leVar + ", " + reVar);
    }

    return new ExpNode(resultType, result);
}
//_________________________________________boolean_________________________________________


void emitBooleanAnd(ExpNode* le, ExpNode* re, ExpNode* result) {
    string labelTrue = re->true_label;
    string labelFalse = re->false_label;
    result -> true_label = labelTrue;
    result -> false_label = labelFalse;
    // Emit code to branch based on the left operand
    CodeBuffer::instance().emit(static_cast<ExpNode*>(le)->false_label +":");
    CodeBuffer::instance().emit("br label %" + labelFalse);
}


void emitBooleanOr(ExpNode* le, ExpNode* re, ExpNode* result) {
    string labelTrue = re->true_label;
    string labelFalse = re->false_label;
    result -> true_label = labelTrue;
    result -> false_label = labelFalse;
    // Emit code to branch based on the left operand
    CodeBuffer::instance().emit(static_cast<ExpNode*>(le)->true_label +":");
    CodeBuffer::instance().emit("br label %" + labelTrue);
}

void emitBooleanNot(ExpNode* exp, ExpNode* result) {
    result->true_label = exp->false_label;
    result->false_label = exp->true_label;
}




ExpNode* emitRelop(const string& relop, ExpNode* le, ExpNode* re) {
    string resultVar = freshVar();
    string leVar = le->llvm_var;
    string reVar = re->llvm_var;
    string llvmRelop;

    if (le->type == "byte") {
        leVar = promoteByteToInt(le);  
    }
    if (re->type == "byte") {
        reVar = promoteByteToInt(re);
    }

    // Determine the appropriate LLVM relational operation
    if (relop == "==") {
        llvmRelop = "eq";
    } else if (relop == "!=") {
        llvmRelop = "ne";
    } else if (relop == "<") {
        llvmRelop = "slt";
    } else if (relop == "<=") {
        llvmRelop = "sle";
    } else if (relop == ">") {
        llvmRelop = "sgt";
    } else if (relop == ">=") {
        llvmRelop = "sge";
    } else {
        output::errorMismatch(yylineno); //just for debugging
        exit(0);
    }

    CodeBuffer::instance().emit(resultVar + " = icmp " + llvmRelop + " i32 " + leVar + ", " + reVar);
    ExpNode* result = new ExpNode("bool", resultVar);
    result->isrelop=true;
    // CodeBuffer::instance().emit("br i1 " + result->llvm_var + ", label %" + result->true_label + ", label %" + result->false_label);
    return result;

}

//___________________________________________________________________
string getSymbolLLVMVarName(TablesStack& tableStack, const string& varName) {
    for (auto it = tableStack.stackTable.rbegin(); it != tableStack.stackTable.rend(); ++it) {
        for (const auto& entry : (*it)->scope) {
            if (entry->name == varName) {
                return entry->llvmVarName;
            }
        }
    }
    return ""; // Return empty if not found
}

#endif