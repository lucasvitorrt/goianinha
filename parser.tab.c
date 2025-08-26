/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include "ast.h"
#include "symtable.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror(const char *s);

AST *root = NULL;
SymbolTable symtab;

#line 85 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PROGRAMA = 3,                   /* PROGRAMA  */
  YYSYMBOL_RETORNE = 4,                    /* RETORNE  */
  YYSYMBOL_LEIA = 5,                       /* LEIA  */
  YYSYMBOL_ESCREVA = 6,                    /* ESCREVA  */
  YYSYMBOL_NOVALINHA = 7,                  /* NOVALINHA  */
  YYSYMBOL_SE = 8,                         /* SE  */
  YYSYMBOL_ENTAO = 9,                      /* ENTAO  */
  YYSYMBOL_SENAO = 10,                     /* SENAO  */
  YYSYMBOL_ENQUANTO = 11,                  /* ENQUANTO  */
  YYSYMBOL_EXECUTE = 12,                   /* EXECUTE  */
  YYSYMBOL_INT = 13,                       /* INT  */
  YYSYMBOL_CAR = 14,                       /* CAR  */
  YYSYMBOL_OU = 15,                        /* OU  */
  YYSYMBOL_E = 16,                         /* E  */
  YYSYMBOL_ID = 17,                        /* ID  */
  YYSYMBOL_INTCONST = 18,                  /* INTCONST  */
  YYSYMBOL_CARCONST = 19,                  /* CARCONST  */
  YYSYMBOL_STRING_LIT = 20,                /* STRING_LIT  */
  YYSYMBOL_EQ = 21,                        /* EQ  */
  YYSYMBOL_NE = 22,                        /* NE  */
  YYSYMBOL_GE = 23,                        /* GE  */
  YYSYMBOL_LE = 24,                        /* LE  */
  YYSYMBOL_GT = 25,                        /* GT  */
  YYSYMBOL_LT = 26,                        /* LT  */
  YYSYMBOL_ASSIGN = 27,                    /* ASSIGN  */
  YYSYMBOL_PLUS = 28,                      /* PLUS  */
  YYSYMBOL_MINUS = 29,                     /* MINUS  */
  YYSYMBOL_TIMES = 30,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 31,                    /* DIVIDE  */
  YYSYMBOL_NOT = 32,                       /* NOT  */
  YYSYMBOL_LBRACE = 33,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 34,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 35,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 36,                    /* RPAREN  */
  YYSYMBOL_SEMI = 37,                      /* SEMI  */
  YYSYMBOL_COMMA = 38,                     /* COMMA  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_Programa = 40,                  /* Programa  */
  YYSYMBOL_DeclFuncVar = 41,               /* DeclFuncVar  */
  YYSYMBOL_DeclProg = 42,                  /* DeclProg  */
  YYSYMBOL_DeclVar = 43,                   /* DeclVar  */
  YYSYMBOL_DeclFunc = 44,                  /* DeclFunc  */
  YYSYMBOL_ListaParametros = 45,           /* ListaParametros  */
  YYSYMBOL_ListaParametrosCont = 46,       /* ListaParametrosCont  */
  YYSYMBOL_Bloco = 47,                     /* Bloco  */
  YYSYMBOL_ListaDeclVar = 48,              /* ListaDeclVar  */
  YYSYMBOL_Tipo = 49,                      /* Tipo  */
  YYSYMBOL_ListaComando = 50,              /* ListaComando  */
  YYSYMBOL_Comando = 51,                   /* Comando  */
  YYSYMBOL_Expr = 52,                      /* Expr  */
  YYSYMBOL_OrExpr = 53,                    /* OrExpr  */
  YYSYMBOL_AndExpr = 54,                   /* AndExpr  */
  YYSYMBOL_EqExpr = 55,                    /* EqExpr  */
  YYSYMBOL_DesigExpr = 56,                 /* DesigExpr  */
  YYSYMBOL_AddExpr = 57,                   /* AddExpr  */
  YYSYMBOL_MulExpr = 58,                   /* MulExpr  */
  YYSYMBOL_UnExpr = 59,                    /* UnExpr  */
  YYSYMBOL_LValueExpr = 60,                /* LValueExpr  */
  YYSYMBOL_PrimExpr = 61,                  /* PrimExpr  */
  YYSYMBOL_ListExpr = 62                   /* ListExpr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  125

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    36,    36,    40,    43,    46,    50,    54,    55,    59,
      62,    64,    68,    69,    73,    74,    78,    79,    83,    84,
      88,    89,    93,    94,    95,    96,    97,    98,    99,   100,
     102,   104,   106,   110,   111,   118,   119,   123,   124,   128,
     129,   130,   134,   135,   136,   137,   138,   142,   143,   144,
     148,   149,   150,   154,   155,   156,   160,   167,   168,   169,
     170,   171,   172,   176,   177
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PROGRAMA", "RETORNE",
  "LEIA", "ESCREVA", "NOVALINHA", "SE", "ENTAO", "SENAO", "ENQUANTO",
  "EXECUTE", "INT", "CAR", "OU", "E", "ID", "INTCONST", "CARCONST",
  "STRING_LIT", "EQ", "NE", "GE", "LE", "GT", "LT", "ASSIGN", "PLUS",
  "MINUS", "TIMES", "DIVIDE", "NOT", "LBRACE", "RBRACE", "LPAREN",
  "RPAREN", "SEMI", "COMMA", "$accept", "Programa", "DeclFuncVar",
  "DeclProg", "DeclVar", "DeclFunc", "ListaParametros",
  "ListaParametrosCont", "Bloco", "ListaDeclVar", "Tipo", "ListaComando",
  "Comando", "Expr", "OrExpr", "AndExpr", "EqExpr", "DesigExpr", "AddExpr",
  "MulExpr", "UnExpr", "LValueExpr", "PrimExpr", "ListExpr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-36)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      31,   -36,   -36,    24,    39,    17,   -36,     5,   -36,   -21,
      31,   -36,    31,    43,    41,    31,    14,    65,    49,   -36,
      70,    52,    31,   -36,    57,    81,   119,    63,    78,    79,
     -20,   -36,   -36,    -9,    -9,   -36,    57,   -36,   -36,    62,
     -36,    82,   103,   104,    35,     4,   -17,    28,   -36,    94,
     -36,    52,     5,    85,   -36,   -36,    87,   -36,    89,    95,
      97,   -36,    57,    57,    93,   108,   -36,   -36,   109,   -36,
     -36,   -36,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,    57,   107,   -36,    31,   -36,   -36,
     -36,   -36,   110,   111,   -36,   -36,    -1,   -36,   104,    35,
       4,     4,   -17,   -17,   -17,   -17,    28,    28,   -36,   -36,
     -36,    31,   -36,   140,   138,   -36,    57,   -36,    98,    98,
     -36,   143,   -36,    98,   -36
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,    18,    19,     0,     0,     0,     1,     0,     2,     8,
      16,     6,    10,     0,     0,     5,     0,     0,     0,    11,
       0,     8,     5,     4,     0,     0,     0,     0,     0,     0,
      59,    61,    60,     0,     0,    15,     0,    22,    32,     0,
      20,     0,    33,    36,    38,    41,    46,    49,    52,     0,
      55,     8,     0,    12,     7,     3,     0,    56,     0,     0,
       0,    28,     0,     0,     0,    59,    53,    54,     0,    14,
      21,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,     0,    24,    25,
      27,    26,     0,     0,    58,    63,     0,    62,    35,    37,
      39,    40,    44,    45,    43,    42,    47,    48,    50,    51,
      34,    16,    13,     0,     0,    57,     0,    17,     0,     0,
      64,    29,    31,     0,    30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -36,   -36,     1,   -36,   -15,   -36,   -36,    69,    -2,    46,
     -10,   -36,   -35,   -23,   -36,    88,    86,   -12,   -24,   -16,
     -11,   136,    74,   -36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     8,    14,    15,    18,    19,    38,    16,
       5,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    96
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      17,    56,    20,    60,    70,    11,    54,   -56,    65,    31,
      32,    80,    81,    68,    12,    64,    23,    13,    24,    25,
      26,    27,    28,    55,     6,    29,    36,    76,    77,    78,
      79,    30,    31,    32,     9,   115,    85,   116,    10,    92,
      93,    95,     7,    33,     1,     2,    34,    10,    35,    36,
      86,    37,   102,   103,   104,   105,    74,    75,    82,    83,
      21,   110,   100,   101,   106,   107,    24,    25,    26,    27,
      28,   108,   109,    29,    30,    31,    32,    20,    22,    30,
      31,    32,    51,   121,   122,    52,    33,    53,   124,    34,
      13,    33,    36,   120,    34,    10,    69,    36,    57,    37,
      61,    17,    24,    25,    26,    27,    28,    66,    67,    29,
      30,    31,    32,    62,    63,    30,    31,    32,    72,    71,
      73,    84,    33,    87,    88,    34,    89,    33,    36,    94,
      34,    10,    90,    36,    91,    37,    30,    31,    32,    59,
      65,    31,    32,    64,   111,    97,   113,   114,    33,   118,
     119,    34,    33,   123,    36,    34,   112,   117,    36,    99,
      98,    58
};

static const yytype_int8 yycheck[] =
{
      10,    24,    12,    26,    39,     7,    21,    27,    17,    18,
      19,    28,    29,    36,    35,    35,    15,    38,     4,     5,
       6,     7,     8,    22,     0,    11,    35,    23,    24,    25,
      26,    17,    18,    19,    17,    36,    51,    38,    33,    62,
      63,    64,     3,    29,    13,    14,    32,    33,    34,    35,
      52,    37,    76,    77,    78,    79,    21,    22,    30,    31,
      17,    84,    74,    75,    80,    81,     4,     5,     6,     7,
       8,    82,    83,    11,    17,    18,    19,    87,    37,    17,
      18,    19,    17,   118,   119,    36,    29,    17,   123,    32,
      38,    29,    35,   116,    32,    33,    34,    35,    17,    37,
      37,   111,     4,     5,     6,     7,     8,    33,    34,    11,
      17,    18,    19,    35,    35,    17,    18,    19,    15,    37,
      16,    27,    29,    38,    37,    32,    37,    29,    35,    36,
      32,    33,    37,    35,    37,    37,    17,    18,    19,    20,
      17,    18,    19,    35,    37,    36,    36,    36,    29,     9,
      12,    32,    29,    10,    35,    32,    87,   111,    35,    73,
      72,    25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    13,    14,    40,    41,    49,     0,     3,    42,    17,
      33,    47,    35,    38,    43,    44,    48,    49,    45,    46,
      49,    17,    37,    41,     4,     5,     6,     7,     8,    11,
      17,    18,    19,    29,    32,    34,    35,    37,    47,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    17,    36,    17,    43,    41,    52,    17,    60,    20,
      52,    37,    35,    35,    35,    17,    61,    61,    52,    34,
      51,    37,    15,    16,    21,    22,    23,    24,    25,    26,
      28,    29,    30,    31,    27,    43,    47,    38,    37,    37,
      37,    37,    52,    52,    36,    52,    62,    36,    54,    55,
      56,    56,    57,    57,    57,    57,    58,    58,    59,    59,
      52,    37,    46,    36,    36,    36,    38,    48,     9,    12,
      52,    51,    51,    10,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    41,    42,    43,    43,    44,
      45,    45,    46,    46,    47,    47,    48,    48,    49,    49,
      50,    50,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    52,    52,    53,    53,    54,    54,    55,
      55,    55,    56,    56,    56,    56,    56,    57,    57,    57,
      58,    58,    58,    59,    59,    59,    60,    61,    61,    61,
      61,    61,    61,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     5,     4,     0,     2,     3,     0,     4,
       0,     1,     2,     4,     4,     3,     0,     5,     1,     1,
       1,     2,     1,     2,     3,     3,     3,     3,     2,     6,
       8,     6,     1,     1,     3,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     2,     2,     1,     1,     4,     3,     1,
       1,     1,     3,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Programa: DeclFuncVar DeclProg  */
