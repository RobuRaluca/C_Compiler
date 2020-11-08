/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "c.y"

#include <stdio.h>

int yyerror(char * s);
extern int yylex(void);

#line 78 "c.tab.c"

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

#include "c.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_END = 3,                        /* END  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_LONG = 5,                       /* LONG  */
  YYSYMBOL_DOUBLE = 6,                     /* DOUBLE  */
  YYSYMBOL_SHORT = 7,                      /* SHORT  */
  YYSYMBOL_UNSIGNED = 8,                   /* UNSIGNED  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_VOLATILE = 10,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_FLOAT = 12,                     /* FLOAT  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_CONSTANT = 16,                  /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 17,            /* STRING_LITERAL  */
  YYSYMBOL_ASSIGN = 18,                    /* ASSIGN  */
  YYSYMBOL_ADD = 19,                       /* ADD  */
  YYSYMBOL_SUBSTRACT = 20,                 /* SUBSTRACT  */
  YYSYMBOL_IDENTIFIER = 21,                /* IDENTIFIER  */
  YYSYMBOL_END_OF_INSTRUCTION = 22,        /* END_OF_INSTRUCTION  */
  YYSYMBOL_CHAR = 23,                      /* CHAR  */
  YYSYMBOL_SIGNED = 24,                    /* SIGNED  */
  YYSYMBOL__BOOL = 25,                     /* _BOOL  */
  YYSYMBOL__COMPLEX = 26,                  /* _COMPLEX  */
  YYSYMBOL__IMAGINARY = 27,                /* _IMAGINARY  */
  YYSYMBOL_CONST = 28,                     /* CONST  */
  YYSYMBOL_ENUM = 29,                      /* ENUM  */
  YYSYMBOL_EXTERN = 30,                    /* EXTERN  */
  YYSYMBOL_REGISTER = 31,                  /* REGISTER  */
  YYSYMBOL_STATIC = 32,                    /* STATIC  */
  YYSYMBOL_STRUCT = 33,                    /* STRUCT  */
  YYSYMBOL_UNION = 34,                     /* UNION  */
  YYSYMBOL_TYPEDEF = 35,                   /* TYPEDEF  */
  YYSYMBOL_FOR = 36,                       /* FOR  */
  YYSYMBOL_SWITCH = 37,                    /* SWITCH  */
  YYSYMBOL_CASE = 38,                      /* CASE  */
  YYSYMBOL_BREAK = 39,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 40,                   /* DEFAULT  */
  YYSYMBOL_INLINE = 41,                    /* INLINE  */
  YYSYMBOL_AUTO = 42,                      /* AUTO  */
  YYSYMBOL_CONTINUE = 43,                  /* CONTINUE  */
  YYSYMBOL_GOTO = 44,                      /* GOTO  */
  YYSYMBOL_RESTRICT = 45,                  /* RESTRICT  */
  YYSYMBOL_SIZEOF = 46,                    /* SIZEOF  */
  YYSYMBOL_SIMPLE_ESCAPE_SEQUENCE = 47,    /* SIMPLE_ESCAPE_SEQUENCE  */
  YYSYMBOL_INCLUDE_HEADER = 48,            /* INCLUDE_HEADER  */
  YYSYMBOL_INCLUDE_LIBRARY = 49,           /* INCLUDE_LIBRARY  */
  YYSYMBOL_DEFINE = 50,                    /* DEFINE  */
  YYSYMBOL_PREPROCESSING_NUMBER = 51,      /* PREPROCESSING_NUMBER  */
  YYSYMBOL_DIVIDE = 52,                    /* DIVIDE  */
  YYSYMBOL_MODULO = 53,                    /* MODULO  */
  YYSYMBOL_MULTIPLY = 54,                  /* MULTIPLY  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 55,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 56,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_ROUND_BRACKET = 57,        /* LEFT_ROUND_BRACKET  */
  YYSYMBOL_RIGHT_ROUND_BRACKET = 58,       /* RIGHT_ROUND_BRACKET  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 59,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 60,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_STRUCTURE_REFERENCE = 61,       /* STRUCTURE_REFERENCE  */
  YYSYMBOL_STRUCTURE_DEFERENCE = 62,       /* STRUCTURE_DEFERENCE  */
  YYSYMBOL_INCREMENT = 63,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 64,                 /* DECREMENT  */
  YYSYMBOL_BITWISE_AND = 65,               /* BITWISE_AND  */
  YYSYMBOL_BITWISE_NOT = 66,               /* BITWISE_NOT  */
  YYSYMBOL_LOGICAL_NEGATION = 67,          /* LOGICAL_NEGATION  */
  YYSYMBOL_BITWISE_LEFT_SHIFT = 68,        /* BITWISE_LEFT_SHIFT  */
  YYSYMBOL_BITWISE_RIGHT_SHIFT = 69,       /* BITWISE_RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 70,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 71,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_OR_EQUAL_TO = 72,     /* LESS_THAN_OR_EQUAL_TO  */
  YYSYMBOL_GREATER_THAN_OR_EQUAL_TO = 73,  /* GREATER_THAN_OR_EQUAL_TO  */
  YYSYMBOL_EQUAL_TO = 74,                  /* EQUAL_TO  */
  YYSYMBOL_NOT_EQUAL_TO = 75,              /* NOT_EQUAL_TO  */
  YYSYMBOL_BITWISE_XOR = 76,               /* BITWISE_XOR  */
  YYSYMBOL_BITWISE_OR = 77,                /* BITWISE_OR  */
  YYSYMBOL_LOGICAL_AND = 78,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 79,                /* LOGICAL_OR  */
  YYSYMBOL_TERNARY_IF_CONDITION = 80,      /* TERNARY_IF_CONDITION  */
  YYSYMBOL_TERNARY_ELSE_CONDITION = 81,    /* TERNARY_ELSE_CONDITION  */
  YYSYMBOL_ASSIGNMENT_BY_PRODUCT = 82,     /* ASSIGNMENT_BY_PRODUCT  */
  YYSYMBOL_ASSIGNMENT_BY_QUOTIENT = 83,    /* ASSIGNMENT_BY_QUOTIENT  */
  YYSYMBOL_ASSIGNMENT_BY_REMAINDER = 84,   /* ASSIGNMENT_BY_REMAINDER  */
  YYSYMBOL_ASSIGNMENT_BY_SUM = 85,         /* ASSIGNMENT_BY_SUM  */
  YYSYMBOL_ASSIGNMENT_BY_DIFFERENCE = 86,  /* ASSIGNMENT_BY_DIFFERENCE  */
  YYSYMBOL_ASSIGNMENT_BY_BITWISE_LEFT_SHIFT = 87, /* ASSIGNMENT_BY_BITWISE_LEFT_SHIFT  */
  YYSYMBOL_ASSIGNMENT_BY_BITWISE_RIGHT_SHIFT = 88, /* ASSIGNMENT_BY_BITWISE_RIGHT_SHIFT  */
  YYSYMBOL_ASSIGNMENT_BY_BITWISE_AND = 89, /* ASSIGNMENT_BY_BITWISE_AND  */
  YYSYMBOL_ASSIGNMENT_BY_BITWISE_XOR = 90, /* ASSIGNMENT_BY_BITWISE_XOR  */
  YYSYMBOL_ASSIGNMENT_BY_BITWISE_OR = 91,  /* ASSIGNMENT_BY_BITWISE_OR  */
  YYSYMBOL_START_COMMENT = 92,             /* START_COMMENT  */
  YYSYMBOL_COMMA = 93,                     /* COMMA  */
  YYSYMBOL_LINE_COMMENT = 94,              /* LINE_COMMENT  */
  YYSYMBOL_END_COMMENT = 95,               /* END_COMMENT  */
  YYSYMBOL_DO = 96,                        /* DO  */
  YYSYMBOL_ARRAY = 97,                     /* ARRAY  */
  YYSYMBOL_DOTS = 98,                      /* DOTS  */
  YYSYMBOL_YYACCEPT = 99,                  /* $accept  */
  YYSYMBOL_program_unit = 100,             /* program_unit  */
  YYSYMBOL_declaration = 101,              /* declaration  */
  YYSYMBOL_primary_expression = 102,       /* primary_expression  */
  YYSYMBOL_103_postfix_expression = 103,   /* postfix-expression  */
  YYSYMBOL_104_argument_expression_list = 104, /* argument-expression-list  */
  YYSYMBOL_105_unary_expression = 105,     /* unary-expression  */
  YYSYMBOL_106_unary_operator = 106,       /* unary-operator  */
  YYSYMBOL_107_cast_expression = 107,      /* cast-expression  */
  YYSYMBOL_108_multiplicative_expression = 108, /* multiplicative-expression  */
  YYSYMBOL_109_additive_expression = 109,  /* additive-expression  */
  YYSYMBOL_110_shift_expression = 110,     /* shift-expression  */
  YYSYMBOL_111_relational_expression = 111, /* relational-expression  */
  YYSYMBOL_112_equality_expression = 112,  /* equality-expression  */
  YYSYMBOL_113_AND_expression = 113,       /* AND-expression  */
  YYSYMBOL_114_exclusive_OR_expression = 114, /* exclusive-OR-expression  */
  YYSYMBOL_115_inclusive_OR_expression = 115, /* inclusive-OR-expression  */
  YYSYMBOL_116_logical_AND_expression = 116, /* logical-AND-expression  */
  YYSYMBOL_117_logical_OR_expression = 117, /* logical-OR-expression  */
  YYSYMBOL_118_conditional_expression = 118, /* conditional-expression  */
  YYSYMBOL_119_assignment_expression = 119, /* assignment-expression  */
  YYSYMBOL_120_assignment_operator = 120,  /* assignment-operator  */
  YYSYMBOL_expression = 121,               /* expression  */
  YYSYMBOL_122_constant_expression = 122,  /* constant-expression  */
  YYSYMBOL_123_declaration_specifier = 123, /* declaration-specifier  */
  YYSYMBOL_124_init_declarator_list = 124, /* init-declarator-list  */
  YYSYMBOL_125_init_declarator = 125,      /* init-declarator  */
  YYSYMBOL_126_storage_class_specifier = 126, /* storage-class-specifier  */
  YYSYMBOL_127_type_specifier = 127,       /* type-specifier  */
  YYSYMBOL_128_struct_or_union_specifier = 128, /* struct-or-union-specifier  */
  YYSYMBOL_129_struct_or_union = 129,      /* struct-or-union  */
  YYSYMBOL_130_struct_declaration_list = 130, /* struct-declaration-list  */
  YYSYMBOL_131_struct_declaration = 131,   /* struct-declaration  */
  YYSYMBOL_132_specifier_qualifier_list = 132, /* specifier-qualifier-list  */
  YYSYMBOL_133_struct_declarator_list = 133, /* struct-declarator-list  */
  YYSYMBOL_134_struct_declarator = 134,    /* struct-declarator  */
  YYSYMBOL_135_enum_specifier = 135,       /* enum-specifier  */
  YYSYMBOL_136_enumerator_list = 136,      /* enumerator-list  */
  YYSYMBOL_enumerator = 137,               /* enumerator  */
  YYSYMBOL_138_enumeration_constant = 138, /* enumeration-constant  */
  YYSYMBOL_139_type_qualifier = 139,       /* type-qualifier  */
  YYSYMBOL_140_function_specifier = 140,   /* function-specifier  */
  YYSYMBOL_declarator = 141,               /* declarator  */
  YYSYMBOL_142_direct_declarator = 142,    /* direct-declarator  */
  YYSYMBOL_pointer = 143,                  /* pointer  */
  YYSYMBOL_144_type_qualifier_list = 144,  /* type-qualifier-list  */
  YYSYMBOL_145_parameter_type_list = 145,  /* parameter-type-list  */
  YYSYMBOL_146_parameter_list = 146,       /* parameter-list  */
  YYSYMBOL_147_parameter_declaration = 147, /* parameter-declaration  */
  YYSYMBOL_148_identifier_list = 148,      /* identifier-list  */
  YYSYMBOL_149_type_name = 149,            /* type-name  */
  YYSYMBOL_150_abstract_declarator = 150,  /* abstract-declarator  */
  YYSYMBOL_151_direct_abstract_declarator = 151, /* direct-abstract-declarator  */
  YYSYMBOL_152_typedef_name = 152,         /* typedef-name  */
  YYSYMBOL_initializer = 153,              /* initializer  */
  YYSYMBOL_154_initializer_list = 154,     /* initializer-list  */
  YYSYMBOL_designation = 155,              /* designation  */
  YYSYMBOL_156_designator_list = 156,      /* designator-list  */
  YYSYMBOL_designator = 157,               /* designator  */
  YYSYMBOL_statement = 158,                /* statement  */
  YYSYMBOL_159_labeled_statement = 159,    /* labeled-statement  */
  YYSYMBOL_160_compound_statement = 160,   /* compound-statement  */
  YYSYMBOL_161_block_item_list = 161,      /* block-item-list  */
  YYSYMBOL_162_block_item = 162,           /* block-item  */
  YYSYMBOL_163_expression_statement = 163, /* expression-statement  */
  YYSYMBOL_164_selection_statement = 164,  /* selection-statement  */
  YYSYMBOL_165_iteration_statement = 165,  /* iteration-statement  */
  YYSYMBOL_166_jump_statement = 166,       /* jump-statement  */
  YYSYMBOL_167_declaration_list = 167,     /* declaration-list  */
  YYSYMBOL_168_function_definition = 168   /* function-definition  */
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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2070

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  247
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  436

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   353


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   107,   107,   108,   112,   113,   114,   118,   119,   120,
     121,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   138,   139,   143,   144,   145,   146,   147,   148,   152,
     153,   154,   155,   156,   157,   161,   162,   166,   167,   168,
     169,   173,   174,   175,   179,   180,   181,   185,   186,   187,
     188,   189,   193,   194,   195,   199,   200,   204,   205,   209,
     210,   214,   215,   219,   220,   224,   225,   229,   230,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     248,   249,   253,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   270,   271,   275,   276,   280,   281,   282,
     283,   284,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   306,   307,   308,
     312,   313,   317,   318,   322,   326,   327,   328,   329,   333,
     334,   338,   339,   340,   344,   345,   346,   347,   348,   352,
     353,   357,   358,   362,   366,   367,   368,   372,   376,   377,
     381,   382,   383,   384,   385,   386,   387,   388,   392,   393,
     394,   395,   399,   400,   404,   405,   409,   410,   414,   415,
     416,   420,   421,   425,   426,   430,   431,   432,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   449,   453,
     454,   455,   459,   460,   461,   462,   466,   470,   471,   475,
     476,   480,   481,   482,   483,   484,   485,   489,   490,   491,
     495,   496,   500,   501,   505,   506,   510,   511,   515,   516,
     517,   518,   519,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   540,   541,   542,
     543,   544,   558,   559,   563,   564,   565,   566
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
  "\"end of file\"", "error", "\"invalid token\"", "END", "INT", "LONG",
  "DOUBLE", "SHORT", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "FLOAT",
  "IF", "ELSE", "RETURN", "CONSTANT", "STRING_LITERAL", "ASSIGN", "ADD",
  "SUBSTRACT", "IDENTIFIER", "END_OF_INSTRUCTION", "CHAR", "SIGNED",
  "_BOOL", "_COMPLEX", "_IMAGINARY", "CONST", "ENUM", "EXTERN", "REGISTER",
  "STATIC", "STRUCT", "UNION", "TYPEDEF", "FOR", "SWITCH", "CASE", "BREAK",
  "DEFAULT", "INLINE", "AUTO", "CONTINUE", "GOTO", "RESTRICT", "SIZEOF",
  "SIMPLE_ESCAPE_SEQUENCE", "INCLUDE_HEADER", "INCLUDE_LIBRARY", "DEFINE",
  "PREPROCESSING_NUMBER", "DIVIDE", "MODULO", "MULTIPLY",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "LEFT_ROUND_BRACKET",
  "RIGHT_ROUND_BRACKET", "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET",
  "STRUCTURE_REFERENCE", "STRUCTURE_DEFERENCE", "INCREMENT", "DECREMENT",
  "BITWISE_AND", "BITWISE_NOT", "LOGICAL_NEGATION", "BITWISE_LEFT_SHIFT",
  "BITWISE_RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN",
  "LESS_THAN_OR_EQUAL_TO", "GREATER_THAN_OR_EQUAL_TO", "EQUAL_TO",
  "NOT_EQUAL_TO", "BITWISE_XOR", "BITWISE_OR", "LOGICAL_AND", "LOGICAL_OR",
  "TERNARY_IF_CONDITION", "TERNARY_ELSE_CONDITION",
  "ASSIGNMENT_BY_PRODUCT", "ASSIGNMENT_BY_QUOTIENT",
  "ASSIGNMENT_BY_REMAINDER", "ASSIGNMENT_BY_SUM",
  "ASSIGNMENT_BY_DIFFERENCE", "ASSIGNMENT_BY_BITWISE_LEFT_SHIFT",
  "ASSIGNMENT_BY_BITWISE_RIGHT_SHIFT", "ASSIGNMENT_BY_BITWISE_AND",
  "ASSIGNMENT_BY_BITWISE_XOR", "ASSIGNMENT_BY_BITWISE_OR", "START_COMMENT",
  "COMMA", "LINE_COMMENT", "END_COMMENT", "DO", "ARRAY", "DOTS", "$accept",
  "program_unit", "declaration", "primary_expression",
  "postfix-expression", "argument-expression-list", "unary-expression",
  "unary-operator", "cast-expression", "multiplicative-expression",
  "additive-expression", "shift-expression", "relational-expression",
  "equality-expression", "AND-expression", "exclusive-OR-expression",
  "inclusive-OR-expression", "logical-AND-expression",
  "logical-OR-expression", "conditional-expression",
  "assignment-expression", "assignment-operator", "expression",
  "constant-expression", "declaration-specifier", "init-declarator-list",
  "init-declarator", "storage-class-specifier", "type-specifier",
  "struct-or-union-specifier", "struct-or-union",
  "struct-declaration-list", "struct-declaration",
  "specifier-qualifier-list", "struct-declarator-list",
  "struct-declarator", "enum-specifier", "enumerator-list", "enumerator",
  "enumeration-constant", "type-qualifier", "function-specifier",
  "declarator", "direct-declarator", "pointer", "type-qualifier-list",
  "parameter-type-list", "parameter-list", "parameter-declaration",
  "identifier-list", "type-name", "abstract-declarator",
  "direct-abstract-declarator", "typedef-name", "initializer",
  "initializer-list", "designation", "designator-list", "designator",
  "statement", "labeled-statement", "compound-statement",
  "block-item-list", "block-item", "expression-statement",
  "selection-statement", "iteration-statement", "jump-statement",
  "declaration-list", "function-definition", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353
};
#endif

