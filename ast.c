#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

static char *dupstr(const char *s){
    if(!s) return NULL;
    size_t n=strlen(s)+1;
    char *p=(char*)malloc(n);
    if(p) memcpy(p,s,n);
    return p;
}

AST *newNode(NodeKind kind, const char *text) {
    AST *n = (AST*)malloc(sizeof(AST));
    if(!n){ fprintf(stderr,"OOM\n"); exit(1); }
    n->kind = kind;
    n->text = dupstr(text);
    n->ival = 0;
    for (int i = 0; i < 3; i++) n->child[i] = NULL;
    n->next = NULL;
    return n;
}

AST *newIntNode(int val) {
    AST *n = newNode(NODE_LIT_INT, NULL);
    n->ival = val;
    return n;
}

AST *newCharNode(const char *ch){
    return newNode(NODE_LIT_CHAR, ch);
}

AST *linkNodes(AST *first, AST *next) {
    if (!first) return next;
    AST *p = first;
    while (p->next) p = p->next;
    p->next = next;
    return first;
}

static void indent(int level){
    for(int i=0;i<level;i++) printf("  ");
}

void printAST(AST *node, int level) {
    if (!node) return;
    indent(level);
    switch (node->kind) {
        case NODE_PROGRAMA:   printf("Programa\n"); break;
        case NODE_DECLVAR:    printf("DeclVar %s\n", node->text?node->text:""); break;
        case NODE_DECLFUNC:   printf("DeclFunc %s\n", node->text?node->text:""); break;
        case NODE_TIPO:       printf("Tipo %s\n", node->text?node->text:""); break;
        case NODE_BLOCO:      printf("Bloco\n"); break;
        case NODE_SEQ:        printf("Seq\n"); break;
        case NODE_PRINT:      printf("Escreva\n"); break;
        case NODE_PRINT_STR:  printf("EscrevaString "%s"\n", node->text?node->text:""); break;
        case NODE_READ:       printf("Leia %s\n", node->text?node->text:""); break;
        case NODE_RETURN:     printf("Retorne\n"); break;
        case NODE_IF:         printf("Se\n"); break;
        case NODE_WHILE:      printf("Enquanto\n"); break;
        case NODE_ASSIGN:     printf("Atribuicao\n"); break;
        case NODE_VAR:        printf("Var %s\n", node->text?node->text:""); break;
        case NODE_LIT_INT:    printf("Int %d\n", node->ival); break;
        case NODE_LIT_CHAR:   printf("Char %s\n", node->text?node->text:""); break;
        case NODE_UNOP:       printf("UnOp %s\n", node->text?node->text:""); break;
        case NODE_BINOP:      printf("BinOp %s\n", node->text?node->text:""); break;
        default:              printf("?\n"); break;
    }
    for (int i = 0; i < 3; i++)
        if (node->child[i]) printAST(node->child[i], level + 1);
    if (node->next) printAST(node->next, level);
}
