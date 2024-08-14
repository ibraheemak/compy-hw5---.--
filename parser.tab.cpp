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


#line 97 "parser.tab.cpp"

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
  YYSYMBOL_M_CHECK_WHILE_BOOL = 37,        /* M_CHECK_WHILE_BOOL  */
  YYSYMBOL_M_ADD_WHILE_TRUE_LABEL = 38,    /* M_ADD_WHILE_TRUE_LABEL  */
  YYSYMBOL_M_ADD_WHILE_END = 39,           /* M_ADD_WHILE_END  */
  YYSYMBOL_M_ADD_FALSE_LABEL = 40,         /* M_ADD_FALSE_LABEL  */
  YYSYMBOL_CLOSE_SCOPE = 41,               /* CLOSE_SCOPE  */
  YYSYMBOL_M_NEW_SCOPE = 42,               /* M_NEW_SCOPE  */
  YYSYMBOL_M_NEW_SCOPE_LOOP = 43,          /* M_NEW_SCOPE_LOOP  */
  YYSYMBOL_M_CHECK_IF_BOOL_andAddTrueLabel = 44, /* M_CHECK_IF_BOOL_andAddTrueLabel  */
  YYSYMBOL_Call = 45,                      /* Call  */
  YYSYMBOL_Type = 46,                      /* Type  */
  YYSYMBOL_Exp = 47                        /* Exp  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   157

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  44
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  84

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
       0,    50,    50,    58,    76,    80,    87,    93,   115,   134,
     150,   151,   156,   167,   176,   189,   198,   207,   222,   229,
     253,   260,   271,   279,   286,   298,   375,   376,   377,   380,
     381,   403,   428,   449,   450,   451,   463,   464,   465,   466,
     474,   486,   498,   506,   515
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
  "Statement", "M_CHECK_WHILE_BOOL", "M_ADD_WHILE_TRUE_LABEL",
  "M_ADD_WHILE_END", "M_ADD_FALSE_LABEL", "CLOSE_SCOPE", "M_NEW_SCOPE",
  "M_NEW_SCOPE_LOOP", "M_CHECK_IF_BOOL_andAddTrueLabel", "Call", "Type",
  "Exp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-61)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -61,     5,    86,   -61,   -61,   -61,   -61,     6,    -1,     1,
      22,    24,   -61,    -9,    86,   -61,    38,    36,   -61,    -4,
      -4,   -61,   -61,    86,    -4,    -4,   -61,   -61,     8,   -61,
     -61,    29,    53,   -61,    -4,    37,   -61,    94,   103,    71,
      25,   112,   -61,    -4,   -61,   -61,    31,   121,    -4,    -4,
      -4,    -4,    -4,    -4,   -61,   -61,   -61,   -61,   -61,    88,
      -4,   -61,    82,   128,   131,   -16,    35,   -61,   -61,   -61,
     -61,   -61,    86,   -61,   -61,    86,    33,   -61,   -61,   -61,
     -61,    86,   -61,   -61
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,    26,    27,    28,     0,     0,     0,
       0,     0,    22,     0,     2,     4,     0,     0,    11,     0,
       0,    15,    16,     0,     0,     0,     5,    10,     0,    37,
      38,    32,    34,    36,     0,     0,    33,     0,     0,     0,
       0,     0,     7,     0,    35,    39,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    17,     6,     9,    25,     0,
       0,    29,    41,    40,    42,    43,    30,    31,    22,    23,
       8,    44,     0,    18,    21,     0,    12,    19,    22,    14,
      20,     0,    21,    13
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -61,   -61,   -61,    43,   -13,   -61,   -61,   -61,   -61,   -15,
     -60,   -61,   -61,    -2,    34,   -18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    14,    15,    69,    75,    79,    81,    76,
      23,    73,    68,    36,    17,    37
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      16,    26,    38,    29,    30,     3,    40,    41,    72,    52,
      53,    24,    16,    31,    32,    33,    45,    47,    80,    25,
      18,    16,    42,    34,    35,    59,    26,    19,    43,    20,
      62,    63,    64,    65,    66,    67,    21,    16,    22,    57,
       4,     5,    71,     6,    29,    30,    48,    49,    50,    51,
      52,    53,    27,    28,    31,    32,    33,    25,    44,    74,
      60,    53,    77,    78,    34,    35,    39,    83,    82,    46,
      16,     0,     0,    16,     4,     5,     0,     6,     0,    16,
       7,     8,     9,    10,    11,     0,    12,    56,    13,     4,
       5,     0,     6,     0,     0,     7,     8,     9,    10,    11,
       0,    12,    70,    13,    49,    50,    51,    52,    53,    48,
      49,    50,    51,    52,    53,    48,    49,    50,    51,    52,
      53,     0,     0,    54,    48,    49,    50,    51,    52,    53,
       0,     0,    55,    48,    49,    50,    51,    52,    53,     0,
       0,    58,    48,    49,    50,    51,    52,    53,     0,     0,
      61,    50,    51,    52,    53,    51,    52,    53
};

static const yytype_int8 yycheck[] =
{
       2,    14,    20,     7,     8,     0,    24,    25,    68,    25,
      26,    20,    14,    17,    18,    19,    34,    35,    78,    28,
      14,    23,    14,    27,    28,    43,    39,    28,    20,    28,
      48,    49,    50,    51,    52,    53,    14,    39,    14,    14,
       3,     4,    60,     6,     7,     8,    21,    22,    23,    24,
      25,    26,    14,    17,    17,    18,    19,    28,     5,    72,
      29,    26,    75,    30,    27,    28,    23,    82,    81,    35,
      72,    -1,    -1,    75,     3,     4,    -1,     6,    -1,    81,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,     3,
       4,    -1,     6,    -1,    -1,     9,    10,    11,    12,    13,
      -1,    15,    14,    17,    22,    23,    24,    25,    26,    21,
      22,    23,    24,    25,    26,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    21,    22,    23,    24,    25,    26,
      -1,    -1,    29,    21,    22,    23,    24,    25,    26,    -1,
      -1,    29,    21,    22,    23,    24,    25,    26,    -1,    -1,
      29,    23,    24,    25,    26,    24,    25,    26
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    34,     0,     3,     4,     6,     9,    10,    11,
      12,    13,    15,    17,    35,    36,    45,    46,    14,    28,
      28,    14,    14,    42,    20,    28,    36,    14,    17,     7,
       8,    17,    18,    19,    27,    28,    45,    47,    47,    35,
      47,    47,    14,    20,     5,    47,    46,    47,    21,    22,
      23,    24,    25,    26,    29,    29,    16,    14,    29,    47,
      29,    29,    47,    47,    47,    47,    47,    47,    44,    37,
      14,    47,    42,    43,    36,    38,    41,    36,    30,    39,
      42,    40,    36,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    35,    35,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    46,    46,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     2,     4,     3,     5,     4,
       2,     2,     8,    13,     9,     2,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     1,     1,     1,     3,
       3,     3,     1,     1,     1,     2,     1,     1,     1,     2,
       3,     3,     3,     3,     4
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
  case 2: /* Program: M1 Statements  */
