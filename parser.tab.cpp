/* A Bison parser, made by GNU Bison 3.7.6.  */

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
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "parser.ypp"

    #include <iostream>
    using namespace std;
    int yylex();
    void yyerror(const char*);
    #include "hw3_output.hpp"
    #include "output.hpp"
    extern int yylineno;
    using namespace output;
    int loopDepth = 0;
    #include "source.hpp"
    #include "CheckFunctions.h"
    TablesStack* tableStack=new TablesStack;
    offsetStack* offsettStack=new offsetStack;
    #define YYERROR_VERBOSE 1 
    /* //for tests:  #define YYDEBUG 1 */
    string global_exp_type = "";
    ExpNode* global_Exp = nullptr;
    string global_label="";
    #include "cg.hpp"
    #include "helper.hpp"
    #include <stack>
    stack<ExpNode*> globalExpStack;
    std::stack<ExpNode*> loopEntryLabels; 


#line 98 "parser.tab.cpp"

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

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_BYTE = 4,                       /* BYTE  */
  YYSYMBOL_B = 5,                          /* B  */
  YYSYMBOL_BOOL = 6,                       /* BOOL  */
  YYSYMBOL_TRUE = 7,                       /* TRUE  */
  YYSYMBOL_FALSE = 8,                      /* FALSE  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_BREAK = 12,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 13,                  /* CONTINUE  */
  YYSYMBOL_SC = 14,                        /* SC  */
  YYSYMBOL_LBRACE = 15,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 16,                    /* RBRACE  */
  YYSYMBOL_ID = 17,                        /* ID  */
  YYSYMBOL_NUM = 18,                       /* NUM  */
  YYSYMBOL_STRING = 19,                    /* STRING  */
  YYSYMBOL_ASSIGN = 20,                    /* ASSIGN  */
  YYSYMBOL_OR = 21,                        /* OR  */
  YYSYMBOL_AND = 22,                       /* AND  */
  YYSYMBOL_equality = 23,                  /* equality  */
  YYSYMBOL_relational = 24,                /* relational  */
  YYSYMBOL_additive = 25,                  /* additive  */
  YYSYMBOL_multiplicative = 26,            /* multiplicative  */
  YYSYMBOL_NOT = 27,                       /* NOT  */
  YYSYMBOL_LPAREN = 28,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 29,                    /* RPAREN  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_COMMA = 31,                     /* COMMA  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_Program = 33,                   /* Program  */
  YYSYMBOL_M1 = 34,                        /* M1  */
  YYSYMBOL_Statements = 35,                /* Statements  */
  YYSYMBOL_Statement = 36,                 /* Statement  */
  YYSYMBOL_37_1 = 37,                      /* $@1  */
  YYSYMBOL_M_EMIT_BRANCH = 38,             /* M_EMIT_BRANCH  */
  YYSYMBOL_M_CHECK_WHILE_BOOL = 39,        /* M_CHECK_WHILE_BOOL  */
  YYSYMBOL_M_ADD_WHILE_START_LABEL = 40,   /* M_ADD_WHILE_START_LABEL  */
  YYSYMBOL_M_ADD_WHILE_TRUE_LABEL = 41,    /* M_ADD_WHILE_TRUE_LABEL  */
  YYSYMBOL_M_ADD_WHILE_END = 42,           /* M_ADD_WHILE_END  */
  YYSYMBOL_CLOSE_SCOPE = 43,               /* CLOSE_SCOPE  */
  YYSYMBOL_M_NEW_SCOPE = 44,               /* M_NEW_SCOPE  */
  YYSYMBOL_M_NEW_SCOPE_LOOP = 45,          /* M_NEW_SCOPE_LOOP  */
  YYSYMBOL_M_CHECK_IF_BOOL_andAddTrueLabel = 46, /* M_CHECK_IF_BOOL_andAddTrueLabel  */
  YYSYMBOL_M_ADD_FALSE_LABEL = 47,         /* M_ADD_FALSE_LABEL  */
  YYSYMBOL_Call = 48,                      /* Call  */
  YYSYMBOL_Type = 49,                      /* Type  */
  YYSYMBOL_Exp = 50,                       /* Exp  */
  YYSYMBOL_M_or_branching = 51,            /* M_or_branching  */
  YYSYMBOL_M_And_branching = 52            /* M_And_branching  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   162

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  49
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  90

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    59,    77,    81,    89,    95,   117,   166,
     205,   206,   213,   229,   246,   246,   267,   277,   293,   304,
     323,   333,   339,   352,   364,   372,   379,   409,   421,   496,
     497,   498,   501,   502,   520,   534,   561,   562,   570,   584,
     597,   606,   615,   660,   675,   689,   700,   712,   744,   752
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "BYTE", "B",
  "BOOL", "TRUE", "FALSE", "RETURN", "IF", "WHILE", "BREAK", "CONTINUE",
  "SC", "LBRACE", "RBRACE", "ID", "NUM", "STRING", "ASSIGN", "OR", "AND",
  "equality", "relational", "additive", "multiplicative", "NOT", "LPAREN",
  "RPAREN", "ELSE", "COMMA", "$accept", "Program", "M1", "Statements",
  "Statement", "$@1", "M_EMIT_BRANCH", "M_CHECK_WHILE_BOOL",
  "M_ADD_WHILE_START_LABEL", "M_ADD_WHILE_TRUE_LABEL", "M_ADD_WHILE_END",
  "CLOSE_SCOPE", "M_NEW_SCOPE", "M_NEW_SCOPE_LOOP",
  "M_CHECK_IF_BOOL_andAddTrueLabel", "M_ADD_FALSE_LABEL", "Call", "Type",
  "Exp", "M_or_branching", "M_And_branching", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286
};
#endif

#define YYPACT_NINF (-68)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -68,     6,    92,   -68,   -68,   -68,   -68,     2,    -3,   -68,
      13,    14,   -68,   -18,    92,   -68,    22,    21,   -68,    16,
      12,   -68,   -68,    92,    16,    16,   -68,   -68,    -9,   -68,
     -68,    19,    51,   -68,    16,    42,   -68,   106,    16,    77,
      94,   115,   -68,    16,   -68,   -68,    28,   124,   -68,   -68,
      16,    16,    16,    16,   -68,   133,   -68,   -68,   -68,   100,
      16,   -68,    16,    16,    -6,   -17,    32,   -68,   -68,   -68,
     -68,   -68,    29,    41,   -68,   -68,    92,   -68,   -68,   -68,
      45,    92,   -68,   -68,   -68,   -68,    92,   -68,   -68,   -68
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,    29,    30,    31,     0,     0,    20,
       0,     0,    24,     0,     2,     4,     0,     0,    11,     0,
       0,    16,    17,     0,     0,     0,     5,    10,     0,    40,
      41,    35,    37,    39,     0,     0,    36,     0,     0,     0,
       0,     0,     7,     0,    38,    42,     0,     0,    48,    49,
       0,     0,     0,     0,    18,     0,     6,     9,    28,     0,
       0,    32,     0,     0,    45,    46,    33,    34,    26,    18,
       8,    47,    43,    44,    24,    19,     0,    25,    23,    21,
      12,     0,    24,    14,    27,    22,     0,    15,    23,    13
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -68,   -68,   -68,    39,   -13,   -68,     3,   -68,   -68,   -68,
     -68,   -12,   -67,   -68,   -68,   -68,    -2,    36,   -21,   -68,
     -68
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    14,    15,    85,    68,    77,    20,    81,
      87,    80,    23,    79,    74,    86,    36,    17,    37,    62,
      63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      16,    26,    24,    40,    41,    42,     3,    76,    52,    53,
      25,    43,    16,    45,    47,    84,    18,    55,    51,    52,
      53,    16,    59,    29,    30,    19,    26,    21,    22,    64,
      65,    66,    67,    31,    32,    33,    27,    16,    28,    71,
      38,    72,    73,    34,    35,     4,     5,    25,     6,    29,
      30,    49,    50,    51,    52,    53,    44,    60,    53,    31,
      32,    33,    39,    78,    50,    51,    52,    53,    83,    34,
      35,    46,    75,    88,    16,    82,    89,     0,     0,    16,
       4,     5,     0,     6,    16,     0,     7,     8,     9,    10,
      11,     0,    12,    56,    13,     4,     5,     0,     6,     0,
       0,     7,     8,     9,    10,    11,     0,    12,    57,    13,
       0,     0,     0,     0,    70,    48,    49,    50,    51,    52,
      53,    48,    49,    50,    51,    52,    53,    48,    49,    50,
      51,    52,    53,     0,     0,    54,    48,    49,    50,    51,
      52,    53,     0,     0,    58,    48,    49,    50,    51,    52,
      53,     0,     0,    61,    48,    49,    50,    51,    52,    53,
       0,     0,    69
};

static const yytype_int8 yycheck[] =
{
       2,    14,    20,    24,    25,    14,     0,    74,    25,    26,
      28,    20,    14,    34,    35,    82,    14,    38,    24,    25,
      26,    23,    43,     7,     8,    28,    39,    14,    14,    50,
      51,    52,    53,    17,    18,    19,    14,    39,    17,    60,
      28,    62,    63,    27,    28,     3,     4,    28,     6,     7,
       8,    22,    23,    24,    25,    26,     5,    29,    26,    17,
      18,    19,    23,    76,    23,    24,    25,    26,    81,    27,
      28,    35,    69,    86,    76,    30,    88,    -1,    -1,    81,
       3,     4,    -1,     6,    86,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,     3,     4,    -1,     6,    -1,
      -1,     9,    10,    11,    12,    13,    -1,    15,    14,    17,
      -1,    -1,    -1,    -1,    14,    21,    22,    23,    24,    25,
      26,    21,    22,    23,    24,    25,    26,    21,    22,    23,
      24,    25,    26,    -1,    -1,    29,    21,    22,    23,    24,
      25,    26,    -1,    -1,    29,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    21,    22,    23,    24,    25,    26,
      -1,    -1,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    34,     0,     3,     4,     6,     9,    10,    11,
      12,    13,    15,    17,    35,    36,    48,    49,    14,    28,
      40,    14,    14,    44,    20,    28,    36,    14,    17,     7,
       8,    17,    18,    19,    27,    28,    48,    50,    28,    35,
      50,    50,    14,    20,     5,    50,    49,    50,    21,    22,
      23,    24,    25,    26,    29,    50,    16,    14,    29,    50,
      29,    29,    51,    52,    50,    50,    50,    50,    38,    29,
      14,    50,    50,    50,    46,    38,    44,    39,    36,    45,
      43,    41,    30,    36,    44,    37,    47,    42,    36,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    35,    35,    36,    36,    36,    36,
      36,    36,    36,    36,    37,    36,    36,    36,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      49,    49,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    52
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     2,     4,     3,     5,     4,
       2,     2,     9,    14,     0,    12,     2,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     1,
       1,     1,     3,     3,     3,     1,     1,     1,     2,     1,
       1,     1,     2,     4,     4,     3,     3,     4,     0,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 2: /* Program: M1 Statements  */
