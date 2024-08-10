#ifndef HELPER_HPP
#define HELPER_HPP

#include <string>
#include <sstream>
#include "cg.hpp"
#include "source.hpp"
using namespace std;

int var_counter=0;

string freshVar() {
    ostringstream oss;
    oss<<"%t"<<tmp_counter++;
    return oss.str();
}

ExpNode* emitArithmetic(const string& op, ExpNode* le, ExpNode* re) {//(le=left expression , re=...)
    string result = freshVar();
    string leVar = le->llvm_var;
    string reVar = re->llvm_var;
if (le->type == "byte" && re->type == "byte") {
        // Both operands are bytes
        CodeBuffer::instance().emit(result + " = " + op + " i8 " + leVar + ", " + reVar);
        return new ExpNode("byte", result);
    } else {
        // One or both operands are int (i32), cast byte to int if necessary
        if (le->type == "byte") {
            std::string promotedLe = freshVar();
            CodeBuffer::instance().emit(promotedLe + " = zext i8 " + leVar + " to i32");
            leVar = promotedLe;
        }
        if (re->type == "byte") {
            std::string promotedRe = freshVar();
            CodeBuffer::instance().emit(promotedRe + " = zext i8 " + reVar + " to i32");
            reVar = promotedRe;
        }
        CodeBuffer::instance().emit(result + " = " + op + " i32 " + leVar + ", " + reVar);
        return new ExpNode("int", result);
    }
}