#line 51 "parser.ypp"
       {
         checkMainFunction(*tableStack);

         printProductionRule(1);
       }
#line 1199 "parser.tab.cpp"
    break;

  case 3: /* M1: %empty  */
#line 59 "parser.ypp"
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
#line 1217 "parser.tab.cpp"
    break;

  case 4: /* Statements: Statement  */
#line 76 "parser.ypp"
                      { printProductionRule(2);
                        // Debug: Ensure no type checks are done here directly.
              //for tests: cout << "Reducing Statements -> Statements Statement at line " << yylineno << endl; 
              }
#line 1226 "parser.tab.cpp"
    break;

  case 5: /* Statements: Statements Statement  */
#line 80 "parser.ypp"
                                 { printProductionRule(3);
                        // Debug: Ensure no type checks are done here directly.
              //for tests: cout << "Reducing Statements -> Statements Statement at line " << yylineno << endl; 
              }
#line 1235 "parser.tab.cpp"
    break;

  case 6: /* Statement: LBRACE M_NEW_SCOPE Statements RBRACE  */
#line 88 "parser.ypp"
         {
           printProductionRule(4);
           exitScope(*tableStack);
           offsettStack->pop_offset(yylineno);
         }
#line 1245 "parser.tab.cpp"
    break;

  case 7: /* Statement: Type ID SC  */
