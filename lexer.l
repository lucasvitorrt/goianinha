\
    %{
    #include "parser.tab.h"
    #include <string.h>
    #include <stdlib.h>
    #include <stdio.h>
    %}

    ID      [a-zA-Z_][a-zA-Z0-9_]*
    INTC    [0-9]+
    CHARC   \'(\\.|[^\\'])\'
    STRING  \"([^\"\\]|\\.)*\"

    %%

    "programa"      { return PROGRAMA; }
    "retorne"       { return RETORNE; }
    "leia"          { return LEIA; }
    "escreva"       { return ESCREVA; }
    "novalinha"     { return NOVALINHA; }
    "se"            { return SE; }
    "entao"         { return ENTAO; }
    "senao"         { return SENAO; }
    "enquanto"      { return ENQUANTO; }
    "execute"       { return EXECUTE; }
    "int"           { return INT; }
    "car"           { return CAR; }
    "ou"            { return OU; }
    "e"             { return E; }

    {ID}            { yylval.sval = strdup(yytext); return ID; }
    {INTC}          { yylval.ival = atoi(yytext); return INTCONST; }
    {CHARC}         { yylval.sval = strdup(yytext); return CARCONST; }
    {STRING}        { yylval.sval = strdup(yytext); return STRING_LIT; }

    "=="            { return EQ; }
    "!="            { return NE; }
    ">="            { return GE; }
    "<="            { return LE; }
    ">"             { return GT; }
    "<"             { return LT; }
    "="             { return ASSIGN; }
    "+"             { return PLUS; }
    "-"             { return MINUS; }
    "*"             { return TIMES; }
    "/"             { return DIVIDE; }
    "!"             { return NOT; }

    "{"             { return LBRACE; }
    "}"             { return RBRACE; }
    "("             { return LPAREN; }
    ")"             { return RPAREN; }
    ";"             { return SEMI; }
    ","             { return COMMA; }

    [ \t\r\n]+      ;
    "//".*          ;
    "/*"([^*]|\*+[^*/])*\*+ "/"   ;

    .               { fprintf(stderr, "Caractere inválido: %s\n", yytext); }

    %%

    int yywrap(void) { return 1; }
