#ifndef AST_H
#define AST_H

typedef enum {
    NODE_PROGRAMA,
    NODE_DECLVAR,
    NODE_DECLFUNC,
    NODE_TIPO,
    NODE_BLOCO,
    NODE_SEQ,
    NODE_PRINT,
    NODE_PRINT_STR,
    NODE_READ,
    NODE_RETURN,
    NODE_IF,
    NODE_WHILE,
    NODE_ASSIGN,
    NODE_VAR,
    NODE_LIT_INT,
    NODE_LIT_CHAR,
    NODE_UNOP,
    NODE_BINOP
} NodeKind;

typedef struct AST {
    NodeKind kind;
    char *text;             // id, operador, string literal ou info de tipo
    int ival;               // valor inteiro
    struct AST *child[3];   // até 3 filhos p/ simplificar
    struct AST *next;       // para sequências (listas)
} AST;

AST *newNode(NodeKind kind, const char *text);
AST *newIntNode(int val);
AST *newCharNode(const char *ch);
AST *linkNodes(AST *first, AST *next);
void printAST(AST *node, int level);

#endif
