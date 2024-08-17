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
    CodeBuffer::instance().emit("entry_label:");
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
Statement: ID ASSIGN Exp SC
        {
           string varName = static_cast<IdentifierStr*>($1)->id;
           string varType = getSymbolType(*tableStack, varName);
           
           if(varType.empty() || varType=="function") {
             output::errorUndef(yylineno, varName);
             exit(0);
           }

           checkAssignment(varType, $3->type, yylineno);

           string llvmType = getLLVMType(varType);
           string llvmVarName = "%" + varName;
           
           // Create labels for branching
           string trueLabel = CodeBuffer::instance().freshLabel();
           string falseLabel = CodeBuffer::instance().freshLabel();
           string endLabel = CodeBuffer::instance().freshLabel();

           // Emit branching code based on the expression type
           if ($3->type == "bool") {
               CodeBuffer::instance().emit("br i1 " + $3->llvm_var + ", label %" + trueLabel + ", label %" + falseLabel);
           } else {
               CodeBuffer::instance().emit("br label %" + endLabel);
           }

           // Emit true label for boolean expressions
           if ($3->type == "bool") {
               CodeBuffer::instance().emit(trueLabel + ":");
               CodeBuffer::instance().emit("br label %" + endLabel);

               // Emit false label for boolean expressions
               CodeBuffer::instance().emit(falseLabel + ":");
               CodeBuffer::instance().emit("br label %" + endLabel);
           }

           // Emit end label and PHI node for boolean expressions
           CodeBuffer::instance().emit(endLabel + ":");
           if ($3->type == "bool") {
               string phiVar = freshVar();
               CodeBuffer::instance().emit(phiVar + " = phi i1 [ true, %" + trueLabel + " ], [ false, %" + falseLabel + " ]");
               $3->llvm_var = phiVar;
           }

           // Store the value in the variable
           CodeBuffer::instance().emit("store " + llvmType + " " + $3->llvm_var + ", " + llvmType + "* " + llvmVarName);

           delete static_cast<IdentifierStr*>($1);
           delete $3;
           printProductionRule(7);
        }
*/