#line 94 "parser.ypp"
         {
           string varName = static_cast<IdentifierStr*>(yyvsp[-1])->id;
           string varType = static_cast<TNode*>(yyvsp[-2])->type;
           string llvmType = getLLVMType(varType);
           string llvmVarName = "%" + varName;
           CodeBuffer::instance().emit(llvmVarName + " = alloca " + llvmType);
           
           // Initialize with default value
           if (varType == "bool") {
             CodeBuffer::instance().emit("store i1 false, i1* " + llvmVarName);
           } else if (varType == "int" || varType == "byte") {
             CodeBuffer::instance().emit("store " + llvmType + " 0, " + llvmType + "* " + llvmVarName);
           }
           
           checkVariableDeclaration(*tableStack, static_cast<IdentifierStr*>(yyvsp[-1])->id, yylineno);
           addSymbolToCurrentScope(*tableStack, varName, varType, offsettStack->top_offset(yylineno));
           offsettStack->update_top_offset();
           delete static_cast<IdentifierStr*>(yyvsp[-1]);
           delete static_cast<TNode*>(yyvsp[-2]);
           printProductionRule(5);
         }
#line 1271 "parser.tab.cpp"
    break;

  case 8: /* Statement: Type ID ASSIGN Exp SC  */
#line 116 "parser.ypp"
         {
           string varName = static_cast<IdentifierStr*>(yyvsp[-3])->id;
           string varType = static_cast<TNode*>(yyvsp[-4])->type;
           string expType = yyvsp[-1]->type;
           checkVariableDeclaration(*tableStack, varName, yylineno);
           checkAssignment(varType, expType, yylineno);
           string llvmType = getLLVMType(varType);
           string llvmVarName = "%" + varName;           
           CodeBuffer::instance().emit(llvmVarName + " = alloca " + llvmType);
           
           CodeBuffer::instance().emit("store " + llvmType + " " + yyvsp[-1]->llvm_var + ", " + llvmType + "* " + llvmVarName);
           addSymbolToCurrentScope(*tableStack, varName, varType, offsettStack->top_offset(yylineno));
           offsettStack->update_top_offset();
           delete static_cast<IdentifierStr*>(yyvsp[-3]);
           delete static_cast<TNode*>(yyvsp[-4]);
           delete yyvsp[-1];
           printProductionRule(6);
         }
#line 1294 "parser.tab.cpp"
    break;

  case 9: /* Statement: ID ASSIGN Exp SC  */
#line 135 "parser.ypp"
         {
           string varName = static_cast<IdentifierStr*>(yyvsp[-3])->id;
           string varType = getSymbolType(*tableStack, varName);
           if (varType.empty()) {
             output::errorUndef(yylineno, varName);
             exit(0);
           }
           checkAssignment(varType, yyvsp[-1]->type, yylineno); //check12
           string llvmType = getLLVMType(varType);
           string llvmVarName = "%" + varName;
           CodeBuffer::instance().emit("store " + llvmType + " " + yyvsp[-1]->llvm_var + ", " + llvmType + "* " + llvmVarName);
           delete static_cast<IdentifierStr*>(yyvsp[-3]);
           delete yyvsp[-1];
           printProductionRule(7);
         }
#line 1314 "parser.tab.cpp"
    break;

  case 10: /* Statement: Call SC  */
#line 150 "parser.ypp"
                   { printProductionRule(8); }
#line 1320 "parser.tab.cpp"
    break;

  case 11: /* Statement: RETURN SC  */
#line 152 "parser.ypp"
         {
           checkReturnStatement(*tableStack, "void", yylineno);
           printProductionRule(9);
         }