#line 52 "parser.ypp"
       {
         checkMainFunction(*tableStack);

         printProductionRule(1);
       }
#line 1220 "parser.tab.cpp"
    break;

  case 3: /* M1: %empty  */
#line 60 "parser.ypp"
  {
    //createNewScope(*tableStack);  // Create global scope //check
    //offsettStack->push_offset(0);  // Initialize offset stack for global scope // check

    vector<string> printParmType = {"string"};
    addFunctionToGlobalScope(*tableStack, "print", "void", printParmType);
    
    vector<string> printiParmType = {"int"};
    addFunctionToGlobalScope(*tableStack, "printi", "void", printiParmType);
    
    vector<string> readiParmType = {"int"};  
    addFunctionToGlobalScope(*tableStack, "readi", "int", readiParmType);
  }
#line 1238 "parser.tab.cpp"
    break;

  case 4: /* Statements: Statement  */
#line 77 "parser.ypp"
                      { printProductionRule(2);
                        // Debug: Ensure no type checks are done here directly.
              //for tests: cout << "Reducing Statements -> Statements Statement at line " << yylineno << endl; 
              }
#line 1247 "parser.tab.cpp"
    break;

  case 5: /* Statements: Statements Statement  */
#line 81 "parser.ypp"
                                 { printProductionRule(3);
                        // Debug: Ensure no type checks are done here directly.
              //for tests: cout << "Reducing Statements -> Statements Statement at line " << yylineno << endl; 
              }
#line 1256 "parser.tab.cpp"
    break;

  case 6: /* Statement: LBRACE M_NEW_SCOPE Statements RBRACE  */
#line 90 "parser.ypp"
         {
           printProductionRule(4);
           exitScope(*tableStack);
           offsettStack->pop_offset(yylineno);
         }
#line 1266 "parser.tab.cpp"
    break;

  case 7: /* Statement: Type ID SC  */
#line 96 "parser.ypp"
         {
           string varName = static_cast<IdentifierStr*>(yyvsp[-1])->id;
           string varType = static_cast<TNode*>(yyvsp[-2])->type;
           string llvmType = getLLVMType(varType);
           string llvmVarName = freshVar() +"_"+ varName;
           CodeBuffer::instance().emit(llvmVarName + " = alloca " + llvmType);
           
           // Initialize with default value
           if (varType == "bool") {
             CodeBuffer::instance().emit("store i1 false, i1* " + llvmVarName);
           } else if (varType == "int" || varType == "byte") {
             CodeBuffer::instance().emit("store " + llvmType + " 0, " + llvmType + "* " + llvmVarName);
           }
           
           checkVariableDeclaration(*tableStack, static_cast<IdentifierStr*>(yyvsp[-1])->id, yylineno);
           addSymbolToCurrentScope(*tableStack, varName, varType, offsettStack->top_offset(yylineno),llvmVarName);
           offsettStack->update_top_offset();
           delete static_cast<IdentifierStr*>(yyvsp[-1]);
           delete static_cast<TNode*>(yyvsp[-2]);
           printProductionRule(5);
         }
