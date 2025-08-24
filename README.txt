Goianinha Compiler - Etapa I (C + Flex + Bison)
==============================================
Conteúdo
--------
- ast.h / ast.c            : Definição e impressão da AST
- symtable.h / symtable.c  : Tabela de símbolos (global) com tipos
- lexer.l                  : Analisador léxico (Flex)
- parser.y                 : Analisador sintático (Bison) + construção de AST + integração com TS
- main.c                   : Ponto de entrada (parse e impressão de AST)
- Makefile                 : Compilação
- examples/teste.goi       : Programa exemplo

Dependências
------------
- flex, bison, gcc
Ex.: Ubuntu/Debian: sudo apt-get install flex bison build-essential

Como compilar
-------------
make
./goianinha examples/teste.goi

Observações
-----------
- A gramática foi adaptada para construir uma AST didática e verificar declarações/uso de variáveis
  na tabela de símbolos (escopo global). Você pode estender para escopos aninhados.
- O conjunto de operadores cobre: +, -, *, /, !, ==, !=, <, >, <=, >=, e/ou, atribuição (=).
- Comandos: ; (vazio), expr;, retorne expr;, leia id;, escreva expr;, escreva "string";, novalinha;,
  se (...) entao ... [senao ...], enquanto (...) execute ..., e Bloco { ... }.