#line 36 "parser.y"
                           { root = newNode(NODE_PROGRAMA, NULL); root->child[0] = (yyvsp[0].node); }
#line 1222 "parser.tab.c"
    break;

  case 3: /* DeclFuncVar: Tipo ID DeclVar SEMI DeclFuncVar  */
#line 40 "parser.y"
                                         { /* decl vars globais do tipo */ 
                                            addSymbol(&symtab, (yyvsp[-3].sval), strcmp((yyvsp[-4].node)->text,"int")==0?T_INT:T_CAR);
                                          }
#line 1230 "parser.tab.c"
    break;

  case 4: /* DeclFuncVar: Tipo ID DeclFunc DeclFuncVar  */
#line 43 "parser.y"
                                         { /* protótipo simples de função + bloco */ 
                                            /* Para Etapa I, só reconhecemos; AST mínima */
                                          }
#line 1238 "parser.tab.c"
    break;

  case 5: /* DeclFuncVar: %empty  */
#line 46 "parser.y"
                                         { }
#line 1244 "parser.tab.c"
    break;

  case 6: /* DeclProg: PROGRAMA Bloco  */
#line 50 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1250 "parser.tab.c"
    break;

  case 7: /* DeclVar: COMMA ID DeclVar  */
#line 54 "parser.y"
                             { addSymbol(&symtab, (yyvsp[-1].sval), T_INT); /* assume int por padrão se não houver Tipo repetido na regra */ }