#line 1292 "parser.tab.cpp"
    break;

  case 8: /* Statement: Type ID ASSIGN Exp SC  */
#line 118 "parser.ypp"
          {
          string varName = static_cast<IdentifierStr*>(yyvsp[-3])->id;
          string varType = static_cast<TNode*>(yyvsp[-4])->type;
          string expType = yyvsp[-1]->type;
          checkVariableDeclaration(*tableStack, varName, yylineno);
          checkAssignment(varType, expType, yylineno);
          string llvmType = getLLVMType(varType);
          string llvmVarName =  freshVar() +"_"+ varName;

          if (varType == "bool" && static_cast<ExpNode*>(yyvsp[-1])->llvm_var.empty()) {
              string allocLabel = CodeBuffer::instance().freshLabel();
              
              // Emit the true label
              CodeBuffer::instance().emit(static_cast<ExpNode*>(yyvsp[-1])->true_label + ":");
              CodeBuffer::instance().emit("store i1 true, i1* @global_bool_flag");  // Or %bool_flag if using a local variable
              CodeBuffer::instance().emit("br label %" + allocLabel);

              // Emit the false label
              CodeBuffer::instance().emit(static_cast<ExpNode*>(yyvsp[-1])->false_label + ":");
              CodeBuffer::instance().emit("store i1 false, i1* @global_bool_flag");  // Or %bool_flag if using a local variable
              CodeBuffer::instance().emit("br label %" + allocLabel);

              // Emit the alloc label
              string tempFinalBool = freshVar();
              CodeBuffer::instance().emit(allocLabel + ":");
              CodeBuffer::instance().emit(llvmVarName + " = alloca " + llvmType);
              CodeBuffer::instance().emit(tempFinalBool + " = load i1, i1* @global_bool_flag");
              CodeBuffer::instance().emit("store i1 " + tempFinalBool + ", i1* " + llvmVarName);
          } else {
              // Handle direct expressions
              if (varType == "int" && expType == "byte") {
                  string extendedVar = freshVar();
                  CodeBuffer::instance().emit(extendedVar + " = zext i8 " + yyvsp[-1]->llvm_var + " to i32");
                  CodeBuffer::instance().emit(llvmVarName + " = alloca " + llvmType);
                  CodeBuffer::instance().emit("store i32 " + extendedVar + ", i32* " + llvmVarName);
              } else {
                  CodeBuffer::instance().emit(llvmVarName + " = alloca " + llvmType);
                  CodeBuffer::instance().emit("store " + llvmType + " " + yyvsp[-1]->llvm_var + ", " + llvmType + "* " + llvmVarName);
              }
            }

          addSymbolToCurrentScope(*tableStack, varName, varType, offsettStack->top_offset(yylineno),llvmVarName);
          offsettStack->update_top_offset();
          delete static_cast<IdentifierStr*>(yyvsp[-3]);
          delete static_cast<TNode*>(yyvsp[-4]);
          delete yyvsp[-1];
          printProductionRule(6);
      }
#line 1345 "parser.tab.cpp"
    break;

  case 9: /* Statement: ID ASSIGN Exp SC  */
#line 167 "parser.ypp"
        {
           
           string idType = getSymbolType(*tableStack, static_cast<IdentifierStr*>(yyvsp[-3])->id);
           if (idType.empty()) {
             output::errorUndef(yylineno, static_cast<IdentifierStr*>(yyvsp[-3])->id);
             exit(0);
           }
           checkAssignment(idType, yyvsp[-1]->type, yylineno);
           
           string varName = static_cast<IdentifierStr*>(yyvsp[-3])->id;
           string llvmVarName = getSymbolLLVMVarName(*tableStack, varName);
           string varType = static_cast<TNode*>(yyvsp[-1])->type;
           string llvmType = getLLVMType(varType);
           string endlabel=CodeBuffer::instance().freshLabel();

            if (varType == "bool" && static_cast<ExpNode*>(yyvsp[-1])->llvm_var.empty()) {
              
              // Emit the true label
              CodeBuffer::instance().emit(static_cast<ExpNode*>(yyvsp[-1])->true_label + ":");
              CodeBuffer::instance().emit("store i1 true, i1* " + llvmVarName); // Or %bool_flag if using a local variable
              CodeBuffer::instance().emit("br label %" + endlabel);

              // Emit the false label
              CodeBuffer::instance().emit(static_cast<ExpNode*>(yyvsp[-1])->false_label + ":");
              CodeBuffer::instance().emit("store i1 false, i1* " + llvmVarName);  // Or %bool_flag if using a local variable
              CodeBuffer::instance().emit("br label %" + endlabel);

              // Emit the endlabel label
              CodeBuffer::instance().emit(endlabel + ":");
            }else {
              // Handle regular assignments
              CodeBuffer::instance().emit("store " + llvmType + " " + static_cast<ExpNode*>(yyvsp[-1])->llvm_var + ", " + llvmType + "* " + llvmVarName);
            }



    
           }
#line 1388 "parser.tab.cpp"
    break;

  case 10: /* Statement: Call SC  */
#line 205 "parser.ypp"
                   { printProductionRule(8); }
#line 1394 "parser.tab.cpp"
    break;

  case 11: /* Statement: RETURN SC  */
#line 207 "parser.ypp"
         {
              checkReturnStatement(*tableStack, "void", yylineno);
              CodeBuffer::instance().emit("ret i32 0");
              CodeBuffer::instance().emit("br label %func_end");
              printProductionRule(9);
         }
#line 1405 "parser.tab.cpp"
    break;

  case 12: /* Statement: IF LPAREN Exp RPAREN M_EMIT_BRANCH M_CHECK_IF_BOOL_andAddTrueLabel M_NEW_SCOPE Statement CLOSE_SCOPE  */
#line 214 "parser.ypp"
         {
           ExpNode* globalExp = globalExpStack.top();
           globalExpStack.pop();

           string next_label = static_cast<ExpNode*>(yyvsp[-6])->next_label;

           CodeBuffer::instance().emit(globalExp->false_label + ":");
           CodeBuffer::instance().emit("br label %" + next_label);
          // CodeBuffer::instance().emit("AAAAAAAAAASSSSAAAAAAAAASADSACASDA");
           // Emit the next label where both branches converge
           CodeBuffer::instance().emit(next_label + ":");
           
           printProductionRule(10);
           delete yyvsp[-6];
         }
#line 1425 "parser.tab.cpp"
    break;

  case 13: /* Statement: IF LPAREN Exp RPAREN M_EMIT_BRANCH M_CHECK_IF_BOOL_andAddTrueLabel M_NEW_SCOPE Statement CLOSE_SCOPE ELSE M_NEW_SCOPE M_ADD_FALSE_LABEL Statement CLOSE_SCOPE  */