#line 1329 "parser.tab.cpp"
    break;

  case 12: /* Statement: IF LPAREN Exp RPAREN M_CHECK_IF_BOOL_andAddTrueLabel M_NEW_SCOPE Statement CLOSE_SCOPE  */
#line 157 "parser.ypp"
         {
           ExpNode* globalExp=globalExpStack.top();
           globalExpStack.pop();
           if(globalExp!=yyvsp[-5]) cout<<"errrrrror ya m3alem"<<endl;
           CodeBuffer::instance().emit(static_cast<ExpNode*>(yyvsp[-5])->next_label + ":");
           CodeBuffer::instance().emit(static_cast<ExpNode*>(yyvsp[-5])->false_label + ":");
           printProductionRule(10);
           delete yyvsp[-5];
           
         }
#line 1344 "parser.tab.cpp"
    break;

  case 13: /* Statement: IF LPAREN Exp RPAREN M_CHECK_IF_BOOL_andAddTrueLabel M_NEW_SCOPE Statement CLOSE_SCOPE ELSE M_NEW_SCOPE M_ADD_FALSE_LABEL Statement CLOSE_SCOPE  */
#line 168 "parser.ypp"
         {
          ExpNode* globalExp=globalExpStack.top();
          globalExpStack.pop();
           if(globalExp!=yyvsp[-10]) cout<<"errrrrror ya m3alem"<<endl;
           CodeBuffer::instance().emit(static_cast<ExpNode*>(yyvsp[-10])->next_label + ":");
           printProductionRule(11);
           delete yyvsp[-10];
         }
#line 1357 "parser.tab.cpp"
    break;

  case 14: /* Statement: WHILE LPAREN Exp RPAREN M_CHECK_WHILE_BOOL M_NEW_SCOPE_LOOP M_ADD_WHILE_TRUE_LABEL Statement M_ADD_WHILE_END  */
#line 177 "parser.ypp"
         {
           ExpNode* globalExp = globalExpStack.top();
           globalExpStack.pop();
           if(globalExp != yyvsp[-6]) cout << "errrrrror ya m3alem" << endl;
           
           exitScope(*tableStack);
           offsettStack->pop_offset(yylineno);
           loopDepth--;
           printProductionRule(12);
           delete yyvsp[-6];
         }
#line 1373 "parser.tab.cpp"
    break;

  case 15: /* Statement: BREAK SC  */
#line 190 "parser.ypp"
         {
           checkBreakStatement(loopDepth, yylineno);
           ExpNode* globalExp = globalExpStack.top();
           CodeBuffer::instance().emit("br label %" + globalExp->false_label);
           printProductionRule(13);
         }
#line 1384 "parser.tab.cpp"
    break;

  case 16: /* Statement: CONTINUE SC  */
#line 199 "parser.ypp"
         {
           checkContinueStatement(loopDepth, yylineno);
           ExpNode* globalExp = globalExpStack.top();
           CodeBuffer::instance().emit("br label %" + globalExp->next_label); //check12
           printProductionRule(14);
         }
#line 1395 "parser.tab.cpp"
    break;

  case 17: /* M_CHECK_WHILE_BOOL: %empty  */
#line 208 "parser.ypp"
                  {
                    if (!isBooleanType(global_exp_type)) {
                     output::errorMismatch(yylineno);
                     exit(0);
                    }
                    string conditionLabel = CodeBuffer::instance().freshLabel();
                    CodeBuffer::instance().emit(conditionLabel + ":");
                    globalExpStack.push(global_Exp);
                    
                    // Emit the conditional branch
                    CodeBuffer::instance().emit("br i1 " + global_Exp->llvm_var + ", label %" + global_Exp->true_label + ", label %" + global_Exp->false_label);//check12
                  }
#line 1412 "parser.tab.cpp"
    break;

  case 18: /* M_ADD_WHILE_TRUE_LABEL: %empty  */
#line 223 "parser.ypp"
                      {
                        ExpNode* globalExp = globalExpStack.top();
                        CodeBuffer::instance().emit(globalExp->true_label + ":");
                      }
