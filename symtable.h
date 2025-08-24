#ifndef SYMTABLE_H
#define SYMTABLE_H

#define MAX_SYMBOLS 1024

typedef enum { T_INT=1, T_CAR=2 } TypeTag;

typedef struct {
    char name[64];
    TypeTag type;
} Symbol;

typedef struct {
    Symbol table[MAX_SYMBOLS];
    int count;
} SymbolTable;

void initTable(SymbolTable *st);
int addSymbol(SymbolTable *st, const char *name, TypeTag type);
int lookupSymbol(SymbolTable *st, const char *name);
const char* typeName(TypeTag t);
void printTable(SymbolTable *st);

#endif
