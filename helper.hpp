#ifndef HELPER_HPP
#define HELPER_HPP

#include <string>
#include <sstream>
#include "cg.hpp"
#include "source.hpp"
#include "hw3_output.hpp"
using namespace std;

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
    }
}


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



void checkDivisionByZero(ExpNode* exp) { // it will be done at runtime
    string checkZero =freshVar();
    string exp_llvm_type=getLLVMType(exp->type);
    CodeBuffer::instance().emit(checkZero + " = icmp eq " + exp_llvm_type + " " exp->llvm_Var + ", 0");

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









#endif