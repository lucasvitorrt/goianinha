#include <stdio.h>
#include <stdlib.h>
#include "ast.h"
#include "symtable.h"

extern int yyparse(void);
extern FILE *yyin;
extern AST *root;
extern SymbolTable symtab;

int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) { perror("Erro ao abrir arquivo"); return 1; }
    }
    initTable(&symtab);
    if (yyparse() == 0) {
        puts("== AST ==");
        printAST(root, 0);
        puts("");
        printTable(&symtab);
    }
    if (yyin && yyin != stdin) fclose(yyin);
    return 0;
}