#line 230 "parser.ypp"
         {
           ExpNode* globalExp = globalExpStack.top();
           globalExpStack.pop();
           if(globalExp != yyvsp[-11]) cout << "error in global exp stack" << endl;

            string next_label = static_cast<ExpNode*>(yyvsp[-11])->next_label;
       //    CodeBuffer::instance().emit(globalExp->next_label + ":");
          //  CodeBuffer::instance().emit("br label %" + next_label);
          // CodeBuffer::instance().emit("AAAAAAAAAASSSSAAAAAAAAASADSACASDA");
           // Emit the next label where both branches converge
           CodeBuffer::instance().emit(next_label + ":");
           
           printProductionRule(11);
           delete yyvsp[-11];
         
       }
#line 1446 "parser.tab.cpp"
    break;

  case 14: /* $@1: %empty  */
#line 246 "parser.ypp"
                                                                                                                                                {CodeBuffer::instance().emit("br label %" + ((ExpNode*)yyvsp[-8])->exp_startLabel);}
#line 1452 "parser.tab.cpp"
    break;

  case 15: /* Statement: WHILE M_ADD_WHILE_START_LABEL LPAREN Exp RPAREN M_EMIT_BRANCH M_CHECK_WHILE_BOOL M_NEW_SCOPE_LOOP M_ADD_WHILE_TRUE_LABEL Statement $@1 M_ADD_WHILE_END  */
#line 247 "parser.ypp"
         {
           ExpNode* globalExp = globalExpStack.top();
           globalExpStack.pop();
           if(globalExp != yyvsp[-8]) cout << "errrrrror ya m3alem" << endl;
          // CodeBuffer::instance().emit("br label %" + ((ExpNode*)$2)->llvm_var);  // Jump back to start of loop

           ExpNode* WhileExp = loopEntryLabels.top();
          if (!loopEntryLabels.empty()) {
          loopEntryLabels.pop();  // Remove the current loop's entry label
          }
          CodeBuffer::instance().emit("br label %" + WhileExp->next_label);
          // CodeBuffer::instance().emit(WhileExp->false_label + ":");
          CodeBuffer::instance().emit(WhileExp->next_label + ":");
           exitScope(*tableStack);
           offsettStack->pop_offset(yylineno);
           loopDepth--;
           printProductionRule(12);
           delete yyvsp[-9];
         }
#line 1476 "parser.tab.cpp"
    break;

  case 16: /* Statement: BREAK SC  */
#line 268 "parser.ypp"
         {
           checkBreakStatement(loopDepth, yylineno);
           ExpNode* WhileExp = loopEntryLabels.top();
          //  CodeBuffer::instance().emit("br label %" + WhileExp->false_label);
           CodeBuffer::instance().emit("br label %" + WhileExp->next_label);
           printProductionRule(13);
         }
#line 1488 "parser.tab.cpp"
    break;

  case 17: /* Statement: CONTINUE SC  */
#line 278 "parser.ypp"
         {
          checkContinueStatement(loopDepth, yylineno);
          if (!loopEntryLabels.empty()) {
            // string currentLoopStart = loopEntryLabels.top();
            ExpNode* WhileExp = loopEntryLabels.top();
            CodeBuffer::instance().emit("br label %" + WhileExp->exp_startLabel);
          } else {
           // Handle error: continue outside of loop
            output::errorUnexpectedContinue(yylineno);
             exit(0);
          }
          printProductionRule(14);
   }
#line 1506 "parser.tab.cpp"
    break;

  case 18: /* M_EMIT_BRANCH: %empty  */
#line 294 "parser.ypp"
    {
        if(!static_cast<ExpNode*>(yyvsp[(-1) - (0)])->llvm_var.empty()){
        CodeBuffer::instance().emit("br i1 " + static_cast<ExpNode*>(yyvsp[(-1) - (0)])->llvm_var + 
            ", label %" + static_cast<ExpNode*>(yyvsp[(-1) - (0)])->true_label + 
            ", label %" + static_cast<ExpNode*>(yyvsp[(-1) - (0)])->false_label);
      }
    }
#line 1518 "parser.tab.cpp"
    break;

  case 19: /* M_CHECK_WHILE_BOOL: %empty  */
#line 305 "parser.ypp"
                  {
                    if (!isBooleanType(global_exp_type)) {
                     output::errorMismatch(yylineno);
                     exit(0);
                    }
            //        string conditionLabel = CodeBuffer::instance().freshLabel();
            //        CodeBuffer::instance().emit(conditionLabel + ":");
                    globalExpStack.push(global_Exp);
                    
                    if (!global_Exp->llvm_var.empty()) {
                     CodeBuffer::instance().emit("br i1 " + global_Exp->llvm_var + ", label %" + global_Exp->true_label + ", label %" + global_Exp->false_label);
                    //  CodeBuffer::instance().emit("br i1 M_CHECK_WHILE_BOOL" + global_Exp->llvm_var + ", label %" + global_Exp->true_label + ", label %" + global_Exp->false_label);
                    }

                  }
#line 1538 "parser.tab.cpp"
    break;

  case 20: /* M_ADD_WHILE_START_LABEL: %empty  */
#line 323 "parser.ypp"
                                {
    // label= "while_entry";
    yyval = new ExpNode("label");
    CodeBuffer::instance().emit("br label %" + static_cast<ExpNode*>(yyval)->exp_startLabel); 
    CodeBuffer::instance().emit(static_cast<ExpNode*>(yyval)->exp_startLabel + ":");
    loopEntryLabels.push(static_cast<ExpNode*>(yyval));  // Push the label onto the stack
    
}
#line 1551 "parser.tab.cpp"
    break;

  case 21: /* M_ADD_WHILE_TRUE_LABEL: %empty  */
#line 333 "parser.ypp"
                              {
        ExpNode* globalExp = globalExpStack.top();
        CodeBuffer::instance().emit(globalExp->true_label + ":");
  }
#line 1560 "parser.tab.cpp"
    break;

  case 22: /* M_ADD_WHILE_END: %empty  */
#line 339 "parser.ypp"
                       {
    ExpNode* globalExp = globalExpStack.top();

    // ??who is label 14 and what is globalExp->exp_startLabel
    //  CodeBuffer::instance().emit("br label %" + globalExp->exp_startLabel);
    // Emit the loop exit label (false label)
    CodeBuffer::instance().emit(globalExp->false_label + ":");
    CodeBuffer::instance().emit("br label %" + globalExp->next_label); 
    CodeBuffer::instance().emit(globalExp->next_label + ":");

  }
#line 1576 "parser.tab.cpp"
    break;

  case 23: /* CLOSE_SCOPE: %empty  */
#line 353 "parser.ypp"
           {
             exitScope(*tableStack);
             offsettStack->pop_offset(yylineno);
             if (!globalExpStack.empty()) {
               ExpNode* globalExp = globalExpStack.top();
               CodeBuffer::instance().emit("br label %" + globalExp->next_label);
          //     CodeBuffer::instance().emit("AAAAAAAAAAAAAAAAAA" );
             }
           }