#line 1421 "parser.tab.cpp"
    break;

  case 19: /* M_ADD_WHILE_END: %empty  */
#line 230 "parser.ypp"
               {
                 ExpNode* globalExp = globalExpStack.top();
                 
                 // Emit jump back to the condition check
                 string conditionLabel = CodeBuffer::instance().freshLabel();
                 CodeBuffer::instance().emit("br label %" + conditionLabel);
                 
                 // Emit the loop exit label (false label)
                 CodeBuffer::instance().emit(globalExp->false_label + ":");
                 
                 // Create a new label for the code after the loop
                 string afterLoopLabel = CodeBuffer::instance().freshLabel();
                 CodeBuffer::instance().emit(afterLoopLabel + ":");
                 
                 // Update the ExpNode with the new labels
                 globalExp->next_label = afterLoopLabel;
               //  globalExp->continue_label = conditionLabel; //check12
                 
                 // You might want to store these labels in a structure for nested loops
                 // if you need to handle break and continue for multiple loop levels
               }
#line 1447 "parser.tab.cpp"
    break;

  case 20: /* M_ADD_FALSE_LABEL: %empty  */
#line 254 "parser.ypp"
                 {
                   ExpNode* globalExp = globalExpStack.top();
                   CodeBuffer::instance().emit(globalExp->false_label + ":");
                 }
#line 1456 "parser.tab.cpp"
    break;

  case 21: /* CLOSE_SCOPE: %empty  */
#line 261 "parser.ypp"
           {
             exitScope(*tableStack);
             offsettStack->pop_offset(yylineno);
             if (!globalExpStack.empty()) {
               ExpNode* globalExp = globalExpStack.top();
               CodeBuffer::instance().emit("br label %" + globalExp->next_label);
             }
           }
#line 1469 "parser.tab.cpp"
    break;

  case 22: /* M_NEW_SCOPE: %empty  */
#line 272 "parser.ypp"
           {
             createNewScope(*tableStack);
             offsettStack->push_offset(offsettStack->top_offset(yylineno));
           }
#line 1478 "parser.tab.cpp"
    break;

  case 23: /* M_NEW_SCOPE_LOOP: %empty  */
#line 280 "parser.ypp"
                {
                  createNewScope(*tableStack);
                  offsettStack->push_offset(offsettStack->top_offset(yylineno));
                  loopDepth++;
                }
#line 1488 "parser.tab.cpp"
    break;

  case 24: /* M_CHECK_IF_BOOL_andAddTrueLabel: %empty  */
#line 287 "parser.ypp"
                {
                  if (!isBooleanType(global_exp_type)) {
                   output::errorMismatch(yylineno);
                   exit(0);
                  }
                  CodeBuffer::instance().emit(global_Exp->true_label + ":");
                  globalExpStack.push(global_Exp);

                }
#line 1502 "parser.tab.cpp"
    break;

  case 25: /* Call: ID LPAREN Exp RPAREN  */
