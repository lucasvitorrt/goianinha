%{
#include "ast.h"
#include "symtable.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror(const char *s);

AST *root = NULL;
SymbolTable symtab;
%}

%union {
    int ival;
    char *sval;
    AST *node;
}

%token PROGRAMA RETORNE LEIA ESCREVA NOVALINHA SE ENTAO SENAO ENQUANTO EXECUTE
%token INT CAR OU E
%token ID INTCONST CARCONST STRING_LIT
%token EQ NE GE LE GT LT ASSIGN
%token PLUS MINUS TIMES DIVIDE NOT
%token LBRACE RBRACE LPAREN RPAREN SEMI COMMA

%type <node> Programa DeclFuncVar DeclProg DeclVar DeclFunc ListaParametros ListaParametrosCont
%type <node> Bloco ListaDeclVar Tipo ListaComando Comando Expr OrExpr AndExpr EqExpr DesigExpr AddExpr MulExpr UnExpr LValueExpr PrimExpr ListExpr
%type <sval> ID STRING_LIT CARCONST
%type <ival> INTCONST

%%

Programa:
      DeclFuncVar DeclProg { root = newNode(NODE_PROGRAMA, NULL); root->child[0] = $2; }
    ;

DeclFuncVar:
      Tipo ID DeclVar SEMI DeclFuncVar   { /* decl vars globais do tipo */ 
                                            addSymbol(&symtab, $2, strcmp($1->text,"int")==0?T_INT:T_CAR);
                                          }
    | Tipo ID DeclFunc DeclFuncVar       { /* protótipo simples de função + bloco */ 
                                            /* Para Etapa I, só reconhecemos; AST mínima */
                                          }
    | /* vazio */                        { }
    ;

DeclProg:
      PROGRAMA Bloco         { $$ = $2; }
    ;

DeclVar:
      COMMA ID DeclVar       { addSymbol(&symtab, $2, T_INT); /* assume int por padrão se não houver Tipo repetido na regra */ }
    | /* vazio */
    ;

DeclFunc:
      LPAREN ListaParametros RPAREN Bloco { /* não construímos AST de função nesta etapa */ }
    ;

ListaParametros:
      /* vazio */
    | ListaParametrosCont
    ;

ListaParametrosCont:
      Tipo ID
    | Tipo ID COMMA ListaParametrosCont
    ;

Bloco:
      LBRACE ListaDeclVar ListaComando RBRACE  { $$ = newNode(NODE_BLOCO, NULL); $$->child[0] = linkNodes($2, $3); }
    | LBRACE ListaDeclVar RBRACE               { $$ = newNode(NODE_BLOCO, NULL); $$->child[0] = $2; }
    ;

ListaDeclVar:
      /* vazio */                               { $$ = NULL; }
    | Tipo ID DeclVar SEMI ListaDeclVar         { addSymbol(&symtab, $2, strcmp($1->text,"int")==0?T_INT:T_CAR); $$ = $5; }
    ;

Tipo:
      INT     { $$ = newNode(NODE_TIPO, "int"); }
    | CAR     { $$ = newNode(NODE_TIPO, "car"); }
    ;

ListaComando:
      Comando                      { $$ = $1; }
    | ListaComando Comando         { $$ = linkNodes($1, $2); }
    ;

Comando:
      SEMI                         { $$ = NULL; }
    | Expr SEMI                    { $$ = $1; }
    | RETORNE Expr SEMI            { $$ = newNode(NODE_RETURN, NULL); $$->child[0] = $2; }
    | LEIA LValueExpr SEMI         { $$ = newNode(NODE_READ, $2->text); }
    | ESCREVA Expr SEMI            { $$ = newNode(NODE_PRINT, NULL); $$->child[0] = $2; }
    | ESCREVA STRING_LIT SEMI      { $$ = newNode(NODE_PRINT_STR, $2); }
    | NOVALINHA SEMI               { $$ = newNode(NODE_PRINT_STR, "\n"); }
    | SE LPAREN Expr RPAREN ENTAO Comando
                                    { $$ = newNode(NODE_IF, NULL); $$->child[0] = $3; $$->child[1] = $6; }
    | SE LPAREN Expr RPAREN ENTAO Comando SENAO Comando
                                    { $$ = newNode(NODE_IF, NULL); $$->child[0] = $3; $$->child[1] = $6; $$->child[2] = $8; }
    | ENQUANTO LPAREN Expr RPAREN EXECUTE Comando
                                    { $$ = newNode(NODE_WHILE, NULL); $$->child[0] = $3; $$->child[1] = $6; }
    | Bloco                         { $$ = $1; }
    ;