#line 1590 "parser.tab.cpp"
    break;

  case 24: /* M_NEW_SCOPE: %empty  */
#line 365 "parser.ypp"
           {
             createNewScope(*tableStack);
             offsettStack->push_offset(offsettStack->top_offset(yylineno));
           }
#line 1599 "parser.tab.cpp"
    break;

  case 25: /* M_NEW_SCOPE_LOOP: %empty  */
#line 373 "parser.ypp"
                {
                  createNewScope(*tableStack);
                  offsettStack->push_offset(offsettStack->top_offset(yylineno));
                  loopDepth++;
                }
#line 1609 "parser.tab.cpp"
    break;

  case 26: /* M_CHECK_IF_BOOL_andAddTrueLabel: %empty  */
#line 380 "parser.ypp"
                {
                  if (!isBooleanType(global_exp_type)) {
                   output::errorMismatch(yylineno);
                   exit(0);
                  }
                  if (!global_Exp->llvm_var.empty()) {
                //  CodeBuffer::instance().emit("br i1 M_CHECK_IF_BOOL_andAddTrueLabel " + global_Exp->llvm_var + ", label %" + global_Exp->true_label + ", label %" + global_Exp->false_label);
                 CodeBuffer::instance().emit("br i1 " + global_Exp->llvm_var + ", label %" + global_Exp->true_label + ", label %" + global_Exp->false_label);
                  }
                  CodeBuffer::instance().emit(global_Exp->true_label + ":");
                  
                  globalExpStack.push(global_Exp);
               }
#line 1627 "parser.tab.cpp"
    break;

  case 27: /* M_ADD_FALSE_LABEL: %empty  */
#line 410 "parser.ypp"
                 {
                   ExpNode* globalExp = globalExpStack.top();
                   
                   // Emit branch to next label (end of if-else statement)
                  //  CodeBuffer::instance().emit("br label %" + globalExp->next_label);
                   
                   // Emit the false label (start of else block)
                   CodeBuffer::instance().emit(globalExp->false_label + ":");
                 }
#line 1641 "parser.tab.cpp"
    break;

  case 28: /* Call: ID LPAREN Exp RPAREN  */
#line 422 "parser.ypp"
    {
      string funcName = static_cast<IdentifierStr*>(yyvsp[-3])->id;
      string argType = yyvsp[-1]->type; 
      vector<string> argTypes = {argType};
      functions* func = checkFunctionCall(*tableStack, funcName, argTypes, yylineno);
     if (!isTypeCompatible(func->all_arg[0], yyvsp[-1]->type)) {
    output::errorPrototypeMismatch(yylineno, funcName, output::makeFunctionType(func->all_arg[0], func->ret_type));
    exit(0);
    }
      // string resultVar;
      string callInstr;
      bool extend = (funcName == "printi" && argType == "byte");
      string argLLVMType = (extend) ? "i32" : getLLVMType(argType);
      string resultVar = freshVar();
    if (funcName == "readi") {
        CodeBuffer::instance().emit(resultVar + " = call i32 @readi()");
        yyval = new ExpNode("int", resultVar);
      }
    else{
      if (argType == "string") {
           if (func->ret_type == "void"){
                callInstr="call void @" + funcName + "(i8* getelementptr ([" 
                                    + to_string(static_cast<ExpNode*>(yyvsp[-1])->string_length) 
                                    + " x i8], [" 
                                    + to_string(static_cast<ExpNode*>(yyvsp[-1])->string_length) 
                                    + " x i8]* " + static_cast<ExpNode*>(yyvsp[-1])->llvm_var 
                                    + ", i32 0, i32 0))";
           }else{
                // resultVar = freshVar();
                callInstr=resultVar + " = call " +  getLLVMType(func->ret_type) + " @" + funcName + "(i8* getelementptr  ([" 
                                    + to_string(static_cast<ExpNode*>(yyvsp[-1])->string_length) 
                                    + " x i8], [" 
                                    + to_string(static_cast<ExpNode*>(yyvsp[-1])->string_length) 
                                    + " x i8]* " + static_cast<ExpNode*>(yyvsp[-1])->llvm_var 
                                    + ", i32 0, i32 0))";
           }
    }else{

      //cout<<"$3->llvm_var = "<<$3->llvm_var<<endl; //debug
      if (func->ret_type == "void") {
          callInstr = "call void @" + funcName + "(" + argLLVMType + " ";
          if (extend) {
            string extendedVar = freshVar();
            CodeBuffer::instance().emit(extendedVar + " = zext i8 " + yyvsp[-1]->llvm_var + " to i32");
            callInstr += extendedVar + ")";
          } else {
            callInstr += yyvsp[-1]->llvm_var + ")";
          }
        } else {
          // resultVar = freshVar();
          callInstr = resultVar + " = call " + getLLVMType(func->ret_type) + " @" + funcName + "(" + argLLVMType + " ";
          if (extend) {
            string extendedVar = freshVar();
            CodeBuffer::instance().emit(extendedVar + " = zext i8 " + yyvsp[-1]->llvm_var + " to i32");
            callInstr += extendedVar + ")";
          } else {
            callInstr += yyvsp[-1]->llvm_var + ")";
          }
        }
      }
    }


      CodeBuffer::instance().emit(callInstr);
      yyval = new ExpNode(func->ret_type, func->ret_type == "void" ? "" : resultVar);
     // cout<<$$->type<<endl; /////////////////////delete
      printProductionRule(15);
      
      delete static_cast<IdentifierStr*>(yyvsp[-3]);
      delete yyvsp[-1];
    }
#line 1717 "parser.tab.cpp"
    break;

  case 29: /* Type: INT  */
#line 496 "parser.ypp"
          { yyval=new TNode("int"); printProductionRule(16); }
#line 1723 "parser.tab.cpp"
    break;

  case 30: /* Type: BYTE  */
#line 497 "parser.ypp"
           { yyval=new TNode("byte"); printProductionRule(17); }
#line 1729 "parser.tab.cpp"
    break;

  case 31: /* Type: BOOL  */
#line 498 "parser.ypp"
           { yyval=new TNode("bool"); printProductionRule(18); }
#line 1735 "parser.tab.cpp"
    break;

  case 32: /* Exp: LPAREN Exp RPAREN  */
#line 501 "parser.ypp"
                       { yyval = yyvsp[-1]; printProductionRule(19); global_exp_type=yyval->type; global_Exp=dynamic_cast<ExpNode*>(yyval);}
#line 1741 "parser.tab.cpp"
    break;

  case 33: /* Exp: Exp additive Exp  */
#line 503 "parser.ypp"
     { 
       checkNumericExpression(yyvsp[-2], *tableStack);
       checkNumericExpression(yyvsp[0], *tableStack);
       printProductionRule(20);
      
       if(static_cast<Binop*>(yyvsp[-1])->op=="+"){
        yyval=emitArithmetic("add",dynamic_cast<ExpNode*>(yyvsp[-2]), dynamic_cast<ExpNode*>(yyvsp[0]));
       }

       if(static_cast<Binop*>(yyvsp[-1])->op=="-"){
        yyval=emitArithmetic("sub",dynamic_cast<ExpNode*>(yyvsp[-2]), dynamic_cast<ExpNode*>(yyvsp[0]));
       }

       global_exp_type=yyval->type;
       global_Exp=dynamic_cast<ExpNode*>(yyval);

     }