#line 299 "parser.ypp"
    {
      string funcName = static_cast<IdentifierStr*>(yyvsp[-3])->id;
      string argType = yyvsp[-1]->type;  // This will be "int" in your example
      vector<string> argTypes = {argType};
      // changing checkFunctionCall
      // $$ = checkFunctionCall(*tableStack, funcName, argTypes, yylineno);
      functions* func = checkFunctionCall(*tableStack, funcName, argTypes, yylineno);
      /*
      // Check if the function exists
      tableEntry* entry = nullptr;
      for (const auto& e : tableStack->ParentScope->scope) {
        if (e->name == funcName) {
          entry = e;
          break;
        }
      }
      
      if (!entry) {
        output::errorUndefFunc(yylineno, funcName);
        exit(0);
      }
    //  cout<<"entry->type is : "<<entry->type<<endl;////////delete
      // Check if the entry is a function
      if (entry->type != "function") {
        output::errorUndefFunc(yylineno, funcName);
        exit(0);
      }

      // Now we know it's a function, we can safely cast it
       functions* func = dynamic_cast<functions*>(entry);
    if (!func) {
        //for tests: cout<<"debug line 212 parser.ypp"<<endl;/////delete
        output::errorUndefFunc(yylineno, funcName);
        exit(0);
    }

    */

      /*
      bool matchFound = false;
        for (const auto& paramType : func->all_arg) {
            if (isTypeCompatible(paramType, $3->type)) {
                matchFound = true;
                break;
            }
        }

        if (!matchFound) {
            output::errorPrototypeMismatch(yylineno, funcName, output::makeFunctionType(func->all_arg[0], func->ret_type));
            exit(0);
        }
      */
     if (!isTypeCompatible(func->all_arg[0], yyvsp[-1]->type)) {
    output::errorPrototypeMismatch(yylineno, funcName, output::makeFunctionType(func->all_arg[0], func->ret_type));
    exit(0);
}

      string resultVar;
      string callInstr;
      if (func->ret_type == "void") {
          callInstr = "call void @" + funcName + "(" + getLLVMType(argType) + " " + yyvsp[-1]->llvm_var + ")";
      } else {
          resultVar = freshVar();
          callInstr = resultVar + " = call " + getLLVMType(func->ret_type) + " @" + funcName + "(" + getLLVMType(argType) + " " + yyvsp[-1]->llvm_var + ")";
      }
      CodeBuffer::instance().emit(callInstr);
      yyval = new ExpNode(func->ret_type, func->ret_type == "void" ? "" : resultVar);
     // cout<<$$->type<<endl; /////////////////////delete
      printProductionRule(15);
      
      delete static_cast<IdentifierStr*>(yyvsp[-3]);
      delete yyvsp[-1];
    }
#line 1580 "parser.tab.cpp"
    break;

  case 26: /* Type: INT  */
#line 375 "parser.ypp"
          { yyval=new TNode("int"); printProductionRule(16); }
#line 1586 "parser.tab.cpp"
    break;

  case 27: /* Type: BYTE  */
#line 376 "parser.ypp"
           { yyval=new TNode("byte"); printProductionRule(17); }
#line 1592 "parser.tab.cpp"
    break;

  case 28: /* Type: BOOL  */
#line 377 "parser.ypp"
           { yyval=new TNode("bool"); printProductionRule(18); }
#line 1598 "parser.tab.cpp"
    break;

  case 29: /* Exp: LPAREN Exp RPAREN  */
#line 380 "parser.ypp"
                       { yyval = yyvsp[-1]; printProductionRule(19); global_exp_type=yyval->type; global_Exp=dynamic_cast<ExpNode*>(yyval);}
#line 1604 "parser.tab.cpp"
    break;

  case 30: /* Exp: Exp additive Exp  */
