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
    CodeBuffer::instance().emit("br label %func_end");

    CodeBuffer::instance().emit("func_end:");
    CodeBuffer::instance().emit("ret i32 0");
    CodeBuffer::instance().emit("}");

    CodeBuffer::instance().printGlobalBuffer();
    CodeBuffer::instance().printCodeBuffer();
    
    // Close the input file if we opened one
    
        fclose(yyin);
    

    //for tests: std::cout << "Debug: Ending program execution" << std::endl;
    return 0;
}