#line 1763 "parser.tab.cpp"
    break;

  case 34: /* Exp: Exp multiplicative Exp  */
#line 521 "parser.ypp"
     { 
      checkNumericExpression(yyvsp[-2], *tableStack);
      checkNumericExpression(yyvsp[0], *tableStack);
      printProductionRule(20);
      if(static_cast<Binop*>(yyvsp[-1])->op=="/"){
        yyval = emitDivision(dynamic_cast<ExpNode*>(yyvsp[-2]), dynamic_cast<ExpNode*>(yyvsp[0]));
      } else if(static_cast<Binop*>(yyvsp[-1])->op=="*"){
        yyval = emitArithmetic("mul",dynamic_cast<ExpNode*>(yyvsp[-2]), dynamic_cast<ExpNode*>(yyvsp[0]));
      }

       global_exp_type=yyval->type;
       global_Exp=dynamic_cast<ExpNode*>(yyval);
     }
#line 1781 "parser.tab.cpp"
    break;

  case 35: /* Exp: ID  */
#line 535 "parser.ypp"
     { 
       string varName = static_cast<IdentifierStr*>(yyvsp[0])->id;
       string varType = getSymbolType(*tableStack, varName);
       
       if(varType.empty() || varType=="function") {
         output::errorUndef(yylineno, varName);
         exit(0);
       }
       string llvmType = getLLVMType(varType);
       string llvmVarName = getSymbolLLVMVarName(*tableStack, varName);
       string resultVar = freshVar();
       yyval = new ExpNode(varType,resultVar); //check12
       // Emit LLVM IR for loading variable value
       if (varType == "bool"){
    //    static_cast<ExpNode*>($$)->exp_startLabel = CodeBuffer::instance().freshLabel();
       CodeBuffer::instance().emit("br label %" + static_cast<ExpNode*>(yyval)->exp_startLabel);
       CodeBuffer::instance().emit(static_cast<ExpNode*>(yyval)->exp_startLabel + ":");
       }
       CodeBuffer::instance().emit(resultVar + " = load " + llvmType + ", " + llvmType + "* " + llvmVarName);
        if (varType == "bool") {
            CodeBuffer::instance().emit("br i1 " + resultVar + ", label %" + static_cast<ExpNode*>(yyval)->true_label + ", label %" + static_cast<ExpNode*>(yyval)->false_label);
        }
       printProductionRule(21);
       global_exp_type=yyval->type;
       global_Exp=dynamic_cast<ExpNode*>(yyval);
     }
#line 1812 "parser.tab.cpp"
    break;

  case 36: /* Exp: Call  */
#line 561 "parser.ypp"
          { yyval = yyvsp[0]; printProductionRule(22);global_exp_type=yyval->type;global_Exp=dynamic_cast<ExpNode*>(yyval);}
#line 1818 "parser.tab.cpp"
    break;

  case 37: /* Exp: NUM  */
#line 562 "parser.ypp"
         { 
          yyval = new ExpNode("int");
          yyval->llvm_var = freshVar();
          CodeBuffer::instance().emit(yyval->llvm_var + " = add i32 0, " + to_string(static_cast<Num*>(yyvsp[0])->num));
          printProductionRule(23);
          global_exp_type=yyval->type;
          global_Exp=dynamic_cast<ExpNode*>(yyval);
        }
#line 1831 "parser.tab.cpp"
    break;

  case 38: /* Exp: NUM B  */
#line 571 "parser.ypp"
     { 
       int value = static_cast<Num*>(yyvsp[-1])->num;
       if(!isLegalByteValue(value)) {
         output::errorByteTooLarge(yylineno, to_string(value));
         exit(0);
       }
       string resultVar = freshVar();
       CodeBuffer::instance().emit(resultVar + " = trunc i32 " + to_string(value) + " to i8");
       yyval = new ExpNode("byte", resultVar);
       printProductionRule(24);
       global_exp_type = yyval->type;
       global_Exp = dynamic_cast<ExpNode*>(yyval);
     }
#line 1849 "parser.tab.cpp"
    break;

  case 39: /* Exp: STRING  */
#line 584 "parser.ypp"
            { 
    
              string llvm_var_name=freshVar();
              llvm_var_name.replace(0, 1, "@.");  // Replace the first character `%` with `@.`

              string strValue = static_cast<StringLex*>(yyvsp[0])->s;
              strValue = strValue.substr(1, strValue.length() - 2); // Remove the first and last characters (the " ")
               yyval = new ExpNode("string", llvm_var_name, static_cast<StringLex*>(yyvsp[0])->s.length() -1);
              string_declare(yyval->llvm_var,strValue);
              printProductionRule(25);
               global_exp_type=yyval->type;
               global_Exp=dynamic_cast<ExpNode*>(yyval);
            }
#line 1867 "parser.tab.cpp"
    break;

  case 40: /* Exp: TRUE  */
#line 597 "parser.ypp"
          { 
       yyval = new ExpNode("bool");
    //   static_cast<ExpNode*>($$)->exp_startLabel=CodeBuffer::instance().freshLabel();
       CodeBuffer::instance().emit("br label %" + static_cast<ExpNode*>(yyval)->exp_startLabel);
       CodeBuffer::instance().emit(static_cast<ExpNode*>(yyval)->exp_startLabel + ":");
       CodeBuffer::instance().emit("br label %" + static_cast<ExpNode*>(yyval)->true_label);
       global_exp_type = yyval->type;
       global_Exp = static_cast<ExpNode*>(yyval);
     }
#line 1881 "parser.tab.cpp"
    break;

  case 41: /* Exp: FALSE  */
#line 606 "parser.ypp"
           {
       yyval = new ExpNode("bool");
     //  static_cast<ExpNode*>($$)->exp_startLabel=CodeBuffer::instance().freshLabel();
       CodeBuffer::instance().emit("br label %" + static_cast<ExpNode*>(yyval)->exp_startLabel);
       CodeBuffer::instance().emit(static_cast<ExpNode*>(yyval)->exp_startLabel + ":");
       CodeBuffer::instance().emit("br label %" + static_cast<ExpNode*>(yyval)->false_label);
       global_exp_type = yyval->type;
       global_Exp = static_cast<ExpNode*>(yyval);
     }
#line 1895 "parser.tab.cpp"
    break;

  case 42: /* Exp: NOT Exp  */