#line 382 "parser.ypp"
     { 
       checkNumericExpression(yyvsp[-2], *tableStack);
       checkNumericExpression(yyvsp[0], *tableStack);
      // string type1 = $1->type;
      // string type2 = $3->type;
      //for tests: cout << type1 <<endl;
      // $$ = new ExpNode(type1 == "int" || type2 == "int" ? "int" : "byte");
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
#line 1630 "parser.tab.cpp"
    break;

  case 31: /* Exp: Exp multiplicative Exp  */
#line 404 "parser.ypp"
     { 
       checkNumericExpression(yyvsp[-2], *tableStack);
       checkNumericExpression(yyvsp[0], *tableStack);
      // string type1 = $1->type;
      // string type2 = $3->type;
      // $$ = new ExpNode(type1 == "int" || type2 == "int" ? "int" : "byte");
       printProductionRule(20);

      //  if(static_cast<Binop*>($2)->op=="*"){
      //   $$=emitArithmetic("mul",dynamic_cast<ExpNode*>($1), dynamic_cast<ExpNode*>($3));
      //  }
       
      //  if(static_cast<Binop*>($2)->op=="/"){
      //   $$=emitDivision(dynamic_cast<ExpNode*>($1), dynamic_cast<ExpNode*>($3));
      //  }
      if(static_cast<Binop*>(yyvsp[-1])->op=="/"){
        yyval = emitDivision(dynamic_cast<ExpNode*>(yyvsp[-2]), dynamic_cast<ExpNode*>(yyvsp[0]));
      } else if(static_cast<Binop*>(yyvsp[-1])->op=="*"){
        yyval = emitArithmetic("mul",dynamic_cast<ExpNode*>(yyvsp[-2]), dynamic_cast<ExpNode*>(yyvsp[0]));
      }

       global_exp_type=yyval->type;
       global_Exp=dynamic_cast<ExpNode*>(yyval);
     }
#line 1659 "parser.tab.cpp"
    break;

  case 32: /* Exp: ID  */
#line 429 "parser.ypp"
     { 
       string varName = static_cast<IdentifierStr*>(yyvsp[0])->id;
       string varType = getSymbolType(*tableStack, varName);
       
       if(varType.empty() || varType=="function") {
         output::errorUndef(yylineno, varName);
         exit(0);
       }
       string llvmType = getLLVMType(varType);
       string llvmVarName = "%" + varName;
       string resultVar = freshVar();
       
       // Emit LLVM IR for loading variable value
       CodeBuffer::instance().emit(resultVar + " = load " + llvmType + ", " + llvmType + "* " + llvmVarName);
       yyval = new ExpNode(varType,resultVar); //check12
       
       printProductionRule(21);
       global_exp_type=yyval->type;
       global_Exp=dynamic_cast<ExpNode*>(yyval);
     }
#line 1684 "parser.tab.cpp"
    break;

  case 33: /* Exp: Call  */
#line 449 "parser.ypp"
          { yyval = yyvsp[0]; printProductionRule(22);global_exp_type=yyval->type;global_Exp=dynamic_cast<ExpNode*>(yyval);}
#line 1690 "parser.tab.cpp"
    break;

  case 34: /* Exp: NUM  */
#line 450 "parser.ypp"
         { yyval = new ExpNode("int"); printProductionRule(23);global_exp_type=yyval->type;global_Exp=dynamic_cast<ExpNode*>(yyval);}
#line 1696 "parser.tab.cpp"
    break;

  case 35: /* Exp: NUM B  */
#line 452 "parser.ypp"
     { 
       int value = static_cast<Num*>(yyvsp[-1])->num;
       if(!isLegalByteValue(value)) {
         output::errorByteTooLarge(yylineno, to_string(value));
         exit(0);
       }
       yyval = new ExpNode("byte");
       printProductionRule(24);
       global_exp_type=yyval->type;
       global_Exp=dynamic_cast<ExpNode*>(yyval);
     }
#line 1712 "parser.tab.cpp"
    break;

  case 36: /* Exp: STRING  */
#line 463 "parser.ypp"
            { yyval = new ExpNode("string");printProductionRule(25); global_exp_type=yyval->type;global_Exp=dynamic_cast<ExpNode*>(yyval);}
#line 1718 "parser.tab.cpp"
    break;

  case 37: /* Exp: TRUE  */
#line 464 "parser.ypp"
          { yyval = new ExpNode("bool", "true"); global_exp_type=yyval->type;global_Exp=dynamic_cast<ExpNode*>(yyval);}
#line 1724 "parser.tab.cpp"
    break;

  case 38: /* Exp: FALSE  */
#line 465 "parser.ypp"
           { yyval = new ExpNode("bool", "false"); global_exp_type=yyval->type;global_Exp=dynamic_cast<ExpNode*>(yyval);}
#line 1730 "parser.tab.cpp"
    break;

  case 39: /* Exp: NOT Exp  */
#line 467 "parser.ypp"
     { 
       checkBooleanExpression(yyvsp[0], *tableStack);
       yyval = emitBooleanNot(static_cast<ExpNode*>(yyvsp[0]));
       printProductionRule(28);
       global_exp_type=yyval->type;
       global_Exp=dynamic_cast<ExpNode*>(yyval);
     }
#line 1742 "parser.tab.cpp"
    break;

  case 40: /* Exp: Exp AND Exp  */
#line 475 "parser.ypp"
  { 
    checkBooleanExpression(yyvsp[-2], *tableStack);
    checkBooleanExpression(yyvsp[0], *tableStack);
    emitBooleanAnd(dynamic_cast<ExpNode*>(yyvsp[-2]), dynamic_cast<ExpNode*>(yyvsp[0]));
    yyval = new ExpNode("bool");
    static_cast<ExpNode*>(yyval)->true_label = static_cast<ExpNode*>(yyvsp[0])->true_label;
    static_cast<ExpNode*>(yyval)->false_label = static_cast<ExpNode*>(yyvsp[-2])->false_label;
    printProductionRule(29);
    global_exp_type = yyval->type;
    global_Exp = dynamic_cast<ExpNode*>(yyval);
  }
#line 1758 "parser.tab.cpp"
    break;

  case 41: /* Exp: Exp OR Exp  */
#line 487 "parser.ypp"
  { 
    checkBooleanExpression(yyvsp[-2], *tableStack);
    checkBooleanExpression(yyvsp[0], *tableStack);
    emitBooleanOr(dynamic_cast<ExpNode*>(yyvsp[-2]), dynamic_cast<ExpNode*>(yyvsp[0]));
    yyval = new ExpNode("bool");
    static_cast<ExpNode*>(yyval)->true_label = static_cast<ExpNode*>(yyvsp[-2])->true_label;
    static_cast<ExpNode*>(yyval)->false_label = static_cast<ExpNode*>(yyvsp[0])->false_label;
    printProductionRule(30);
    global_exp_type = yyval->type;
    global_Exp = dynamic_cast<ExpNode*>(yyval);
  }
#line 1774 "parser.tab.cpp"
    break;

  case 42: /* Exp: Exp equality Exp  */
#line 499 "parser.ypp"
     { 
       checkTypeMismatch(yyvsp[-2]->type, yyvsp[0]->type, "equality", yylineno);
       yyval = emitRelop(static_cast<Relop*>(yyvsp[-1])->op, static_cast<ExpNode*>(yyvsp[-2]),static_cast<ExpNode*>(yyvsp[0]));
       printProductionRule(31);
       global_exp_type=yyval->type;
       global_Exp=dynamic_cast<ExpNode*>(yyval);
     }
#line 1786 "parser.tab.cpp"
    break;

  case 43: /* Exp: Exp relational Exp  */
#line 507 "parser.ypp"
     { 
       checkNumericExpression(yyvsp[-2], *tableStack);
       checkNumericExpression(yyvsp[0], *tableStack);
       yyval = emitRelop(static_cast<Relop*>(yyvsp[-1])->op, static_cast<ExpNode*>(yyvsp[-2]),static_cast<ExpNode*>(yyvsp[0]));
       printProductionRule(31);
       global_exp_type=yyval->type;
       global_Exp=dynamic_cast<ExpNode*>(yyval);
     }
#line 1799 "parser.tab.cpp"
    break;

  case 44: /* Exp: LPAREN Type RPAREN Exp  */
#line 516 "parser.ypp"
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
#line 1833 "parser.tab.cpp"
    break;


#line 1837 "parser.tab.cpp"

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

#line 564 "parser.ypp"


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

int main(){
    // yydebug = 1; 
    CodeBuffer::instance().emit("define i32 @main(){");
    CodeBuffer::instance().emitGlobal("declare i32 @printf(i8*, ...)");
    CodeBuffer::instance().emitGlobal("declare void @exit(i32)");
    CodeBuffer::instance().emitGlobal("declare i32 @scanf(i8*, ...)");
    CodeBuffer::instance().emitGlobal("@.str_zeroDiv = internal constant [23 x i8] c\"Error division by zero\\00\"");

    // defining the built in functions 
    initBuiltInFunctions();

    // yyparse
    yyparse();
    // yyparse

    exitScope(*tableStack);

    CodeBuffer::instance().emit("ret i32 0");
    CodeBuffer::instance().emit("}");

    CodeBuffer::instance().printGlobalBuffer();
    CodeBuffer::instance().printCodeBuffer();
    
    return 0;

}

void yyerror(const char*){
    errorSyn(yylineno);
    exit(0);
}
