#ifndef HW3_TYPE_HPP
#define HW3_TYPE_HPP

#include <vector>
#include <string>
using namespace std;

class TNode {
public:
    string type;
    string llvm_var;
    TNode() = default;
    TNode(const string &type) : type(type) {}
    TNode(const string &type, const string &llvm_var) : type(type), llvm_var(llvm_var) {}
    virtual ~TNode() = default;
};

class IdentifierStr : public TNode {
public:
    string id;
    IdentifierStr(const string &type, string id) : TNode(type), id(id) {}
    IdentifierStr(const string &type, const string &id, const string &llvm_var) : TNode(type, llvm_var), id(id) {}
};

class Num : public TNode {
public:
    int num;
    Num(const string &type, int val) : TNode(type), num(val) {}
    Num(const string &type, int val,const string &llvm_var) : TNode(type,llvm_var), num(val) {}
};

class BoolLex : public TNode {
public:
    bool boolean;
    BoolLex(const string &type, bool boolean) : TNode(type), boolean(boolean) {}
    BoolLex(const string &type, bool boolean,const string &llvm_var) : TNode(type,llvm_var), boolean(boolean) {}
};

class StringLex : public TNode {
public:
    string s;
    StringLex(const string &type, const string& s) : TNode(type), s(s) {}
    StringLex(const string &type, const string& s,const string &llvm_var) : TNode(type,llvm_var), s(s) {}
};

class Binop : public TNode {
public:
    string op;
    Binop(const string &type, const string &op) : TNode(type), op(op) {}
    Binop(const string &type, const string &op,const string &llvm_var) : TNode(type,llvm_var), op(op) {}
};

class Relop : public TNode {
public:
    string op;
    Relop(const string &type, const string &op) : TNode(type), op(op) {}
    Relop(const string &type, const string &op,const string &llvm_var) : TNode(type,llvm_var), op(op) {}
};

class ExpNode : public TNode {
public:
    ExpNode(const string &type) : TNode(type) {}
    ExpNode(const string &type,const string &llvm_var) : TNode(type,llvm_var) {}
};

class StmtNode : public TNode {
public:
    StmtNode(const string &type) : TNode(type) {}
    StmtNode(const string &type,const string &llvm_var) : TNode(type,llvm_var) {}
};
#define YYSTYPE TNode*
#endif // HW3_TYPE_HPP