Expr:
      OrExpr
    | LValueExpr ASSIGN Expr       { $$ = newNode(NODE_ASSIGN, "="); $$->child[0] = $1; $$->child[1] = $3;
                                     if(lookupSymbol(&symtab, $1->text) == -1)
                                       fprintf(stderr, "Erro: variável '%s' não declarada.\n", $1->text);
                                   }
    ;

OrExpr:
      OrExpr OU AndExpr            { $$ = newNode(NODE_BINOP, "ou"); $$->child[0] = $1; $$->child[1] = $3; }
    | AndExpr
    ;

AndExpr:
      AndExpr E EqExpr             { $$ = newNode(NODE_BINOP, "e"); $$->child[0] = $1; $$->child[1] = $3; }
    | EqExpr
    ;

EqExpr:
      EqExpr EQ DesigExpr          { $$ = newNode(NODE_BINOP, "=="); $$->child[0] = $1; $$->child[1] = $3; }
    | EqExpr NE DesigExpr          { $$ = newNode(NODE_BINOP, "!="); $$->child[0] = $1; $$->child[1] = $3; }
    | DesigExpr
    ;

DesigExpr:
      DesigExpr LT AddExpr         { $$ = newNode(NODE_BINOP, "<"); $$->child[0] = $1; $$->child[1] = $3; }
    | DesigExpr GT AddExpr         { $$ = newNode(NODE_BINOP, ">"); $$->child[0] = $1; $$->child[1] = $3; }
    | DesigExpr GE AddExpr         { $$ = newNode(NODE_BINOP, ">="); $$->child[0] = $1; $$->child[1] = $3; }
    | DesigExpr LE AddExpr         { $$ = newNode(NODE_BINOP, "<="); $$->child[0] = $1; $$->child[1] = $3; }
    | AddExpr
    ;

AddExpr:
      AddExpr PLUS MulExpr         { $$ = newNode(NODE_BINOP, "+"); $$->child[0] = $1; $$->child[1] = $3; }
    | AddExpr MINUS MulExpr        { $$ = newNode(NODE_BINOP, "-"); $$->child[0] = $1; $$->child[1] = $3; }
    | MulExpr
    ;

MulExpr:
      MulExpr TIMES UnExpr         { $$ = newNode(NODE_BINOP, "*"); $$->child[0] = $1; $$->child[1] = $3; }
    | MulExpr DIVIDE UnExpr        { $$ = newNode(NODE_BINOP, "/"); $$->child[0] = $1; $$->child[1] = $3; }
    | UnExpr
    ;

UnExpr:
      MINUS PrimExpr               { $$ = newNode(NODE_UNOP, "-"); $$->child[0] = $2; }
    | NOT PrimExpr                 { $$ = newNode(NODE_UNOP, "!"); $$->child[0] = $2; }
    | PrimExpr
    ;

LValueExpr:
      ID                           { $$ = newNode(NODE_VAR, $1);
                                     if(lookupSymbol(&symtab, $1) == -1)
                                       fprintf(stderr, "Aviso: uso de variável '%s' antes de declarar.\n", $1);
                                   }
    ;

PrimExpr:
      ID LPAREN ListExpr RPAREN    { $$ = newNode(NODE_VAR, $1); /* chamada de função - não implementada */ }
    | ID LPAREN RPAREN             { $$ = newNode(NODE_VAR, $1); /* chamada vazia - não implementada */ }
    | ID                           { $$ = newNode(NODE_VAR, $1); }
    | CARCONST                     { $$ = newNode(NODE_LIT_CHAR, $1); }
    | INTCONST                     { $$ = newIntNode($1); }
    | LPAREN Expr RPAREN           { $$ = $2; }
    ;

ListExpr:
      Expr                         { $$ = $1; }
    | ListExpr COMMA Expr          { $$ = linkNodes($1, $3); }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Erro de sintaxe: %s\n", s);
}