#define YYPACT_NINF (-272)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-189)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1899,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,    11,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  1857,  -272,   132,  1899,
    1941,  -272,    33,  -272,  1899,  1899,  -272,  -272,   -14,    38,
    -272,  -272,  -272,  -272,    28,    89,    -2,  -272,  1023,   195,
     111,    89,  -272,     7,    89,    93,  2025,    89,    89,    38,
    -272,    76,  -272,   137,  -272,  -272,    28,   151,  -272,    89,
    1454,   427,  -272,  -272,  1065,  1468,  1217,   195,  1065,   199,
    1259,  2025,  2025,   938,  -272,     6,  2025,    77,  -272,    23,
    1761,  -272,  -272,  -272,  -272,   203,  -272,  -272,  -272,  -272,
    -272,  1775,  -272,   874,  1402,  1789,  1789,  -272,  -272,  -272,
    -272,   247,    13,  1761,  -272,   220,   213,   197,   211,   194,
     161,   153,   178,   180,   212,  -272,  -272,  -272,   230,   243,
    1482,   640,  -272,   255,   265,  1761,   307,   250,   312,   315,
    -272,   566,  -272,  -272,     1,  -272,  -272,  -272,   505,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,   282,  -272,   283,   -15,
    -272,   126,   289,   256,  -272,    71,  -272,   292,    84,   980,
    -272,  -272,  -272,  1761,    18,  -272,   267,  -272,  -272,    29,
    -272,  -272,  -272,  -272,  -272,   874,  -272,  1983,    81,    31,
     294,  1761,   332,  -272,   118,  1454,    90,  -272,   874,  -272,
    -272,  1761,  1521,   333,   335,   336,   337,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  1761,  -272,
    1761,  1761,  1761,  1761,  1761,  1761,  1761,  1761,  1761,  1761,
    1761,  1761,  1761,  1761,  1761,  1761,  1761,  1761,  1761,  1761,
    1535,  -272,    20,   566,   682,  1761,   278,  -272,   566,  -272,
     340,   286,   352,  -272,  1761,  -272,  -272,  -272,  -272,  1549,
    1107,  1065,   103,  -272,   222,  -272,   379,  -272,   347,  -272,
     292,  -272,  -272,  -272,     6,  1761,  -272,   313,  -272,  1162,
     264,  -272,  1601,   314,  -272,  -272,  1370,  -272,  -272,  -272,
     316,    -3,  -272,    82,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,   220,   220,   213,   213,   197,   197,   197,
     197,   211,   211,   194,   161,   153,   178,   180,    80,   121,
     292,   130,  -272,  -272,   746,   351,    25,   152,   566,  -272,
    -272,   318,  -272,  -272,   320,   179,  -272,   319,   321,   222,
    1615,  1301,  -272,  -272,  -272,  -272,  -272,  -272,   322,  1402,
    -272,  -272,  -272,  -272,  1454,   322,  -272,  -272,  1761,  1761,
     566,  -272,   566,  1629,   356,    26,   810,  1681,   566,  -272,
    1761,  -272,  -272,  -272,   324,  -272,   326,  -272,   334,   171,
    -272,  -272,  -272,  -272,   380,  -272,   566,   154,   338,   339,
    1343,   371,    27,  1695,    30,  -272,   164,  -272,  -272,  -272,
    -272,  1386,   566,  -272,   566,   566,   566,   566,   341,   357,
    1761,   566,   166,  1709,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,   566,   566,   169,  -272,   566,   566,   170,  -272,  -272,
     566,  -272,  -272,   566,  -272,  -272
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   105,   106,   108,   104,   110,   102,   146,   107,   188,
     103,   109,   111,   112,   113,   144,     0,    98,   101,    99,
     120,   121,    97,   147,   100,   145,     0,     2,     0,    84,
      86,   114,     0,   115,    88,    90,   116,     6,   138,     0,
       1,     3,   150,     5,   159,     0,     0,    93,    95,   149,
       0,    83,    92,   188,    85,   119,     0,    87,    89,     0,
     143,     0,   139,   141,   162,   161,   158,     0,     4,     0,
       0,     0,   242,   245,     0,     0,     0,   148,     0,     0,
       0,     0,   126,     0,   122,     0,   128,     0,   135,     0,
       0,   163,   160,   151,    94,    95,     8,     9,    31,    32,
       7,     0,    30,     0,     0,     0,     0,    29,    33,    34,
      11,    23,    35,     0,    37,    41,    44,    47,    52,    55,
      57,    59,    61,    63,    65,    67,   189,    96,     0,     0,
       0,     7,   217,     0,     0,     0,     0,     0,     0,     0,
     211,     0,   214,    80,     0,   215,   201,   202,     0,   212,
     203,   204,   205,   206,   243,   244,    30,   153,     0,   188,
     157,   170,     0,   164,   166,     0,    91,     0,     0,     0,
     125,   118,   123,     0,     0,   129,   131,   127,   134,     0,
     137,   140,    35,    82,   142,     0,    27,     7,     0,   174,
       0,     0,     0,   193,     0,     0,     0,   197,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   241,     0,     0,     0,     0,     0,   239,     0,   238,
       0,     7,     0,   216,     0,   210,   213,   154,   152,     0,
       0,   168,   175,   169,   177,   155,     0,   156,     0,   246,
       0,   117,   133,   124,     0,     0,   136,     0,    10,     0,
     175,   173,     0,     0,   200,   190,     0,   192,   196,   198,
       0,     0,    14,     0,    21,    15,    16,    17,    18,    68,
      39,    40,    38,    42,    43,    45,    46,    48,    49,    50,
      51,    53,    54,    56,    58,    60,    62,    64,     0,     0,
       0,     0,   240,   207,     0,     0,     0,     0,     0,   209,
     237,     0,    81,   182,     0,   188,   187,     0,     0,   176,
       0,     0,   165,   167,   172,   247,   130,   132,    28,     0,
      36,   199,   191,   195,     0,     0,    12,    13,     0,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   208,
       0,   180,   185,   178,    30,   181,     0,   186,     0,     0,
     194,    22,    66,   223,   218,   202,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   222,     0,   183,   179,   184,
      19,     0,     0,   231,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,    20,   221,   230,   236,   229,
     235,     0,     0,     0,   228,     0,     0,     0,   234,   233,
       0,   227,   226,     0,   232,   225
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -272,  -272,     0,  -272,  -272,  -272,   -29,  -272,  -106,    72,
     102,  -161,    74,   162,   182,   163,   183,   181,  -272,   -56,
     -69,  -272,   -73,   -98,   -25,  -272,   353,  -272,   157,  -272,
    -272,   342,   -62,   -64,  -272,   155,  -272,   366,   -70,  -272,
     232,  -272,    -4,   -42,   -30,  -272,   -63,  -272,   160,  -272,
     -35,    -5,  -234,  -272,   -68,    78,  -271,  -272,   245,   -61,
    -272,   -45,  -272,   280,  -272,  -272,  -272,  -272,  -272,   -18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    72,   110,   111,   293,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     143,   218,   144,   184,    28,    46,    47,    29,    30,    31,
      32,    83,    84,    85,   174,   175,    33,    61,    62,    63,
      34,    35,    78,    49,    50,    66,   337,   163,   164,   165,
     190,   338,   264,    36,   193,   194,   195,   196,   197,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    74,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   126,   127,    73,    51,    54,   158,   219,    77,    57,
      58,    52,    52,   162,    65,   354,    52,    52,   170,   181,
      68,   172,   177,   253,    48,    79,    41,    42,   339,   155,
     188,   207,    38,    73,   183,   126,    92,   246,     7,   189,
     273,    67,   322,  -171,    60,    59,   339,   367,   389,   410,
      60,   161,   413,   356,    55,   168,    15,   242,    52,    60,
      44,   182,    52,    45,    80,    95,   307,   308,   309,   310,
      39,   142,   186,    25,   154,   272,   199,   200,  -171,   183,
     252,   176,    44,   180,   182,    44,   259,   173,   279,   276,
     254,    69,    56,   283,   254,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,    42,   182,   172,   288,   181,
      42,   274,   188,   254,   300,   301,   302,   183,   254,   254,
     254,   189,   269,   254,    42,   188,   126,   287,   291,   267,
     354,   262,    42,   294,   189,   183,    88,   178,    44,   278,
     357,    45,   270,    44,   182,   191,    45,    42,   142,   299,
     277,   192,    81,    42,    43,    90,   263,   261,   259,   280,
     260,   359,   182,   290,   268,   318,   319,   321,    45,    89,
     179,   326,   327,   254,   254,   358,   350,   347,   285,   360,
      44,   259,   323,   260,   281,   332,    44,   329,   362,    45,
     334,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,    93,
     368,   286,   404,    82,   254,   166,    73,   126,   353,   183,
      77,    70,   414,   254,   425,   345,   233,   430,   433,   234,
     262,   400,   223,   224,  -150,   161,  -150,  -150,    82,    82,
      82,   161,    52,    82,   325,   254,   182,   254,    52,   280,
      75,   365,    76,   182,   161,   235,    67,   254,   236,   254,
      82,    52,   254,   254,   401,   225,   226,   369,   231,   232,
     176,   376,   220,   221,   222,   361,    64,   340,   378,   341,
     126,   227,   228,   229,   230,   126,   380,   239,    86,   381,
     387,   237,   238,   392,   394,   303,   304,   396,    91,   383,
     240,   384,   201,   382,   202,   311,   312,   395,   203,   204,
     205,   206,   244,    86,    86,    86,   161,   385,    86,   259,
     412,   279,   245,    52,   364,   403,    82,   305,   306,   247,
     182,   248,   126,   353,   249,    86,   250,   423,   257,   258,
     427,   416,    82,   417,   418,   419,   420,   265,   275,   266,
     424,    71,   282,   284,   295,    82,   296,   297,   298,   328,
     428,   429,   330,   331,   431,   432,   391,   243,   344,   434,
     351,   348,   435,   366,   355,   370,   371,   372,   388,   373,
     397,   349,   398,     1,     2,     3,     4,     5,     6,     7,
     408,     8,   399,   409,   402,   313,   405,   406,   315,   421,
       9,    86,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   422,   314,    86,   317,   316,
      23,    24,    94,   169,    25,    87,   343,   379,   256,   346,
      86,     1,     2,     3,     4,     5,     6,     7,   128,     8,
     129,   289,   130,    96,    97,     0,    98,    99,   131,   132,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,   133,   134,   135,   136,   137,    23,    24,
     138,   139,    25,   101,     0,     0,     0,   342,     0,     0,
       0,   102,     0,     0,   103,     0,    71,   140,     0,     0,
     105,   106,   107,   108,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     4,     5,     6,     7,   128,     8,   129,     0,
     130,    96,    97,   141,    98,    99,   131,   132,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   133,   134,   135,   136,   137,    23,    24,   138,   139,
      25,   101,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,   103,     0,    71,   255,     0,     0,   105,   106,
     107,   108,   109,     0,     0,     0,     0,   128,     0,   129,
       0,   130,    96,    97,     0,    98,    99,   251,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   141,   133,   134,   135,   136,   137,     0,     0,   138,
     139,     0,   101,     0,     0,     0,     0,     0,     0,     0,
     102,     0,     0,   103,     0,    71,     0,     0,     0,   105,
     106,   107,   108,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,     0,  -188,     0,     0,     0,     0,     0,     0,     0,
       0,  -188,   141,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,     0,     0,     0,     0,
       0,  -188,  -188,     0,     0,  -188,     1,     2,     3,     4,
       5,     6,     7,     0,     8,     0,     0,     0,    96,    97,
       0,    98,    99,   187,   324,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,     0,
       0,   243,     0,    23,    24,     0,     0,    25,   101,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
       0,     0,     0,     0,     0,   105,   106,   107,   108,   109,
       1,     2,     3,     4,     5,     6,     7,     0,     8,     0,
       0,     0,    96,    97,     0,    98,    99,   187,   363,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,    23,    24,     0,
       0,    25,   101,     0,     0,     0,     0,     0,     0,     0,
     102,     0,     0,   103,     0,     0,     0,     0,     0,   105,
     106,   107,   108,   109,     1,     2,     3,     4,     5,     6,
       7,     0,     8,     0,     0,     0,    96,    97,     0,    98,
      99,   187,   390,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,    23,    24,     0,     0,    25,   101,     0,     0,     0,
       0,     0,     0,     0,   102,     0,     0,   103,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,     1,     2,
       3,     4,     5,     6,     7,     0,     8,     0,     0,     0,
      96,    97,     0,    98,    99,   187,     0,    10,    11,    12,
      13,    14,    15,    16,     0,     0,     0,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
     101,     0,     0,     0,     0,     0,     0,     0,   102,     0,
       0,   103,     0,     0,     0,     0,     0,   105,   106,   107,
     108,   109,     1,     2,     3,     4,     5,     6,     7,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,    10,    11,    12,    13,    14,    15,    16,     0,     0,
       0,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     1,     2,     3,     4,     5,     6,
       7,     0,     8,     0,     0,     0,     0,     0,   171,     0,
       0,     9,     0,    10,    11,    12,    13,    14,    15,    16,
       0,     0,     0,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     1,     2,     3,
       4,     5,     6,     7,     0,     8,     0,     0,     0,     0,
     271,    70,     0,     0,     9,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,    23,    24,     0,     0,    25,     1,
       2,     3,     4,     5,     6,     7,     0,     8,     0,     0,
       0,     0,    71,     0,     0,     0,     9,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,     0,     0,     0,     0,    23,    24,     0,     0,
      25,     1,     2,     3,     4,     5,     6,     7,     0,     8,
       0,     0,     0,     0,    71,     0,     0,     0,   335,     0,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     0,     0,     0,    23,    24,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,    44,   259,     0,   260,   336,     1,     2,     3,     4,
       5,     6,     7,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,     0,
       0,     0,     0,    23,    24,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,    44,   259,     0,   279,
     336,     1,     2,     3,     4,     5,     6,     7,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,   159,     0,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     0,     0,     0,    23,    24,
       0,     0,    25,     1,     2,     3,     4,     5,     6,     7,
       0,     8,     0,     0,     0,   160,     0,     0,     0,     0,
       9,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     0,     0,     0,     0,     0,
      23,    24,     0,     0,    25,     1,     2,     3,     4,     5,
       6,     7,     0,     8,     0,     0,     0,   167,     0,     0,
       0,     0,     9,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,    23,    24,     0,     0,    25,     1,     2,     3,
       4,     5,     6,     7,     0,     8,     0,     0,     0,   377,
       0,     0,     0,     0,     9,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,    23,    24,    96,    97,    25,    98,
      99,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,    96,    97,     0,    98,    99,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,    96,    97,
       0,    98,    99,   100,   102,   191,     0,   103,     0,   104,
     352,   192,   101,   105,   106,   107,   108,   109,     0,     0,
     102,   191,     0,   103,     0,   104,   415,   192,   101,   105,
     106,   107,   108,   109,     0,     0,   102,   191,     0,   103,
       0,   104,     0,   192,     0,   105,   106,   107,   108,   109,
      96,    97,     0,    98,    99,   100,     0,     0,     0,     0,
       0,     0,     0,     0,    96,    97,     0,    98,    99,   100,
       0,     0,     0,     0,     0,     0,     0,     0,    96,    97,
     101,    98,    99,   100,   241,     0,     0,     0,   102,     0,
       0,   103,     0,   104,   101,     0,     0,   105,   106,   107,
     108,   109,   156,     0,   157,   103,     0,     0,   101,     0,
       0,   105,   106,   107,   108,   109,   102,    96,    97,   103,
      98,    99,   100,     0,     0,   105,   106,   107,   108,   109,
       0,    96,    97,     0,    98,    99,   100,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,   101,    98,    99,
     100,     0,     0,     0,     0,   102,     0,     0,   103,   292,
       0,   101,     0,     0,   105,   106,   107,   108,   109,   102,
       0,     0,   103,   320,     0,   101,     0,     0,   105,   106,
     107,   108,   109,   102,     0,   333,   103,     0,     0,     0,
       0,     0,   105,   106,   107,   108,   109,    96,    97,     0,
      98,    99,   100,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97,     0,    98,    99,   100,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,   101,    98,    99,
     100,     0,     0,     0,     0,   102,     0,     0,   103,     0,
     349,   101,     0,     0,   105,   106,   107,   108,   109,   374,
       0,   375,   103,     0,     0,   101,     0,     0,   105,   106,
     107,   108,   109,   102,     0,     0,   103,   386,     0,     0,
       0,     0,   105,   106,   107,   108,   109,    96,    97,     0,
      98,    99,   100,   393,     0,     0,     0,     0,     0,     0,
       0,    96,    97,     0,    98,    99,   100,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,   101,    98,    99,
     100,     0,     0,     0,     0,   102,     0,     0,   103,     0,
       0,   101,     0,     0,   105,   106,   107,   108,   109,   102,
       0,     0,   103,   411,     0,   101,     0,     0,   105,   106,
     107,   108,   109,   102,     0,     0,   103,   426,     0,     0,
       0,     0,   105,   106,   107,   108,   109,    96,    97,     0,
      98,    99,   100,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97,     0,    98,    99,   100,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,   101,    98,    99,
     100,     0,     0,     0,     0,   102,     0,     0,   103,     0,
       0,   101,     0,     0,   105,   106,   107,   108,   109,   102,
       0,     0,   185,     0,     0,   101,     0,     0,   105,   106,
     107,   108,   109,   102,     0,     0,   198,     0,     0,     0,
       0,     0,   105,   106,   107,   108,   109,    40,     0,     0,
       0,     1,     2,     3,     4,     5,     6,     7,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     0,     0,     0,    23,    24,
       0,     0,    25,     1,     2,     3,     4,     5,     6,     7,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     0,     0,     0,     0,     0,
      23,    24,     0,     0,    25,     1,     2,     3,     4,     5,
       6,     7,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,    23,    24,     0,     0,    25,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,     0,  -188,     0,     0,     0,     0,
       0,     0,     0,     0,  -188,     0,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,     0,
       0,     0,     0,     0,  -188,  -188,     0,     0,  -188,     1,
       2,     3,     4,     5,     6,     7,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     9,     0,    10,    11,
      12,    13,    14,    15,    16,     0,     0,     0,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25
};

