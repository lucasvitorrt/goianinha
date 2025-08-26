/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PROGRAMA = 258,                /* PROGRAMA  */
    RETORNE = 259,                 /* RETORNE  */
    LEIA = 260,                    /* LEIA  */
    ESCREVA = 261,                 /* ESCREVA  */
    NOVALINHA = 262,               /* NOVALINHA  */
    SE = 263,                      /* SE  */
    ENTAO = 264,                   /* ENTAO  */
    SENAO = 265,                   /* SENAO  */
    ENQUANTO = 266,                /* ENQUANTO  */
    EXECUTE = 267,                 /* EXECUTE  */
    INT = 268,                     /* INT  */
    CAR = 269,                     /* CAR  */
    OU = 270,                      /* OU  */
    E = 271,                       /* E  */
    ID = 272,                      /* ID  */
    INTCONST = 273,                /* INTCONST  */
    CARCONST = 274,                /* CARCONST  */
    STRING_LIT = 275,              /* STRING_LIT  */
    EQ = 276,                      /* EQ  */
    NE = 277,                      /* NE  */
    GE = 278,                      /* GE  */
    LE = 279,                      /* LE  */
    GT = 280,                      /* GT  */
    LT = 281,                      /* LT  */
    ASSIGN = 282,                  /* ASSIGN  */
    PLUS = 283,                    /* PLUS  */
    MINUS = 284,                   /* MINUS  */
    TIMES = 285,                   /* TIMES  */
    DIVIDE = 286,                  /* DIVIDE  */
    NOT = 287,                     /* NOT  */
    LBRACE = 288,                  /* LBRACE  */
    RBRACE = 289,                  /* RBRACE  */
    LPAREN = 290,                  /* LPAREN  */
    RPAREN = 291,                  /* RPAREN  */
    SEMI = 292,                    /* SEMI  */
    COMMA = 293                    /* COMMA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "parser.y"

    int ival;
    char *sval;
    AST *node;

#line 108 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