#line 1256 "parser.tab.c"
    break;

  case 9: /* DeclFunc: LPAREN ListaParametros RPAREN Bloco  */
#line 59 "parser.y"
                                          { /* não construímos AST de função nesta etapa */ }
#line 1262 "parser.tab.c"
    break;

  case 14: /* Bloco: LBRACE ListaDeclVar ListaComando RBRACE  */
#line 73 "parser.y"
                                               { (yyval.node) = newNode(NODE_BLOCO, NULL); (yyval.node)->child[0] = linkNodes((yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1268 "parser.tab.c"
    break;

  case 15: /* Bloco: LBRACE ListaDeclVar RBRACE  */
#line 74 "parser.y"
                                               { (yyval.node) = newNode(NODE_BLOCO, NULL); (yyval.node)->child[0] = (yyvsp[-1].node); }
#line 1274 "parser.tab.c"
    break;

  case 16: /* ListaDeclVar: %empty  */
#line 78 "parser.y"
                                                { (yyval.node) = NULL; }
#line 1280 "parser.tab.c"
    break;

  case 17: /* ListaDeclVar: Tipo ID DeclVar SEMI ListaDeclVar  */
#line 79 "parser.y"
                                                { addSymbol(&symtab, (yyvsp[-3].sval), strcmp((yyvsp[-4].node)->text,"int")==0?T_INT:T_CAR); (yyval.node) = (yyvsp[0].node); }
#line 1286 "parser.tab.c"
    break;

  case 18: /* Tipo: INT  */
#line 83 "parser.y"
              { (yyval.node) = newNode(NODE_TIPO, "int"); }
#line 1292 "parser.tab.c"
    break;

  case 19: /* Tipo: CAR  */
#line 84 "parser.y"
              { (yyval.node) = newNode(NODE_TIPO, "car"); }
#line 1298 "parser.tab.c"
    break;

  case 20: /* ListaComando: Comando  */
#line 88 "parser.y"
                                   { (yyval.node) = (yyvsp[0].node); }
#line 1304 "parser.tab.c"
    break;

  case 21: /* ListaComando: ListaComando Comando  */
#line 89 "parser.y"
                                   { (yyval.node) = linkNodes((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1310 "parser.tab.c"
    break;

  case 22: /* Comando: SEMI  */
#line 93 "parser.y"
                                   { (yyval.node) = NULL; }
#line 1316 "parser.tab.c"
    break;

  case 23: /* Comando: Expr SEMI  */
#line 94 "parser.y"
                                   { (yyval.node) = (yyvsp[-1].node); }
#line 1322 "parser.tab.c"
    break;

  case 24: /* Comando: RETORNE Expr SEMI  */
#line 95 "parser.y"
                                   { (yyval.node) = newNode(NODE_RETURN, NULL); (yyval.node)->child[0] = (yyvsp[-1].node); }
#line 1328 "parser.tab.c"
    break;

  case 25: /* Comando: LEIA LValueExpr SEMI  */
#line 96 "parser.y"
                                   { (yyval.node) = newNode(NODE_READ, (yyvsp[-1].node)->text); }
#line 1334 "parser.tab.c"
    break;

  case 26: /* Comando: ESCREVA Expr SEMI  */
#line 97 "parser.y"
                                   { (yyval.node) = newNode(NODE_PRINT, NULL); (yyval.node)->child[0] = (yyvsp[-1].node); }
#line 1340 "parser.tab.c"
    break;

  case 27: /* Comando: ESCREVA STRING_LIT SEMI  */
#line 98 "parser.y"
                                   { (yyval.node) = newNode(NODE_PRINT_STR, (yyvsp[-1].sval)); }
#line 1346 "parser.tab.c"
    break;

  case 28: /* Comando: NOVALINHA SEMI  */
#line 99 "parser.y"
                                   { (yyval.node) = newNode(NODE_PRINT_STR, "\n"); }
#line 1352 "parser.tab.c"
    break;

  case 29: /* Comando: SE LPAREN Expr RPAREN ENTAO Comando  */
#line 101 "parser.y"
                                    { (yyval.node) = newNode(NODE_IF, NULL); (yyval.node)->child[0] = (yyvsp[-3].node); (yyval.node)->child[1] = (yyvsp[0].node); }
#line 1358 "parser.tab.c"
    break;

  case 30: /* Comando: SE LPAREN Expr RPAREN ENTAO Comando SENAO Comando  */
#line 103 "parser.y"
                                    { (yyval.node) = newNode(NODE_IF, NULL); (yyval.node)->child[0] = (yyvsp[-5].node); (yyval.node)->child[1] = (yyvsp[-2].node); (yyval.node)->child[2] = (yyvsp[0].node); }
#line 1364 "parser.tab.c"
    break;

  case 31: /* Comando: ENQUANTO LPAREN Expr RPAREN EXECUTE Comando  */
#line 105 "parser.y"
                                    { (yyval.node) = newNode(NODE_WHILE, NULL); (yyval.node)->child[0] = (yyvsp[-3].node); (yyval.node)->child[1] = (yyvsp[0].node); }
#line 1370 "parser.tab.c"
    break;

  case 32: /* Comando: Bloco  */
#line 106 "parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1376 "parser.tab.c"
    break;

  case 34: /* Expr: LValueExpr ASSIGN Expr  */
#line 111 "parser.y"
                                   { (yyval.node) = newNode(NODE_ASSIGN, "="); (yyval.node)->child[0] = (yyvsp[-2].node); (yyval.node)->child[1] = (yyvsp[0].node);
                                     if(lookupSymbol(&symtab, (yyvsp[-2].node)->text) == -1)
                                       fprintf(stderr, "Erro: variável '%s' não declarada.\n", (yyvsp[-2].node)->text);
                                   }
#line 1385 "parser.tab.c"
    break;

  case 35: /* OrExpr: OrExpr OU AndExpr  */
#line 118 "parser.y"
                                   { (yyval.node) = newNode(NODE_BINOP, "ou"); (yyval.node)->child[0] = (yyvsp[-2].node); (yyval.node)->child[1] = (yyvsp[0].node); }
#line 1391 "parser.tab.c"
    break;

  case 37: /* AndExpr: AndExpr E EqExpr  */
#line 123 "parser.y"
                                   { (yyval.node) = newNode(NODE_BINOP, "e"); (yyval.node)->child[0] = (yyvsp[-2].node); (yyval.node)->child[1] = (yyvsp[0].node); }
#line 1397 "parser.tab.c"
    break;

  case 39: /* EqExpr: EqExpr EQ DesigExpr  */
#line 128 "parser.y"
                                   { (yyval.node) = newNode(NODE_BINOP, "=="); (yyval.node)->child[0] = (yyvsp[-2].node); (yyval.node)->child[1] = (yyvsp[0].node); }
#line 1403 "parser.tab.c"
    break;

  case 40: /* EqExpr: EqExpr NE DesigExpr  */
#line 129 "parser.y"
                                   { (yyval.node) = newNode(NODE_BINOP, "!="); (yyval.node)->child[0] = (yyvsp[-2].node); (yyval.node)->child[1] = (yyvsp[0].node); }
#line 1409 "parser.tab.c"
    break;

  case 42: /* DesigExpr: DesigExpr LT AddExpr  */
#line 134 "parser.y"
                                   { (yyval.node) = newNode(NODE_BINOP, "<"); (yyval.node)->child[0] = (yyvsp[-2].node); (yyval.node)->child[1] = (yyvsp[0].node); }
#line 1415 "parser.tab.c"
    break;

  case 43: /* DesigExpr: DesigExpr GT AddExpr  */
#line 135 "parser.y"
                                   { (yyval.node) = newNode(NODE_BINOP, ">"); (yyval.node)->child[0] = (yyvsp[-2].node); (yyval.node)->child[1] = (yyvsp[0].node); }
#line 1421 "parser.tab.c"
    break;

  case 44: /* DesigExpr: DesigExpr GE AddExpr  */
#line 136 "parser.y"
                                   { (yyval.node) = newNode(NODE_BINOP, ">="); (yyval.node)->child[0] = (yyvsp[-2].node); (yyval.node)->child[1] = (yyvsp[0].node); }
#line 1427 "parser.tab.c"
    break;

  case 45: /* DesigExpr: DesigExpr LE AddExpr  */
#line 137 "parser.y"
                                   { (yyval.node) = newNode(NODE_BINOP, "<="); (yyval.node)->child[0] = (yyvsp[-2].node); (yyval.node)->child[1] = (yyvsp[0].node); }
#line 1433 "parser.tab.c"
    break;

  case 47: /* AddExpr: AddExpr PLUS MulExpr  */
#line 142 "parser.y"
                                   { (yyval.node) = newNode(NODE_BINOP, "+"); (yyval.node)->child[0] = (yyvsp[-2].node); (yyval.node)->child[1] = (yyvsp[0].node); }
#line 1439 "parser.tab.c"
    break;

  case 48: /* AddExpr: AddExpr MINUS MulExpr  */
#line 143 "parser.y"
                                   { (yyval.node) = newNode(NODE_BINOP, "-"); (yyval.node)->child[0] = (yyvsp[-2].node); (yyval.node)->child[1] = (yyvsp[0].node); }
#line 1445 "parser.tab.c"
    break;

  case 50: /* MulExpr: MulExpr TIMES UnExpr  */
#line 148 "parser.y"
                                   { (yyval.node) = newNode(NODE_BINOP, "*"); (yyval.node)->child[0] = (yyvsp[-2].node); (yyval.node)->child[1] = (yyvsp[0].node); }
#line 1451 "parser.tab.c"
    break;

  case 51: /* MulExpr: MulExpr DIVIDE UnExpr  */
#line 149 "parser.y"
                                   { (yyval.node) = newNode(NODE_BINOP, "/"); (yyval.node)->child[0] = (yyvsp[-2].node); (yyval.node)->child[1] = (yyvsp[0].node); }
#line 1457 "parser.tab.c"
    break;

  case 53: /* UnExpr: MINUS PrimExpr  */
#line 154 "parser.y"
                                   { (yyval.node) = newNode(NODE_UNOP, "-"); (yyval.node)->child[0] = (yyvsp[0].node); }
#line 1463 "parser.tab.c"
    break;

  case 54: /* UnExpr: NOT PrimExpr  */
#line 155 "parser.y"
                                   { (yyval.node) = newNode(NODE_UNOP, "!"); (yyval.node)->child[0] = (yyvsp[0].node); }
#line 1469 "parser.tab.c"
    break;

  case 56: /* LValueExpr: ID  */
#line 160 "parser.y"
                                   { (yyval.node) = newNode(NODE_VAR, (yyvsp[0].sval));
                                     if(lookupSymbol(&symtab, (yyvsp[0].sval)) == -1)
                                       fprintf(stderr, "Aviso: uso de variável '%s' antes de declarar.\n", (yyvsp[0].sval));
                                   }
#line 1478 "parser.tab.c"
    break;

  case 57: /* PrimExpr: ID LPAREN ListExpr RPAREN  */
#line 167 "parser.y"
                                   { (yyval.node) = newNode(NODE_VAR, (yyvsp[-3].sval)); /* chamada de função - não implementada */ }
#line 1484 "parser.tab.c"
    break;

  case 58: /* PrimExpr: ID LPAREN RPAREN  */
#line 168 "parser.y"
                                   { (yyval.node) = newNode(NODE_VAR, (yyvsp[-2].sval)); /* chamada vazia - não implementada */ }
#line 1490 "parser.tab.c"
    break;

  case 59: /* PrimExpr: ID  */
#line 169 "parser.y"
                                   { (yyval.node) = newNode(NODE_VAR, (yyvsp[0].sval)); }
#line 1496 "parser.tab.c"
    break;

  case 60: /* PrimExpr: CARCONST  */
#line 170 "parser.y"
                                   { (yyval.node) = newNode(NODE_LIT_CHAR, (yyvsp[0].sval)); }
#line 1502 "parser.tab.c"
    break;

  case 61: /* PrimExpr: INTCONST  */
#line 171 "parser.y"
                                   { (yyval.node) = newIntNode((yyvsp[0].ival)); }
#line 1508 "parser.tab.c"
    break;

  case 62: /* PrimExpr: LPAREN Expr RPAREN  */
#line 172 "parser.y"
                                   { (yyval.node) = (yyvsp[-1].node); }
#line 1514 "parser.tab.c"
    break;

  case 63: /* ListExpr: Expr  */
#line 176 "parser.y"
                                   { (yyval.node) = (yyvsp[0].node); }
#line 1520 "parser.tab.c"
    break;

  case 64: /* ListExpr: ListExpr COMMA Expr  */
#line 177 "parser.y"
                                   { (yyval.node) = linkNodes((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1526 "parser.tab.c"
    break;


#line 1530 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 180 "parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Erro de sintaxe: %s\n", s);
}