static const yytype_int16 yycheck[] =
{
       0,    70,    70,    48,    29,    30,    75,   113,    50,    34,
      35,    29,    30,    76,    44,   286,    34,    35,    82,    89,
      22,    83,    86,    22,    28,    18,    26,    21,   262,    74,
     103,    18,    21,    78,    90,   104,    66,   135,    10,   103,
      22,    45,    22,    58,    21,    59,   280,    22,    22,    22,
      21,    76,    22,    56,    21,    80,    28,   130,    76,    21,
      54,    90,    80,    57,    57,    69,   227,   228,   229,   230,
      59,    71,   101,    45,    74,   173,   105,   106,    93,   135,
     141,    85,    54,    60,   113,    54,    55,    81,    57,    60,
      93,    93,    59,   191,    93,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    21,   135,   169,    18,   179,
      21,    93,   185,    93,   220,   221,   222,   173,    93,    93,
      93,   185,   167,    93,    21,   198,   195,   195,   201,    58,
     401,   161,    21,   202,   198,   191,    60,    60,    54,    58,
      58,    57,    58,    54,   173,    55,    57,    21,   148,   218,
     185,    61,    59,    21,    22,    18,   161,   161,    55,   189,
      57,    81,   191,   198,    93,   238,   239,   240,    57,    93,
      93,   244,   245,    93,    93,    93,   282,   275,    60,    58,
      54,    55,   243,    57,   189,   254,    54,   248,    58,    57,
     259,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,    58,
      58,    93,    58,    56,    93,    16,   261,   286,   286,   275,
     262,    18,    58,    93,    58,   270,    65,    58,    58,    76,
     260,    60,    19,    20,    55,   260,    57,    58,    81,    82,
      83,   266,   260,    86,   244,    93,   275,    93,   266,   279,
      55,   324,    57,   282,   279,    77,   260,    93,    78,    93,
     103,   279,    93,    93,    93,    68,    69,   328,    74,    75,
     274,   340,    52,    53,    54,   320,    44,    55,   341,    57,
     349,    70,    71,    72,    73,   354,   354,    57,    56,   358,
     363,    79,    80,   366,   367,   223,   224,   370,    66,   360,
      57,   362,    55,   359,    57,   231,   232,   368,    61,    62,
      63,    64,    57,    81,    82,    83,   341,   362,    86,    55,
     393,    57,    57,   341,   324,   386,   169,   225,   226,    22,
     359,    81,   401,   401,    22,   103,    21,   410,    56,    56,
     413,   402,   185,   404,   405,   406,   407,    58,    81,    93,
     411,    59,    58,    21,    21,   198,    21,    21,    21,    81,
     421,   422,    22,    11,   425,   426,   366,    81,    21,   430,
      56,    58,   433,    22,    58,    57,    56,    58,    22,    58,
      56,    59,    56,     4,     5,     6,     7,     8,     9,    10,
     390,    12,    58,    22,    14,   233,    58,    58,   235,    58,
      21,   169,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    58,   234,   185,   237,   236,
      41,    42,    69,    81,    45,    59,   266,   349,   148,   274,
     198,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   196,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    54,    -1,    -1,    57,    -1,    59,    60,    -1,    -1,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    96,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    57,    -1,    59,    60,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    11,    -1,    13,
      -1,    15,    16,    17,    -1,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    36,    37,    38,    39,    40,    -1,    -1,    43,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    57,    -1,    59,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    96,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    45,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    81,    -1,    41,    42,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    -1,    19,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,    -1,
      60,    18,    -1,    -1,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    45,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      45,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    21,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    -1,    57,    58,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,
      58,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,    -1,    45,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    45,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    41,    42,    16,    17,    45,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    16,    17,    -1,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    16,    17,
      -1,    19,    20,    21,    54,    55,    -1,    57,    -1,    59,
      60,    61,    46,    63,    64,    65,    66,    67,    -1,    -1,
      54,    55,    -1,    57,    -1,    59,    60,    61,    46,    63,
      64,    65,    66,    67,    -1,    -1,    54,    55,    -1,    57,
      -1,    59,    -1,    61,    -1,    63,    64,    65,    66,    67,
      16,    17,    -1,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      46,    19,    20,    21,    22,    -1,    -1,    -1,    54,    -1,
      -1,    57,    -1,    59,    46,    -1,    -1,    63,    64,    65,
      66,    67,    54,    -1,    56,    57,    -1,    -1,    46,    -1,
      -1,    63,    64,    65,    66,    67,    54,    16,    17,    57,
      19,    20,    21,    -1,    -1,    63,    64,    65,    66,    67,
      -1,    16,    17,    -1,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    46,    19,    20,
      21,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,
      -1,    46,    -1,    -1,    63,    64,    65,    66,    67,    54,
      -1,    -1,    57,    58,    -1,    46,    -1,    -1,    63,    64,
      65,    66,    67,    54,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    16,    17,    -1,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    46,    19,    20,
      21,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    -1,
      59,    46,    -1,    -1,    63,    64,    65,    66,    67,    54,
      -1,    56,    57,    -1,    -1,    46,    -1,    -1,    63,    64,
      65,    66,    67,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    16,    17,    -1,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    46,    19,    20,
      21,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    -1,
      -1,    46,    -1,    -1,    63,    64,    65,    66,    67,    54,
      -1,    -1,    57,    58,    -1,    46,    -1,    -1,    63,    64,
      65,    66,    67,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    16,    17,    -1,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    46,    19,    20,
      21,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    -1,
      -1,    46,    -1,    -1,    63,    64,    65,    66,    67,    54,
      -1,    -1,    57,    -1,    -1,    46,    -1,    -1,    63,    64,
      65,    66,    67,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,     0,    -1,    -1,
      -1,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,    -1,    45,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    45,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    45,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    12,    21,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    41,    42,    45,   100,   101,   123,   126,
     127,   128,   129,   135,   139,   140,   152,   168,    21,    59,
       0,   101,    21,    22,    54,    57,   124,   125,   141,   142,
     143,   123,   168,    21,   123,    21,    59,   123,   123,    59,
      21,   136,   137,   138,   139,   143,   144,   141,    22,    93,
      18,    59,   101,   160,   167,    55,    57,   142,   141,    18,
      57,    59,   127,   130,   131,   132,   139,   136,    60,    93,
      18,   139,   143,    58,   125,   141,    16,    17,    19,    20,
      21,    46,    54,    57,    59,    63,    64,    65,    66,    67,
     102,   103,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   153,    11,    13,
      15,    21,    22,    36,    37,    38,    39,    40,    43,    44,
      60,    96,   101,   119,   121,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   101,   160,    54,    56,   119,    21,
      58,   123,   145,   146,   147,   148,    16,    58,   123,   130,
     132,    60,   131,    81,   133,   134,   141,   132,    60,    93,
      60,   137,   105,   118,   122,    57,   105,    21,   121,   132,
     149,    55,    61,   153,   154,   155,   156,   157,    57,   105,
     105,    55,    57,    61,    62,    63,    64,    18,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,   120,   107,
      52,    53,    54,    19,    20,    68,    69,    70,    71,    72,
      73,    74,    75,    65,    76,    77,    78,    79,    80,    57,
      57,    22,   121,    81,    57,    57,   122,    22,    81,    22,
      21,    21,   158,    22,    93,    60,   162,    56,    56,    55,
      57,   141,   143,   150,   151,    58,    93,    58,    93,   160,
      58,    60,   122,    22,    93,    81,    60,   149,    58,    57,
     143,   150,    58,   122,    21,    60,    93,   153,    18,   157,
     149,   121,    58,   104,   119,    21,    21,    21,    21,   119,
     107,   107,   107,   108,   108,   109,   109,   110,   110,   110,
     110,   111,   111,   112,   113,   114,   115,   116,   121,   121,
      58,   121,    22,   158,    22,   101,   121,   121,    81,   158,
      22,    11,   119,    56,   119,    21,    58,   145,   150,   151,
      55,    57,    98,   147,    21,   160,   134,   122,    58,    59,
     107,    56,    60,   153,   155,    58,    56,    58,    93,    81,
      58,   160,    58,    22,   101,   121,    22,    22,    58,   158,
      57,    56,    58,    58,    54,    56,   119,    58,   145,   154,
     153,   119,   118,   158,   158,   160,    58,   121,    22,    22,
      22,   101,   121,    22,   121,   158,   121,    56,    56,    58,
      60,    93,    14,   158,    58,    58,    58,    58,   101,    22,
      22,    58,   121,    22,    58,    60,   158,   158,   158,   158,
     158,    58,    58,   121,   158,    58,    58,   121,   158,   158,
      58,   158,   158,    58,   158,   158
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   101,   101,   101,   102,   102,   102,
     102,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   104,   104,   105,   105,   105,   105,   105,   105,   106,
     106,   106,   106,   106,   106,   107,   107,   108,   108,   108,
     108,   109,   109,   109,   110,   110,   110,   111,   111,   111,
     111,   111,   112,   112,   112,   113,   113,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   119,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     121,   121,   122,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   124,   124,   125,   125,   126,   126,   126,
     126,   126,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   128,   128,   128,
     129,   129,   130,   130,   131,   132,   132,   132,   132,   133,
     133,   134,   134,   134,   135,   135,   135,   135,   135,   136,
     136,   137,   137,   138,   139,   139,   139,   140,   141,   141,
     142,   142,   142,   142,   142,   142,   142,   142,   143,   143,
     143,   143,   144,   144,   145,   145,   146,   146,   147,   147,
     147,   148,   148,   149,   149,   150,   150,   150,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   152,   153,
     153,   153,   154,   154,   154,   154,   155,   156,   156,   157,
     157,   158,   158,   158,   158,   158,   158,   159,   159,   159,
     160,   160,   161,   161,   162,   162,   163,   163,   164,   164,
     164,   164,   164,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   166,   166,   166,
     166,   166,   167,   167,   168,   168,   168,   168
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       3,     1,     4,     4,     3,     3,     3,     3,     3,     6,
       7,     1,     3,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     4,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     4,     2,
       1,     1,     1,     2,     3,     2,     1,     2,     1,     1,
       3,     1,     3,     2,     5,     4,     6,     5,     2,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     2,     1,
       1,     3,     4,     3,     4,     4,     4,     3,     2,     1,
       3,     2,     1,     2,     1,     3,     1,     3,     2,     2,
       1,     1,     3,     2,     1,     1,     2,     1,     3,     4,
       3,     3,     2,     4,     4,     3,     3,     2,     1,     1,
       3,     4,     2,     1,     4,     3,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       3,     2,     1,     2,     1,     1,     2,     1,     5,     5,
       4,     7,     5,     5,     6,     9,     8,     8,     7,     7,
       7,     6,     9,     8,     8,     7,     7,     3,     2,     2,
       3,     2,     1,     2,     4,     3,     5,     6
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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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

#line 1903 "c.tab.c"

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

#line 569 "c.y"


int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  
