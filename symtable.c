#include <stdio.h>
#include <string.h>
#include "symtable.h"

void initTable(SymbolTable *st) { st->count = 0; }

int lookupSymbol(SymbolTable *st, const char *name) {
    for (int i = 0; i < st->count; i++) {
        if (strcmp(st->table[i].name, name) == 0) return i;
    }
    return -1;
}

int addSymbol(SymbolTable *st, const char *name, TypeTag type) {
    if (st->count >= MAX_SYMBOLS) return -1;
    if (lookupSymbol(st, name) != -1) {
        fprintf(stderr, "Erro: Identificador '%s' já declarado.\n", name);
        return -1;
    }
    strncpy(st->table[st->count].name, name, sizeof(st->table[st->count].name)-1);
    st->table[st->count].name[sizeof(st->table[st->count].name)-1] = '\0';
    st->table[st->count].type = type;
    st->count++;
    return st->count - 1;
}

const char* typeName(TypeTag t){
    switch(t){
        case T_INT: return "int";
        case T_CAR: return "car";
        default: return "?";
    }
}

void printTable(SymbolTable *st) {
    printf("=== Tabela de Símbolos ===\n");
    for (int i = 0; i < st->count; i++) {
        printf("%s : %s\n", st->table[i].name, typeName(st->table[i].type));
    }
}
