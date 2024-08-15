#ifndef HELPER_HPP
#define HELPER_HPP

#include <string>
#include <sstream>
#include "cg.hpp"
#include "source.hpp"
#include "hw3_output.hpp"
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

//not including division 
ExpNode* emitArithmetic(const string& op, ExpNode* le, ExpNode* re) {//(le=left expression , re=...)
    string result = freshVar();
    string leVar = le->llvm_var;
    string reVar = re->llvm_var;
if (le->type == "byte" && re->type == "byte") {
       leVar=promoteByteToInt(le);
       reVar=promoteByteToInt(re);

        CodeBuffer::instance().emit(result + " = " + op + " i8 " + leVar + ", " + reVar);
        
        return truncateIntToByte(new ExpNode("int", result));
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


/*
void checkDivisionByZero(ExpNode* exp) { // it will be done at runtime
    string checkZero =freshVar();
    string exp_llvm_type=getLLVMType(exp->type);
    CodeBuffer::instance().emit(checkZero + " = icmp eq " + exp_llvm_type + " " + exp->llvm_var + ", 0");

    string label_Zero = CodeBuffer::instance().freshLabel();
    string label_notZero = CodeBuffer::instance().freshLabel();
//zero division
    CodeBuffer::instance().emit("br i1 " + checkZero + ", label %" + label_Zero + ", label %" + label_notZero);
    CodeBuffer::instance().emit( label_Zero + ":" );
    CodeBuffer::instance().emit( "call i32 @printf(i8* getelementptr ([22 x i8], [22 x i8]* @.str_zeroDiv, i32 0, i32 0))" );
    CodeBuffer::instance().emit("call void @exit(i32 1)");

//no zero division
    CodeBuffer::instance().emit(label_notZero + ":");
}


ExpNode* emitDivision(ExpNode* le, ExpNode* re) {

    checkDivisionByZero(re);
    string result = freshVar();
    string leVar = le->llvm_var;
    string reVar = re->llvm_var;


    if (le->type == "byte") {
        leVar = promoteByteToInt(le);
    } else if (re->type == "byte") {
        reVar = promoteByteToInt(re);
    }
    
    if (le->type == "int" && re->type == "int") {
        CodeBuffer::instance().emit(result + " = sdiv i32 " + leVar + ", " + reVar);
        return new ExpNode("int", result);
    } else if (le->type == "byte" && re->type == "byte") {
        CodeBuffer::instance().emit(result + " = udiv i32 " + leVar + ", " + reVar);
       return truncateIntToByte(new ExpNode("int", result));
    } else {
        output::errorMismatch(yylineno);
        exit(0);
    }
}
*/
ExpNode* emitDivision(ExpNode* le, ExpNode* re) {
    string result = freshVar();
    string leVar = le->llvm_var;
    string reVar = re->llvm_var;

    // Promote byte to int if necessary
    if (le->type == "byte") {
        leVar = promoteByteToInt(le);
    }
    if (re->type == "byte") {
        reVar = promoteByteToInt(re);
    }

    // Division by zero check
    string checkZero = freshVar();
    string labelDivByZero = CodeBuffer::instance().freshLabel();
    string labelSafeDiv = CodeBuffer::instance().freshLabel();
    
    CodeBuffer::instance().emit(checkZero + " = icmp eq i32 " + reVar + ", 0");
    CodeBuffer::instance().emit("br i1 " + checkZero + ", label %" + labelDivByZero + ", label %" + labelSafeDiv);
    
    // Division by zero case
    CodeBuffer::instance().emit(labelDivByZero + ":");
    CodeBuffer::instance().emit("call void @print(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @.str_zeroDiv, i32 0, i32 0))");
    CodeBuffer::instance().emit("call void @exit(i32 1)");
    CodeBuffer::instance().emit("unreachable");
    
    // Safe division case
    CodeBuffer::instance().emit(labelSafeDiv + ":");
    
    if (le->type == "int" && re->type == "int") {
        CodeBuffer::instance().emit(result + " = sdiv i32 " + leVar + ", " + reVar);
        return new ExpNode("int", result);
    } else if (le->type == "byte" && re->type == "byte") {
        CodeBuffer::instance().emit(result + " = udiv i32 " + leVar + ", " + reVar);
        return truncateIntToByte(new ExpNode("int", result));
    } else {
        output::errorMismatch(yylineno);
        exit(0);
    }
}

//_________________________________________boolean_________________________________________

void emitBooleanAnd(ExpNode* le, ExpNode* re) {
    string labelEvalRight = CodeBuffer::instance().freshLabel();
    string labelTrue = re->true_label;
    string labelFalse = le->false_label;
    // Check left operand
    CodeBuffer::instance().emit("br i1 " + le->llvm_var + ", label %" + labelEvalRight + ", label %" + labelFalse);

    // Evaluate right operand
    CodeBuffer::instance().emit(labelEvalRight + ":");
    CodeBuffer::instance().emit("br i1 " + re->llvm_var + ", label %" + labelTrue + ", label %" + labelFalse);
}


void emitBooleanOr(ExpNode* le, ExpNode* re) {

    string labelEvalRight = CodeBuffer::instance().freshLabel();
    string labelTrue = le->true_label;
    string labelFalse = re->false_label;

    // Emit code to branch based on the left operand
    CodeBuffer::instance().emit("br i1 " + le->llvm_var + ", label %" + labelTrue + ", label %" + labelEvalRight);

    // Emit code for evaluating the right operand if the left one is false
    CodeBuffer::instance().emit(labelEvalRight + ":");
    CodeBuffer::instance().emit("br i1 " + re->llvm_var + ", label %" + labelTrue + ", label %" + labelFalse);
}


void emitBooleanNot(ExpNode* exp) {
    // Swap true and false labels
    string temp = exp->true_label;
    exp->true_label = exp->false_label;
    exp->false_label = temp;

    // No need to emit any LLVM code, just swap labels
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
    return new ExpNode("bool", resultVar);
}



#endif