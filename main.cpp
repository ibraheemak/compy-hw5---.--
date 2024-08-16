#include <iostream>
#include <fstream>
#include <sstream>
#include "parser.tab.hpp"
#include "source.hpp"
#include "cg.hpp"
#include "hw3_output.hpp"

// Extern declarations to make them accessible in the main file
extern int yyparse();
extern int yylineno;
extern void initBuiltInFunctions();
extern FILE* yyin;

// Include necessary header files for your symbol table and function declarations
#include "CheckFunctions.h"
#include "SymbolTable.hpp"

using namespace std;

// Global instances

int main(int argc, char* argv[]) {
    //for tests: std::cout << "Debug: Starting program execution" << std::endl;
    CodeBuffer::instance().emit("define i32 @main(){");
    CodeBuffer::instance().emitGlobal("declare i32 @printf(i8*, ...)");
    CodeBuffer::instance().emitGlobal("declare void @exit(i32)");
    CodeBuffer::instance().emitGlobal("declare i32 @scanf(i8*, ...)");
    CodeBuffer::instance().emitGlobal("@.str_zeroDiv = internal constant [23 x i8] c\"Error division by zero\\00\"");
    CodeBuffer::instance().emitGlobal("@global_bool_flag = global i1 false");    

    

    // Run the parser
     initBuiltInFunctions();
    yyparse();

    CodeBuffer::instance().emit("ret i32 0");
    CodeBuffer::instance().emit("}");

    CodeBuffer::instance().printGlobalBuffer();
    CodeBuffer::instance().printCodeBuffer();
    
    // Close the input file if we opened one
    
        fclose(yyin);
    

    //for tests: std::cout << "Debug: Ending program execution" << std::endl;
    return 0;
}


/* another approach for the problem of bool branching label assignments  
ID ASSIGN Exp SC
{
    string varName = static_cast<IdentifierStr*>($1)->id;
    string varType = getSymbolType(*tableStack, varName);
    if (varType.empty()) {
        output::errorUndef(yylineno, varName);
        exit(0);
    }
    checkAssignment(varType, $3->type, yylineno);
    string llvmType = getLLVMType(varType);
    string llvmVarName = "%" + varName;

    // Always allocate the variable
    CodeBuffer::instance().emit(llvmVarName + " = alloca " + llvmType);

    if (varType == "bool" && static_cast<ExpNode*>($3)->llvm_var.empty()) {
        string endLabel = CodeBuffer::instance().freshLabel();
        string phiVar = freshVar();

        // Emit the true label
        CodeBuffer::instance().emit(static_cast<ExpNode*>($3)->true_label + ":");
        CodeBuffer::instance().emit("br label %" + endLabel);

        // Emit the false label
        CodeBuffer::instance().emit(static_cast<ExpNode*>($3)->false_label + ":");
        CodeBuffer::instance().emit("br label %" + endLabel);

        // Emit the end label with phi instruction
        CodeBuffer::instance().emit(endLabel + ":");
        CodeBuffer::instance().emit(phiVar + " = phi i1 [ 1, %" + static_cast<ExpNode*>($3)->true_label + 
                                    " ], [ 0, %" + static_cast<ExpNode*>($3)->false_label + " ]");
        CodeBuffer::instance().emit("store i1 " + phiVar + ", i1* " + llvmVarName);
    } else {
        // Handle direct expressions
        CodeBuffer::instance().emit("store " + llvmType + " " + $3->llvm_var + ", " + llvmType + "* " + llvmVarName);
    }

    delete static_cast<IdentifierStr*>($1);
    delete $3;
    printProductionRule(7);
}
*/