#line 616 "parser.ypp"
     { 
       checkBooleanExpression(yyvsp[0], *tableStack);
       yyval = new ExpNode("bool");
       emitBooleanNot(static_cast<ExpNode*>(yyvsp[0]), static_cast<ExpNode*>(yyval));
       static_cast<ExpNode*>(yyval)->exp_startLabel = static_cast<ExpNode*>(yyvsp[0])->exp_startLabel;
       printProductionRule(28);
       global_exp_type = yyval->type;
       global_Exp = static_cast<ExpNode*>(yyval);

       if (!static_cast<ExpNode*>(yyvsp[0])->llvm_var.empty()) { //////////////////// must check this if else
        string notCondVar = freshVar();
         CodeBuffer::instance().emit(notCondVar + " = xor i1 " + static_cast<ExpNode*>(yyvsp[0])->llvm_var + ", true");
         CodeBuffer::instance().emit("br i1 " + notCondVar + ", label %" + 
                                     static_cast<ExpNode*>(yyval)->true_label + ", label %" + 
                                     static_cast<ExpNode*>(yyval)->false_label);
        // CodeBuffer::instance().emit("br i1 " + static_cast<ExpNode*>($2)->llvm_var + ", label %" + static_cast<ExpNode*>($$)->false_label + ", label %" + static_cast<ExpNode*>($$)->true_label);
    } else {
        CodeBuffer::instance().emit("br label %" + static_cast<ExpNode*>(yyval)->false_label);
    }
     /*
       checkBooleanExpression($2, *tableStack);
       $$ = new ExpNode("bool");
       // Flip the true and false labels
       static_cast<ExpNode*>($$)->true_label = static_cast<ExpNode*>($2)->false_label;
       static_cast<ExpNode*>($$)->false_label = static_cast<ExpNode*>($2)->true_label;
       // Use the same start label as the inner expression
       static_cast<ExpNode*>($$)->exp_startLabel = static_cast<ExpNode*>($2)->exp_startLabel;  
       // Add a conditional branch that flips the condition of the inner expression
       string condVar = static_cast<ExpNode*>($2)->llvm_var;
       if (!condVar.empty()) {
         string notCondVar = freshVar();
         CodeBuffer::instance().emit(notCondVar + " = xor i1 " + condVar + ", true");
         CodeBuffer::instance().emit("br i1 " + notCondVar + ", label %" + 
                                     static_cast<ExpNode*>($$)->true_label + ", label %" + 
                                     static_cast<ExpNode*>($$)->false_label);
       } else {
         // If there's no condition variable, just flip the branch
         CodeBuffer::instance().emit("br label %" + static_cast<ExpNode*>($$)->true_label);
       }
       printProductionRule(28);
       global_exp_type = $$->type;
       global_Exp = static_cast<ExpNode*>($$);
      */
     }
#line 1944 "parser.tab.cpp"
    break;

  case 43: /* Exp: Exp OR M_or_branching Exp  */
#line 661 "parser.ypp"
    { 
      checkBooleanExpression(yyvsp[-3], *tableStack);
      checkBooleanExpression(yyvsp[0], *tableStack);
      // maybe i shoudlve let the function return a new node so we wont create unnecessary labels 
      yyval = new ExpNode("bool");
      if(static_cast<ExpNode*>(yyvsp[0])->isrelop == true)
      {CodeBuffer::instance().emit("br i1 " + static_cast<ExpNode*>(yyvsp[0])->llvm_var + ", label %" + static_cast<ExpNode*>(yyvsp[0])->true_label + ", label %" + static_cast<ExpNode*>(yyvsp[0])->false_label);}
        
      emitBooleanOr(static_cast<ExpNode*>(yyvsp[-3]), static_cast<ExpNode*>(yyvsp[0]), static_cast<ExpNode*>(yyval));
      static_cast<ExpNode*>(yyval)->exp_startLabel= static_cast<ExpNode*>(yyvsp[-3])->exp_startLabel;
      printProductionRule(30);
      global_exp_type = yyval->type;
      global_Exp = static_cast<ExpNode*>(yyval);
    }
#line 1963 "parser.tab.cpp"
    break;

  case 44: /* Exp: Exp AND M_And_branching Exp  */
#line 676 "parser.ypp"
    { 
      checkBooleanExpression(yyvsp[-3], *tableStack);
      checkBooleanExpression(yyvsp[0], *tableStack);
      yyval = new ExpNode("bool");
      if(static_cast<ExpNode*>(yyvsp[0])->isrelop == true)
        {CodeBuffer::instance().emit("br i1 " + static_cast<ExpNode*>(yyvsp[0])->llvm_var + ", label %" + static_cast<ExpNode*>(yyvsp[0])->true_label + ", label %" + static_cast<ExpNode*>(yyvsp[0])->false_label);}
        
      emitBooleanAnd(static_cast<ExpNode*>(yyvsp[-3]), static_cast<ExpNode*>(yyvsp[0]), static_cast<ExpNode*>(yyval));
      static_cast<ExpNode*>(yyval)->exp_startLabel= static_cast<ExpNode*>(yyvsp[-3])->exp_startLabel;
      printProductionRule(29);
      global_exp_type = yyval->type;
      global_Exp = static_cast<ExpNode*>(yyval);
    }
#line 1981 "parser.tab.cpp"
    break;

  case 45: /* Exp: Exp equality Exp  */
#line 690 "parser.ypp"
     { 
       checkTypeMismatch(yyvsp[-2]->type, yyvsp[0]->type, "equality", yylineno);
       yyval = emitRelop(static_cast<Relop*>(yyvsp[-1])->op, static_cast<ExpNode*>(yyvsp[-2]),static_cast<ExpNode*>(yyvsp[0]));
       static_cast<ExpNode*>(yyval)->exp_startLabel= static_cast<ExpNode*>(yyvsp[-2])->exp_startLabel;
      //  CodeBuffer::instance().emit("br i1 " + static_cast<ExpNode*>($$)->llvm_var + ", label %" + static_cast<ExpNode*>($$)->true_label + ", label %" + static_cast<ExpNode*>($$)->false_label);
      //  CodeBuffer::instance().emit("br i1 equality" + static_cast<ExpNode*>($$)->llvm_var + ", label %" + static_cast<ExpNode*>($$)->true_label + ", label %" + static_cast<ExpNode*>($$)->false_label);
       printProductionRule(31);
       global_exp_type=yyval->type;
       global_Exp=dynamic_cast<ExpNode*>(yyval);
     }
#line 1996 "parser.tab.cpp"
    break;

  case 46: /* Exp: Exp relational Exp  */
#line 701 "parser.ypp"
     { 
       checkNumericExpression(yyvsp[-2], *tableStack);
       checkNumericExpression(yyvsp[0], *tableStack);
       yyval = emitRelop(static_cast<Relop*>(yyvsp[-1])->op, static_cast<ExpNode*>(yyvsp[-2]),static_cast<ExpNode*>(yyvsp[0]));
       static_cast<ExpNode*>(yyval)->exp_startLabel= static_cast<ExpNode*>(yyvsp[-2])->exp_startLabel;
       CodeBuffer::instance().emit("br i1 " + static_cast<ExpNode*>(yyval)->llvm_var + ", label %" + static_cast<ExpNode*>(yyval)->true_label + ", label %" + static_cast<ExpNode*>(yyval)->false_label);
      //  CodeBuffer::instance().emit("br i1 relational" + static_cast<ExpNode*>($$)->llvm_var + ", label %" + static_cast<ExpNode*>($$)->true_label + ", label %" + static_cast<ExpNode*>($$)->false_label);
       printProductionRule(31);
       global_exp_type=yyval->type;
       global_Exp=dynamic_cast<ExpNode*>(yyval);
     }
