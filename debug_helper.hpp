#ifndef DEBUG_HELPER_HPP
#define DEBUG_HELPER_HPP

#include "cg.hpp"
#include "source.hpp"
#include "hw3_output.hpp"
#include "helper.hpp"
#include "CheckFunctions.h"
extern int yylineno;  // Declare yylineno so it can be used in the helper functions

// Global variable to manage debug mode
bool DEBUG_MODE = false;

inline void debugPrintSymbolTable(TablesStack& tableStack) {
    if (!DEBUG_MODE) return;

    cout << "------------------ Symbol Table ------------------" << endl;
    for (const auto& scope : tableStack.stackTable) {
        cout << "Scope:" << endl;
        for (const auto& entry : scope->scope) {
            cout << "  Name: " << entry->name << ", Type: " << entry->type << ", Offset: " << entry->offset << endl;
        }
        cout << "-------------------------------------------" << endl;
    }
}

inline void debugEmitInstruction(const string& instruction) {
    if (DEBUG_MODE) {
        cout << "Emitting instruction: " << instruction << endl;
    }
    CodeBuffer::instance().emit(instruction);
}

inline void debugEmitGlobal(const string& dataLine) {
    if (DEBUG_MODE) {
        cout << "Emitting global: " << dataLine << endl;
    }
    CodeBuffer::instance().emitGlobal(dataLine);
}

// Additional debug utilities as needed

#endif