#line 2012 "parser.tab.cpp"
    break;

  case 47: /* Exp: LPAREN Type RPAREN Exp  */
#line 713 "parser.ypp"
     { 
    string targetType = static_cast<TNode*>(yyvsp[-2])->type;
    string sourceType = yyvsp[0]->type;
    string llvmTargetType = getLLVMType(targetType);
    string llvmSourceType = getLLVMType(sourceType);
    
    if (targetType != "int" && targetType != "byte") {
      output::errorMismatch(yylineno);
      exit(0);
    }
    if (!isTypeCompatible(targetType, sourceType, true)) {
      output::errorMismatch(yylineno);
      exit(0);
    }
    
    string resultVar = freshVar();
    if (targetType == "int" && sourceType == "byte") {
      CodeBuffer::instance().emit(resultVar + " = zext i8 " + yyvsp[0]->llvm_var + " to i32");
    } else if (targetType == "byte" && sourceType == "int") {
      CodeBuffer::instance().emit(resultVar + " = trunc i32 " + yyvsp[0]->llvm_var + " to i8");
    } else {
      resultVar = yyvsp[0]->llvm_var; // No conversion needed
    }
    
    yyval = new ExpNode(targetType, resultVar);
    printProductionRule(32);
    global_exp_type = yyval->type;
    global_Exp = dynamic_cast<ExpNode*>(yyval);
     }
#line 2046 "parser.tab.cpp"
    break;

  case 48: /* M_or_branching: %empty  */
#line 745 "parser.ypp"
{
    if(static_cast<ExpNode*>(yyvsp[(-1) - (0)])->isrelop == true)
    {CodeBuffer::instance().emit("br i1 " + static_cast<ExpNode*>(yyvsp[(-1) - (0)])->llvm_var + ", label %" + static_cast<ExpNode*>(yyvsp[(-1) - (0)])->true_label + ", label %" + static_cast<ExpNode*>(yyvsp[(-1) - (0)])->false_label);}
    CodeBuffer::instance().emit("br label %" + static_cast<ExpNode*>(yyvsp[(-1) - (0)])->false_label); 
    CodeBuffer::instance().emit(static_cast<ExpNode*>(yyvsp[(-1) - (0)])->false_label + ":");
    }
#line 2057 "parser.tab.cpp"
    break;

  case 49: /* M_And_branching: %empty  */
#line 753 "parser.ypp"
{
        if(static_cast<ExpNode*>(yyvsp[(-1) - (0)])->isrelop == true)
        {CodeBuffer::instance().emit("br i1 " + static_cast<ExpNode*>(yyvsp[(-1) - (0)])->llvm_var + ", label %" + static_cast<ExpNode*>(yyvsp[(-1) - (0)])->true_label + ", label %" + static_cast<ExpNode*>(yyvsp[(-1) - (0)])->false_label);}
        CodeBuffer::instance().emit("br label %" + static_cast<ExpNode*>(yyvsp[(-1) - (0)])->true_label);
          CodeBuffer::instance().emit(static_cast<ExpNode*>(yyvsp[(-1) - (0)])->true_label + ":");
      }
#line 2068 "parser.tab.cpp"
    break;


#line 2072 "parser.tab.cpp"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 760 "parser.ypp"


void initBuiltInFunctions() {
    CodeBuffer::instance().emitGlobal("@.str_specifier = private unnamed_addr constant [4 x i8] c\"%s\\0A\\00\", align 1");
    CodeBuffer::instance().emitGlobal("@.int_specifier = private unnamed_addr constant [4 x i8] c\"%d\\0A\\00\", align 1");
    CodeBuffer::instance().emitGlobal("@.int_specifier_scan = private unnamed_addr constant [3 x i8] c\"%d\\00\", align 1");

    // print function
    CodeBuffer::instance().emitGlobal("define void @print(i8*) {");
    CodeBuffer::instance().emitGlobal("  %spec_ptr = getelementptr [4 x i8], [4 x i8]* @.str_specifier, i32 0, i32 0");
    CodeBuffer::instance().emitGlobal("  call i32 (i8*, ...) @printf(i8* %spec_ptr, i8* %0)");
    CodeBuffer::instance().emitGlobal("  ret void");
    CodeBuffer::instance().emitGlobal("}");

    // printi function
    CodeBuffer::instance().emitGlobal("define void @printi(i32) {");
    CodeBuffer::instance().emitGlobal("  %spec_ptr = getelementptr [4 x i8], [4 x i8]* @.int_specifier, i32 0, i32 0");
    CodeBuffer::instance().emitGlobal("  call i32 (i8*, ...) @printf(i8* %spec_ptr, i32 %0)");
    CodeBuffer::instance().emitGlobal("  ret void");
    CodeBuffer::instance().emitGlobal("}");

    // readi function
    CodeBuffer::instance().emitGlobal("define i32 @readi() {");
    CodeBuffer::instance().emitGlobal("  %spec_ptr = getelementptr [3 x i8], [3 x i8]* @.int_specifier_scan, i32 0, i32 0");
    CodeBuffer::instance().emitGlobal("  %num = alloca i32");
    CodeBuffer::instance().emitGlobal("  call i32 (i8*, ...) @scanf(i8* %spec_ptr, i32* %num)");
    CodeBuffer::instance().emitGlobal("  %result = load i32, i32* %num");
    CodeBuffer::instance().emitGlobal("  ret i32 %result");
    CodeBuffer::instance().emitGlobal("}");
}

  // int main(){
  //     // yydebug = 1; 
  //     CodeBuffer::instance().emit("define i32 @main(){");
  //     CodeBuffer::instance().emitGlobal("declare i32 @printf(i8*, ...)");
  //     CodeBuffer::instance().emitGlobal("declare void @exit(i32)");
  //     CodeBuffer::instance().emitGlobal("declare i32 @scanf(i8*, ...)");
  //     CodeBuffer::instance().emitGlobal("@.str_zeroDiv = internal constant [23 x i8] c\"Error division by zero\\00\"");
  //      CodeBuffer::instance().emitGlobal("@global_bool_flag = global i1 false");



  //   initBuiltInFunctions();
  //   CodeBuffer::instance().emit("entry_label:");
  //   yyparse();

  //     exitScope(*tableStack);

  //     CodeBuffer::instance().emit("ret i32 0");
  //     CodeBuffer::instance().emit("}");

  //     CodeBuffer::instance().printGlobalBuffer();
  //     CodeBuffer::instance().printCodeBuffer();
    
  //    return 0;

  // }

void yyerror(const char*){
    errorSyn(yylineno);
    exit(0);
}
