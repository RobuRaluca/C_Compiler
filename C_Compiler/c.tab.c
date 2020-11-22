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
#include "ast.h"

Node* astRoot = NULL;
int yyerror(char * s);
extern int yylex(void);

#line 80 "c.tab.c"

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
  YYSYMBOL_comment_sequence = 102,         /* comment_sequence  */
  YYSYMBOL_primary_expression = 103,       /* primary_expression  */
  YYSYMBOL_104_postfix_expression = 104,   /* postfix-expression  */
  YYSYMBOL_105_argument_expression_list = 105, /* argument-expression-list  */
  YYSYMBOL_106_unary_expression = 106,     /* unary-expression  */
  YYSYMBOL_107_unary_operator = 107,       /* unary-operator  */
  YYSYMBOL_108_cast_expression = 108,      /* cast-expression  */
  YYSYMBOL_109_multiplicative_expression = 109, /* multiplicative-expression  */
  YYSYMBOL_110_additive_expression = 110,  /* additive-expression  */
  YYSYMBOL_111_shift_expression = 111,     /* shift-expression  */
  YYSYMBOL_112_relational_expression = 112, /* relational-expression  */
  YYSYMBOL_113_equality_expression = 113,  /* equality-expression  */
  YYSYMBOL_114_AND_expression = 114,       /* AND-expression  */
  YYSYMBOL_115_exclusive_OR_expression = 115, /* exclusive-OR-expression  */
  YYSYMBOL_116_inclusive_OR_expression = 116, /* inclusive-OR-expression  */
  YYSYMBOL_117_logical_AND_expression = 117, /* logical-AND-expression  */
  YYSYMBOL_118_logical_OR_expression = 118, /* logical-OR-expression  */
  YYSYMBOL_119_conditional_expression = 119, /* conditional-expression  */
  YYSYMBOL_120_assignment_expression = 120, /* assignment-expression  */
  YYSYMBOL_121_assignment_operator = 121,  /* assignment-operator  */
  YYSYMBOL_expression = 122,               /* expression  */
  YYSYMBOL_123_constant_expression = 123,  /* constant-expression  */
  YYSYMBOL_124_declaration_specifier = 124, /* declaration-specifier  */
  YYSYMBOL_125_init_declarator_list = 125, /* init-declarator-list  */
  YYSYMBOL_126_init_declarator = 126,      /* init-declarator  */
  YYSYMBOL_127_storage_class_specifier = 127, /* storage-class-specifier  */
  YYSYMBOL_128_type_specifier = 128,       /* type-specifier  */
  YYSYMBOL_129_struct_or_union_specifier = 129, /* struct-or-union-specifier  */
  YYSYMBOL_130_struct_or_union = 130,      /* struct-or-union  */
  YYSYMBOL_131_struct_declaration_list = 131, /* struct-declaration-list  */
  YYSYMBOL_132_struct_declaration = 132,   /* struct-declaration  */
  YYSYMBOL_133_specifier_qualifier_list = 133, /* specifier-qualifier-list  */
  YYSYMBOL_134_struct_declarator_list = 134, /* struct-declarator-list  */
  YYSYMBOL_135_struct_declarator = 135,    /* struct-declarator  */
  YYSYMBOL_136_enum_specifier = 136,       /* enum-specifier  */
  YYSYMBOL_137_enumerator_list = 137,      /* enumerator-list  */
  YYSYMBOL_enumerator = 138,               /* enumerator  */
  YYSYMBOL_139_enumeration_constant = 139, /* enumeration-constant  */
  YYSYMBOL_140_type_qualifier = 140,       /* type-qualifier  */
  YYSYMBOL_141_function_specifier = 141,   /* function-specifier  */
  YYSYMBOL_declarator = 142,               /* declarator  */
  YYSYMBOL_143_direct_declarator = 143,    /* direct-declarator  */
  YYSYMBOL_pointer = 144,                  /* pointer  */
  YYSYMBOL_145_pointer_vector_definition = 145, /* pointer-vector-definition  */
  YYSYMBOL_146_type_qualifier_list = 146,  /* type-qualifier-list  */
  YYSYMBOL_147_parameter_type_list = 147,  /* parameter-type-list  */
  YYSYMBOL_148_parameter_list = 148,       /* parameter-list  */
  YYSYMBOL_149_parameter_declaration = 149, /* parameter-declaration  */
  YYSYMBOL_150_identifier_list = 150,      /* identifier-list  */
  YYSYMBOL_151_type_name = 151,            /* type-name  */
  YYSYMBOL_152_abstract_declarator = 152,  /* abstract-declarator  */
  YYSYMBOL_153_direct_abstract_declarator = 153, /* direct-abstract-declarator  */
  YYSYMBOL_154_typedef_name = 154,         /* typedef-name  */
  YYSYMBOL_initializer = 155,              /* initializer  */
  YYSYMBOL_156_initializer_list = 156,     /* initializer-list  */
  YYSYMBOL_designation = 157,              /* designation  */
  YYSYMBOL_158_designator_list = 158,      /* designator-list  */
  YYSYMBOL_designator = 159,               /* designator  */
  YYSYMBOL_statement = 160,                /* statement  */
  YYSYMBOL_161_labeled_statement = 161,    /* labeled-statement  */
  YYSYMBOL_162_compound_statement = 162,   /* compound-statement  */
  YYSYMBOL_local_declaration_list = 163,   /* local_declaration_list  */
  YYSYMBOL_instructions_list = 164,        /* instructions_list  */
  YYSYMBOL_165_expression_statement = 165, /* expression-statement  */
  YYSYMBOL_166_selection_statement = 166,  /* selection-statement  */
  YYSYMBOL_167_iteration_statement = 167,  /* iteration-statement  */
  YYSYMBOL_168_jump_statement = 168,       /* jump-statement  */
  YYSYMBOL_169_declaration_list = 169,     /* declaration-list  */
  YYSYMBOL_170_function_definition = 170   /* function-definition  */
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
#define YYFINAL  114
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2996

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  286
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  507

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
       0,   132,   132,   133,   137,   138,   139,   140,   141,   142,
     143,   144,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   162,   163,   164,   165,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   182,   183,   187,
     188,   189,   190,   191,   192,   196,   197,   198,   199,   200,
     201,   205,   206,   210,   211,   212,   213,   217,   218,   219,
     223,   224,   225,   229,   230,   231,   232,   233,   237,   238,
     239,   243,   244,   248,   249,   253,   254,   258,   259,   263,
     264,   268,   269,   273,   274,   275,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   293,   294,   295,
     296,   300,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     325,   326,   330,   331,   335,   336,   337,   338,   339,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   361,   362,   363,   367,   368,   372,
     373,   377,   381,   382,   383,   384,   388,   389,   393,   394,
     395,   399,   400,   401,   402,   403,   407,   408,   412,   413,
     417,   421,   422,   423,   427,   431,   432,   436,   437,   438,
     439,   440,   441,   442,   443,   447,   448,   449,   450,   451,
     452,   453,   454,   458,   459,   460,   464,   465,   469,   470,
     474,   475,   479,   480,   481,   482,   486,   487,   491,   492,
     496,   497,   498,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   515,   519,   520,   521,   525,   526,   527,
     528,   532,   536,   537,   541,   542,   546,   547,   548,   549,
     550,   551,   555,   556,   557,   561,   562,   563,   567,   568,
     572,   573,   577,   578,   582,   583,   584,   585,   586,   587,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   608,   609,   610,   611,   612,   613,
     627,   628,   632,   633,   634,   635,   636
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
  "program_unit", "declaration", "comment_sequence", "primary_expression",
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
  "declarator", "direct-declarator", "pointer",
  "pointer-vector-definition", "type-qualifier-list",
  "parameter-type-list", "parameter-list", "parameter-declaration",
  "identifier-list", "type-name", "abstract-declarator",
  "direct-abstract-declarator", "typedef-name", "initializer",
  "initializer-list", "designation", "designator-list", "designator",
  "statement", "labeled-statement", "compound-statement",
  "local_declaration_list", "instructions_list", "expression-statement",
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

#define YYPACT_NINF (-308)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-224)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1382,  -308,  -308,  -308,  -308,  -308,  -308,  -308,    16,  -308,
      80,    58,  -308,  -308,  -308,  -308,  -308,  -308,    32,  -308,
    -308,  -308,  -308,  -308,  -308,   125,   152,  -308,  -308,  -308,
    -308,  -308,  1438,  2821,  1538,   516,  -308,  -308,   203,  2867,
    2692,  -308,    38,  -308,  2909,  2909,  -308,  -308,  -308,  -308,
    2547,   365,   144,   109,    59,   749,  2227,   139,   189,   195,
    -308,   214,   223,  -308,  -308,  -308,   214,  -308,  2241,  -308,
    -308,  -308,  -308,   245,  -308,  2561,   208,   206,   301,   308,
    2575,  -308,  1773,  1160,  2614,  2614,  -308,  -308,  -308,  -308,
     277,   215,  2561,  -308,   283,    75,   289,   272,   239,   268,
     234,   282,   269,   288,  -308,  -308,     6,   350,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,   145,   214,
      19,  -308,  1012,    -5,    53,    52,   214,  2735,  -308,    22,
     214,  -308,   316,  2951,   214,   214,   184,    35,   321,    60,
    -308,   334,    59,  -308,    94,  -308,   381,  1690,   842,   378,
      20,  1538,    81,  -308,  -308,  -308,  1234,  -308,   382,  -308,
      21,  -308,   390,   394,  1538,  -308,  -308,  -308,   331,  -308,
    1538,  -308,   391,  1773,  -308,  1742,   135,  2951,   219,  2951,
     357,  -308,  -308,   656,  1773,  -308,  -308,  2547,  2255,   395,
     403,   404,   406,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  2628,  -308,  2561,  2561,  2561,  2561,
    2561,  2561,  2561,  2561,  2561,  2561,  2561,  2561,  2561,  2561,
    2561,  2561,  2561,  2561,  2547,  -308,  2628,   376,   379,  -308,
    -308,    44,   380,  -308,   214,  2307,  -308,  -308,  1234,  2321,
    2032,    -5,  -308,    31,   270,  2074,  2951,  -308,   614,  -308,
      86,  1538,  -308,  1538,    17,   111,  -308,    43,  2561,  2335,
     414,    23,   935,  2387,  -308,  1538,  -308,  -308,  -308,  -308,
    -308,  1538,  -308,  -308,   407,  -308,  -308,  2401,  1879,   238,
    -308,   291,  -308,  2415,  1612,  -308,  -308,  -308,  1477,  -308,
    -308,   409,    71,   363,  -308,   153,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,   283,   283,    75,    75,   289,
     289,   289,   289,   272,   272,   239,   268,   234,   282,   269,
     -33,  -308,  2547,   383,  -308,  -308,  -308,  -308,   422,  2175,
    -308,  -308,  -308,  -308,   405,  -308,   412,     9,  -308,   194,
    2778,   411,   369,  -308,   160,  2074,  -308,   321,   138,  1837,
    -308,  -308,  2561,    24,  -308,   389,  -308,   458,  -308,   384,
    -308,  -308,    87,  -308,  -308,  -308,  1538,   163,   416,   417,
    1308,   454,    39,  2467,    49,  -308,  -308,   419,  -308,   423,
    -308,   424,   429,   291,  2481,  2116,  2175,  -308,  -308,  -308,
     419,  -308,  -308,  2628,  2561,   173,   462,  2561,   460,  -308,
     166,  2307,    26,  -308,  -308,  -308,  1934,  1234,   148,  -308,
       8,  -308,   572,  -308,   467,  1989,  -308,   321,  -308,  -308,
    -308,    86,  2561,  1538,   472,  -308,  -308,  1538,  1538,  1538,
    1538,   432,   433,  2547,  1538,   179,  2495,  -308,  -308,  -308,
     436,  -308,   437,  -308,   438,   190,  -308,  -308,  -308,   439,
     441,  -308,  -308,  2143,  -308,  -308,  -308,   143,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,   442,  -308,  -308,  -308,
    -308,  1538,  1538,   185,  -308,  1538,  1538,   187,  -308,  -308,
    -308,  -308,  2159,  1086,  -308,  -308,  -308,  -308,  2307,  -308,
    -308,  -308,  1538,  -308,  -308,  1538,  -308,   192,   435,  -308,
    -308,  -308,  -308,   482,  -308,   408,  -308
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   132,   133,   135,   131,   137,   129,   173,     0,   134,
       0,   223,   130,   136,   138,   139,   140,   171,     0,   125,
     128,   126,   147,   148,   124,     0,     0,   174,   127,   172,
       8,     7,     0,    17,     0,     0,     2,     9,     0,   103,
     105,   141,     0,   142,   107,   109,   143,    10,    11,     6,
       0,     0,     0,   165,     0,     0,     0,     0,     0,     0,
      18,     0,   115,    12,    16,    15,    13,    14,     0,    24,
      25,    47,    48,    23,   253,     0,     0,     0,     0,     0,
       0,    46,     0,     0,     0,     0,    45,    49,    50,    27,
      39,    51,     0,    53,    57,    60,    63,    68,    71,    73,
      75,    77,    79,    81,    84,    99,     0,     0,   236,   237,
     238,   239,   240,   241,     1,     3,   177,     5,   186,     0,
       0,   120,   122,   176,     0,   223,   102,   105,   115,   111,
     104,   119,   146,     0,   106,   108,    23,     0,     0,     0,
     113,     0,     0,   170,     0,   166,   168,    23,     0,     0,
       0,     0,     0,    19,    22,    21,     0,    20,    24,   279,
       0,    98,     0,     0,     0,    23,    51,   101,     0,   276,
       0,   275,     0,     0,    43,    23,     0,   153,   209,   155,
       0,   245,   248,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,     0,   189,   196,
     188,   185,     0,     4,     0,     0,   280,   283,     0,     0,
       0,   175,   118,   111,     0,     0,     0,   223,     0,   149,
       0,     0,   256,     0,     0,     0,   162,     0,     0,     0,
       0,     0,     0,     0,   259,     0,   278,   277,    97,    83,
     242,     0,   244,   274,     0,    26,   152,     0,     0,   210,
     208,   212,   154,     0,    23,   246,   249,   250,     0,    10,
      11,     0,     0,    23,    30,     0,    37,    31,    32,    33,
      34,    85,    55,    56,    54,    58,    59,    61,    62,    64,
      65,    66,    67,    69,    70,    72,    74,    76,    78,    80,
       0,   100,     0,     0,   197,   187,   178,   121,   122,     0,
     224,   123,   281,   282,    46,   180,     0,   223,   184,   205,
     105,     0,   198,   200,     0,     0,   110,     0,     0,     0,
     145,   150,     0,     0,   156,   158,   260,   254,   237,     0,
     112,   161,     0,   164,   167,   169,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   258,   243,    44,   217,     0,
     222,     0,     0,   211,     0,     0,     0,    52,   247,   251,
       0,    28,    29,     0,     0,     0,     0,     0,     0,   228,
       0,     0,     0,   232,   181,   179,     0,   203,   210,   204,
     223,   182,     0,   183,     0,   105,   284,     0,   144,   160,
     151,     0,     0,     0,     0,   163,   268,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   215,   220,   213,
      46,   216,     0,   221,     0,     0,    38,    82,   261,     0,
       0,   235,   225,     0,   227,   231,   233,   223,   199,   201,
     207,   117,   285,   157,   159,   257,     0,   267,   273,   266,
     272,     0,     0,     0,   265,     0,     0,     0,   218,   214,
     219,    35,     0,     0,   190,   234,   226,   230,     0,   114,
     271,   270,     0,   264,   263,     0,    36,     0,     0,   229,
     269,   262,   191,   195,   192,   194,   193
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -308,  -308,     3,  -308,  -308,  -308,  -308,   236,  -308,   -73,
     167,   176,   150,   178,   284,   286,   281,   285,   290,  -308,
     -70,  -157,  -308,   -43,  -252,   -23,  -308,   274,  -308,    29,
    -308,  -308,   258,  -218,   -58,  -308,    88,  -308,   368,  -237,
    -308,   287,  -308,   -27,  -120,    11,    12,  -308,  -222,  -308,
      99,  -308,    97,  -163,  -256,  -308,  -221,   126,  -307,  -308,
     112,   -74,  -308,    56,  -308,  -308,  -308,     1,     2,  -308,
    -308,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    35,   236,    37,    89,    90,   295,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   204,   106,   168,    38,   120,   121,    39,    40,
      41,    42,   248,   249,   250,   353,   354,    43,   144,   145,
     146,    44,    45,   156,   123,   124,   498,   231,   381,   342,
     343,   344,   180,   382,   281,    46,   399,   400,   401,   402,
     403,   107,   108,   109,   183,   288,   110,   111,   112,   113,
     238,   128
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,    47,    48,    36,   241,   167,   365,   137,   139,    61,
      66,   122,   150,   152,   331,   280,   126,   130,   341,   205,
     364,   134,   135,   383,   178,   160,   244,    52,   225,  -111,
     351,   296,    62,    67,   359,    49,    47,    48,   115,   176,
     244,   233,   263,   267,   455,   369,   420,   301,   394,   244,
     239,   131,   240,    53,     7,    49,    47,    48,   149,   132,
     226,   433,  -111,  -111,   143,   245,  -111,  -206,   127,   321,
      52,   436,    17,    50,   116,   360,    52,   264,   330,   245,
     143,   397,   336,    49,    47,    48,   182,   398,   345,    29,
     270,    54,   232,   251,   209,   210,   272,   133,   118,   226,
     419,  -111,  -206,   363,   130,   261,   118,   116,   143,   287,
     119,   177,   234,   226,   226,   178,   226,   421,   253,   276,
     379,   282,    49,    47,    48,   364,   178,   391,   226,   230,
     176,   351,   226,   302,   303,   304,   242,    51,   131,   265,
     118,   176,   226,   119,   292,   450,   488,   425,    49,    47,
      48,   260,   383,   226,   256,     7,    49,    47,    48,   116,
     140,    52,   177,   444,   226,   141,   228,   352,   142,   116,
     464,   361,   330,    17,   226,   488,   409,   356,   237,   357,
     454,   320,    55,    49,   289,   290,   286,   257,   167,   279,
      29,   375,   118,   275,   252,   119,   417,   376,  -177,   118,
    -177,  -177,   177,   277,   362,   406,   177,   328,   177,    56,
     387,   392,   237,   177,   389,   116,   367,   339,   413,   372,
     374,   427,   348,   355,   116,   117,   452,   442,   226,   330,
     169,   448,   487,   193,   153,   116,   446,   475,    49,    47,
      48,   332,   325,   492,   330,   495,   393,   161,   118,   277,
     481,   406,   502,   414,   162,   339,   226,   118,   163,   453,
     119,   487,    49,    47,    48,   371,   226,   499,   118,   340,
     274,   119,   226,   118,   277,   177,   278,   177,   226,   395,
     226,   291,   167,   482,   154,   503,   346,   170,   241,   279,
     155,   141,   426,   277,   333,   278,   330,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   340,   161,   358,
     220,   166,   407,   217,   218,   162,   174,   130,   157,   163,
     185,   186,   348,   171,   447,   330,   164,   167,   166,   172,
     435,   330,   187,   219,   188,   206,   207,   208,   189,   190,
     191,   192,   213,   214,   215,   216,   384,   222,   385,   465,
     408,   131,   167,   467,   468,   469,   470,   211,   212,   221,
     474,   227,   339,   309,   310,   311,   312,   223,   224,   179,
      49,    47,    48,   431,   415,   246,   305,   306,   177,   232,
      83,    69,    70,   339,    71,    72,   136,   307,   308,   339,
     473,   254,   130,   477,   355,   313,   314,   490,   491,   258,
     262,   493,   494,   416,   266,   229,   268,    49,    47,    48,
     269,    80,   271,   273,   340,   283,   297,   408,   500,    81,
     179,   501,    82,   138,   298,   299,   131,   300,    84,    85,
      86,    87,    88,   322,   323,   340,   368,   163,   326,   396,
     235,   340,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     179,   404,   412,   237,   179,   377,   179,   390,   405,   411,
     422,   179,   423,   462,   428,   429,   432,   424,   386,   437,
     449,   451,   438,    49,    47,    48,   182,   439,   460,   466,
     471,   472,   478,   479,   166,   504,   480,   485,   483,   505,
     489,   503,   317,   315,   349,   484,   316,   318,   327,   463,
     255,   459,   445,   319,   456,   506,   114,     0,   324,   166,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
       0,     0,     0,   179,     0,   179,     0,    11,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,    27,    28,     0,
       0,    29,     0,     0,    30,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     0,     9,     0,     0,     0,   166,     0,
       0,     0,     0,    11,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    32,     0,
      33,     0,    34,    27,    28,     0,     0,    29,     1,     2,
       3,     4,     5,     6,     7,     0,     9,     0,     0,     0,
     166,     0,     0,   166,     0,   247,   179,    12,    13,    14,
      15,    16,    17,    18,     0,     0,     0,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   166,    29,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
     458,    68,    69,    70,   350,    71,    72,   284,    74,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    75,    76,    77,    27,    28,    78,
      79,    29,    80,     0,    30,    31,     0,     0,     0,     0,
      81,     0,     0,    82,     0,    83,   285,     0,     0,    84,
      85,    86,    87,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
      33,     0,    34,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,     0,     0,    69,    70,     0,    71,    72,
     147,   148,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
      27,    28,     0,     0,    29,    80,     0,    30,    31,     0,
       0,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,    33,     0,    34,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,    69,    70,
       0,    71,    72,   147,   259,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,    27,    28,     0,     0,    29,    80,     0,
      30,    31,     0,     0,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,    33,     0,    34,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,     0,
       0,    69,    70,     0,    71,    72,   147,   370,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,    27,    28,     0,     0,
      29,    80,     0,    30,    31,     0,     0,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,    32,     0,    33,
     235,    34,     0,    11,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,    27,    28,     0,     0,    29,     0,     0,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
       0,     0,     0,   497,    32,     0,    33,    11,    34,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,    27,    28,     0,
       0,    29,     0,     0,    30,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,     0,     0,     0,     0,    32,     0,
      33,    11,    34,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,    27,    28,     0,     0,    29,     0,     0,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     181,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
       0,     0,    32,     0,    33,    11,    34,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,    27,    28,     0,     0,    29,
       0,     0,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,     0,     0,     0,     0,    32,     0,    33,    11,
      34,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,    27,
      28,     0,     0,    29,     0,     0,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,   430,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
      32,     0,    33,    11,    34,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,    27,    28,     0,     0,    29,     0,     0,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     0,
       9,     0,     0,     0,     0,    57,     0,     0,     0,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    32,     0,    33,     0,    34,    27,
      28,     0,     0,    29,     0,     0,    58,    59,     8,     0,
      10,     0,    68,    69,    70,     0,    71,    72,    73,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,    75,    76,    77,     0,     0,
      78,    79,     0,    80,     0,     0,     0,     0,     0,     0,
       0,    81,     0,    60,    82,     0,    83,   388,     0,     0,
      84,    85,    86,    87,    88,     0,     0,     0,     0,     8,
       0,    10,     0,    68,    69,    70,     0,    71,    72,    73,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    25,    26,    75,    76,    77,     0,
       0,    78,    79,     0,    80,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,    83,     0,     0,
       0,    84,    85,    86,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,     0,  -223,     0,     0,     0,     0,     0,
      52,     0,     0,  -223,    34,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,     0,     0,
       0,     0,     0,  -223,  -223,     0,     0,  -223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161,     0,     0,     0,     0,
       0,     0,   162,     0,     0,     0,   163,     0,     0,     0,
       0,     0,     0,   164,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,     0,  -223,     0,     0,     0,     0,     0,    52,     0,
       0,  -223,     0,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,     0,     0,     0,     0,
       0,  -223,  -223,     0,     0,  -223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,   161,  -223,     0,     0,     0,     0,     0,
     162,     0,     0,  -223,   163,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,     0,     0,     0,  -223,  -223,     1,     2,     3,
       4,     5,     6,     7,     0,     9,     0,  -223,     0,    69,
      70,     0,    71,    72,   175,     0,    12,    13,    14,    15,
      16,    17,    18,     0,     0,   161,    22,    23,     0,     0,
       0,     0,   162,     0,     0,     0,   163,     0,    29,    80,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,     1,     2,     3,     4,     5,     6,     7,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,   247,     0,
      12,    13,    14,    15,    16,    17,    18,     0,     0,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     1,     2,     3,     4,     5,     6,     7,
       0,     9,     0,     0,     0,     0,     0,   418,     0,     0,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,     0,     0,     0,     0,
      27,    28,     0,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   277,     0,   278,   380,     1,     2,
       3,     4,     5,     6,     7,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,   457,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,     0,     0,     0,    27,    28,     0,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,   118,   277,
       0,   406,   380,     1,     2,     3,     4,     5,     6,     7,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
     129,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,     0,     0,     0,     0,
      27,    28,     0,     0,    29,     0,     1,     2,     3,     4,
       5,     6,     7,   118,     9,     0,     0,   461,     0,     0,
       0,     0,     0,   337,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,     0,
       0,     0,     0,    27,    28,     0,     0,    29,     1,     2,
       3,     4,     5,     6,     7,     0,     9,     0,     0,     0,
     338,     0,     0,     0,     0,    11,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,     0,     0,     0,    27,    28,     0,     0,    29,
       1,     2,     3,     4,     5,     6,     7,     0,     9,     0,
       0,     0,   347,     0,     0,     0,     0,    11,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,     0,     0,     0,     0,    27,    28,    69,
      70,    29,    71,    72,   293,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   443,    69,    70,     0,    71,    72,
     293,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,    69,    70,     0,    71,    72,   293,    81,   397,     0,
      82,     0,   329,   486,   398,    80,    84,    85,    86,    87,
      88,     0,     0,    81,   397,     0,    82,     0,   329,   496,
     398,    80,    84,    85,    86,    87,    88,     0,     0,    81,
     397,     0,    82,     0,   329,     0,   398,     0,    84,    85,
      86,    87,    88,    69,    70,     0,    71,    72,   136,     0,
       0,     0,     0,     0,     0,     0,     0,   158,    70,     0,
      71,    72,   136,   159,     0,     0,     0,     0,     0,     0,
       0,    69,    70,    80,    71,    72,   293,     0,     0,     0,
       0,    81,     0,     0,    82,   151,     0,    80,     0,     0,
      84,    85,    86,    87,    88,    81,     0,     0,    82,     0,
       0,    80,     0,     0,    84,    85,    86,    87,    88,    81,
       0,     0,    82,   294,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    69,    70,     0,    71,    72,   293,     0,
       0,     0,     0,     0,     0,     0,     0,    69,    70,     0,
      71,    72,   293,     0,     0,     0,     0,     0,     0,     0,
       0,    69,    70,    80,    71,    72,   136,     0,     0,     0,
       0,    81,     0,     0,    82,     0,   329,    80,     0,     0,
      84,    85,    86,    87,    88,   334,     0,   335,    82,     0,
       0,    80,     0,     0,    84,    85,    86,    87,    88,    81,
       0,     0,    82,   366,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    69,    70,     0,    71,    72,   136,   373,
       0,     0,     0,     0,     0,     0,     0,    69,    70,     0,
      71,    72,   293,     0,     0,     0,     0,     0,     0,     0,
       0,    69,    70,    80,    71,    72,   165,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,    80,     0,     0,
      84,    85,    86,    87,    88,    81,     0,   378,    82,     0,
       0,    80,     0,     0,    84,    85,    86,    87,    88,    81,
       0,     0,    82,     0,   386,     0,     0,     0,    84,    85,
      86,    87,    88,    69,    70,     0,    71,    72,   136,     0,
       0,     0,     0,     0,     0,     0,     0,    69,    70,     0,
      71,    72,   293,     0,     0,     0,     0,     0,     0,     0,
       0,    69,    70,    80,    71,    72,   136,     0,     0,     0,
       0,    81,     0,     0,    82,   434,     0,    80,     0,     0,
      84,    85,    86,    87,    88,   440,     0,   441,    82,     0,
       0,    80,     0,     0,    84,    85,    86,    87,    88,    81,
       0,     0,    82,   476,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    69,    70,     0,    71,    72,   136,     0,
       0,     0,     0,     0,     0,     0,     0,    69,    70,     0,
      71,    72,   165,     0,     0,     0,     0,     0,     0,     0,
       0,    69,    70,    80,    71,    72,   165,     0,     0,     0,
       0,    81,     0,     0,    82,     0,     0,    80,     0,     0,
      84,    85,    86,    87,    88,    81,     0,     0,    82,     0,
       0,    80,     0,     0,    84,    85,    86,    87,    88,    81,
      69,    70,   173,    71,    72,   165,     0,     0,    84,    85,
      86,    87,    88,     0,    69,    70,     0,    71,    72,   293,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,   184,     0,     0,    80,     0,     0,    84,    85,    86,
      87,    88,    81,     0,     0,    82,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,     1,     2,     3,     4,
       5,     6,     7,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,   129,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,     0,
       0,     0,     0,    27,    28,     0,     0,    29,     0,     1,
       2,     3,     4,     5,     6,     7,   118,     9,     0,     0,
       0,     0,     0,     0,     0,     0,   243,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,     0,     0,     0,     0,    27,    28,     0,     0,
      29,     0,     1,     2,     3,     4,     5,     6,     7,   118,
       9,     0,     0,     0,     0,     0,     0,     0,     0,   410,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,     0,     0,     0,     0,    27,
      28,     0,     0,    29,     0,     1,     2,     3,     4,     5,
       6,     7,   118,     9,     0,     0,     0,     0,    63,     0,
       0,     0,    11,     0,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,     0,     0,
       0,     0,    27,    28,     0,     0,    29,     0,     0,    64,
      65,     1,     2,     3,     4,     5,     6,     7,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,   125,     0,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,     0,     0,     0,    27,    28,
       0,     0,    29,     1,     2,     3,     4,     5,     6,     7,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,     0,     0,     0,     0,
      27,    28,     0,     0,    29,     1,     2,     3,     4,     5,
       6,     7,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,   247,     0,    12,    13,    14,    15,    16,    17,
      18,     0,     0,     0,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29
};

static const yytype_int16 yycheck[] =
{
       0,     0,     0,     0,   124,    75,   258,    50,    51,    32,
      33,    38,    55,    56,   235,   178,    39,    40,   240,    92,
     257,    44,    45,   279,    82,    68,    18,    18,    22,    21,
     248,   188,    32,    33,    17,    35,    35,    35,    35,    82,
      18,    22,    22,    22,    18,    22,    22,   204,    81,    18,
      55,    40,    57,    21,    10,    55,    55,    55,    55,    21,
      93,    22,    54,    55,    21,    57,    58,    58,    39,   226,
      18,    22,    28,    57,    21,    58,    18,   151,   235,    57,
      21,    55,   239,    83,    83,    83,    83,    61,    57,    45,
     164,    59,   119,    58,    19,    20,   170,    59,    54,    93,
     352,    93,    93,    60,   127,   148,    54,    21,    21,   183,
      57,    82,    93,    93,    93,   173,    93,    93,    58,   177,
     277,   179,   122,   122,   122,   362,   184,    56,    93,   118,
     173,   349,    93,   206,   207,   208,   125,    57,   127,    58,
      54,   184,    93,    57,   187,   397,   453,    60,   148,   148,
     148,   148,   408,    93,    60,    10,   156,   156,   156,    21,
      16,    18,   133,   385,    93,    21,    21,    81,    59,    21,
     422,    60,   329,    28,    93,   482,   339,   251,   122,   253,
     401,   224,    57,   183,   183,   183,   183,    93,   258,   178,
      45,   265,    54,    58,   138,    57,    58,   271,    55,    54,
      57,    58,   173,    55,    93,    57,   177,   234,   179,    57,
     283,    58,   156,   184,   288,    21,   259,   240,    58,   262,
     263,    58,   245,   250,    21,    22,    60,   384,    93,   386,
      22,    58,   453,    18,    95,    21,   393,    58,   238,   238,
     238,   238,   231,    58,   401,    58,    93,    63,    54,    55,
      60,    57,    60,    93,    70,   278,    93,    54,    74,    93,
      57,   482,   262,   262,   262,   262,    93,   488,    54,   240,
     173,    57,    93,    54,    55,   246,    57,   248,    93,   322,
      93,   184,   352,    93,    95,    93,    16,    81,   408,   278,
      95,    21,   366,    55,   238,    57,   453,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,   278,    63,   253,
      76,    75,   339,    74,    75,    70,    80,   340,    95,    74,
      84,    85,   345,    22,   394,   482,    81,   397,    92,    21,
     373,   488,    55,    65,    57,    52,    53,    54,    61,    62,
      63,    64,    70,    71,    72,    73,    55,    78,    57,   423,
     339,   340,   422,   427,   428,   429,   430,    68,    69,    77,
     434,    11,   385,   213,   214,   215,   216,    79,    80,    82,
     370,   370,   370,   370,   345,    59,   209,   210,   349,   406,
      59,    16,    17,   406,    19,    20,    21,   211,   212,   412,
     433,    57,   415,   436,   421,   217,   218,   471,   472,    18,
      22,   475,   476,   347,    22,   118,    16,   407,   407,   407,
      16,    46,    81,    22,   385,    58,    21,   406,   492,    54,
     133,   495,    57,    58,    21,    21,   415,    21,    63,    64,
      65,    66,    67,    57,    55,   406,    22,    74,    58,    56,
      18,   412,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     173,    56,    93,   407,   177,    58,   179,    58,    56,    58,
      81,   184,    14,   417,    58,    58,    22,    93,    59,    56,
      18,    21,    58,   483,   483,   483,   483,    58,    21,    17,
      58,    58,    56,    56,   258,    60,    58,    56,    59,    17,
      58,    93,   221,   219,   246,   449,   220,   222,   234,   421,
     142,   412,   386,   223,   402,   503,     0,    -1,   231,   283,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,   246,    -1,   248,    -1,    21,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    -1,
      -1,    45,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,   352,    -1,
      -1,    -1,    -1,    21,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    92,    -1,
      94,    -1,    96,    41,    42,    -1,    -1,    45,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,
     394,    -1,    -1,   397,    -1,    21,   349,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   422,    45,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      98,    15,    16,    17,    60,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    57,    -1,    59,    60,    -1,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      94,    -1,    96,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,    42,    -1,    -1,    45,    46,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    94,    -1,    96,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    42,    -1,    -1,    45,    46,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    94,    -1,    96,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,
      45,    46,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    92,    -1,    94,
      18,    96,    -1,    21,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    42,    -1,    -1,    45,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    17,    92,    -1,    94,    21,    96,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    -1,
      -1,    45,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    92,    -1,
      94,    21,    96,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    42,    -1,    -1,    45,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    92,    -1,    94,    21,    96,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,    45,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    92,    -1,    94,    21,
      96,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    -1,    45,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      92,    -1,    94,    21,    96,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    42,    -1,    -1,    45,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    21,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    92,    -1,    94,    -1,    96,    41,
      42,    -1,    -1,    45,    -1,    -1,    48,    49,    11,    -1,
      13,    -1,    15,    16,    17,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    -1,    -1,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    95,    57,    -1,    59,    60,    -1,    -1,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    11,
      -1,    13,    -1,    15,    16,    17,    -1,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    36,    37,    38,    39,    40,    -1,
      -1,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    57,    -1,    59,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    21,    96,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    81,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    10,    63,    12,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    21,    74,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    34,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    45,    -1,    16,
      17,    -1,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    63,    33,    34,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    74,    -1,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    -1,    57,    58,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    57,    58,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,    -1,    45,    -1,     4,     5,     6,     7,
       8,     9,    10,    54,    12,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    45,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    21,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    45,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    21,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    41,    42,    16,
      17,    45,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    16,    17,    -1,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    16,    17,    -1,    19,    20,    21,    54,    55,    -1,
      57,    -1,    59,    60,    61,    46,    63,    64,    65,    66,
      67,    -1,    -1,    54,    55,    -1,    57,    -1,    59,    60,
      61,    46,    63,    64,    65,    66,    67,    -1,    -1,    54,
      55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,    64,
      65,    66,    67,    16,    17,    -1,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    46,    19,    20,    21,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    57,    58,    -1,    46,    -1,    -1,
      63,    64,    65,    66,    67,    54,    -1,    -1,    57,    -1,
      -1,    46,    -1,    -1,    63,    64,    65,    66,    67,    54,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    16,    17,    -1,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    46,    19,    20,    21,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    57,    -1,    59,    46,    -1,    -1,
      63,    64,    65,    66,    67,    54,    -1,    56,    57,    -1,
      -1,    46,    -1,    -1,    63,    64,    65,    66,    67,    54,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    16,    17,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    46,    19,    20,    21,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    57,    -1,    -1,    46,    -1,    -1,
      63,    64,    65,    66,    67,    54,    -1,    56,    57,    -1,
      -1,    46,    -1,    -1,    63,    64,    65,    66,    67,    54,
      -1,    -1,    57,    -1,    59,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    16,    17,    -1,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    46,    19,    20,    21,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    57,    58,    -1,    46,    -1,    -1,
      63,    64,    65,    66,    67,    54,    -1,    56,    57,    -1,
      -1,    46,    -1,    -1,    63,    64,    65,    66,    67,    54,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    16,    17,    -1,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    46,    19,    20,    21,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    57,    -1,    -1,    46,    -1,    -1,
      63,    64,    65,    66,    67,    54,    -1,    -1,    57,    -1,
      -1,    46,    -1,    -1,    63,    64,    65,    66,    67,    54,
      16,    17,    57,    19,    20,    21,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    16,    17,    -1,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    57,    -1,    -1,    46,    -1,    -1,    63,    64,    65,
      66,    67,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    45,    -1,     4,
       5,     6,     7,     8,     9,    10,    54,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      45,    -1,     4,     5,     6,     7,     8,     9,    10,    54,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    41,
      42,    -1,    -1,    45,    -1,     4,     5,     6,     7,     8,
       9,    10,    54,    12,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    45,    -1,    -1,    48,
      49,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
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
      29,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    21,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    41,    42,    45,
      48,    49,    92,    94,    96,   100,   101,   102,   124,   127,
     128,   129,   130,   136,   140,   141,   154,   166,   167,   170,
      57,    57,    18,    21,    59,    57,    57,    17,    48,    49,
      95,   124,   170,    17,    48,    49,   124,   170,    15,    16,
      17,    19,    20,    21,    22,    38,    39,    40,    43,    44,
      46,    54,    57,    59,    63,    64,    65,    66,    67,   103,
     104,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   122,   160,   161,   162,
     165,   166,   167,   168,     0,   101,    21,    22,    54,    57,
     125,   126,   142,   143,   144,    21,   124,   128,   170,    21,
     124,   144,    21,    59,   124,   124,    21,   122,    58,   122,
      16,    21,    59,    21,   137,   138,   139,    21,    22,   101,
     122,    58,   122,    95,    95,    95,   142,    95,    16,    22,
     122,    63,    70,    74,    81,    21,   106,   119,   123,    22,
      81,    22,    21,    57,   106,    21,   122,   128,   133,   140,
     151,    60,   101,   163,    57,   106,   106,    55,    57,    61,
      62,    63,    64,    18,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,   121,   108,    52,    53,    54,    19,
      20,    68,    69,    70,    71,    72,    73,    74,    75,    65,
      76,    77,    78,    79,    80,    22,    93,    11,    21,   140,
     144,   146,   142,    22,    93,    18,   101,   162,   169,    55,
      57,   143,   144,    21,    18,    57,    59,    21,   131,   132,
     133,    58,   162,    58,    57,   137,    60,    93,    18,    22,
     101,   122,    22,    22,   160,    58,    22,    22,    16,    16,
     160,    81,   160,    22,   151,    58,   133,    55,    57,   144,
     152,   153,   133,    58,    21,    60,   101,   160,   164,   166,
     167,   151,   122,    21,    58,   105,   120,    21,    21,    21,
      21,   120,   108,   108,   108,   109,   109,   110,   110,   111,
     111,   111,   111,   112,   112,   113,   114,   115,   116,   117,
     122,   120,    57,    55,   140,   144,    58,   126,   142,    59,
     120,   155,   101,   162,    54,    56,   120,    21,    58,   124,
     128,   147,   148,   149,   150,    57,    16,    58,   124,   131,
      60,   132,    81,   134,   135,   142,   160,   160,   162,    17,
      58,    60,    93,    60,   138,   123,    58,   122,    22,    22,
      22,   101,   122,    22,   122,   160,   160,    58,    56,   120,
      58,   147,   152,   153,    55,    57,    59,   108,    60,   160,
      58,    56,    58,    93,    81,   122,    56,    55,    61,   155,
     156,   157,   158,   159,    56,    56,    57,   142,   144,   152,
      21,    58,    93,    58,    93,   128,   162,    58,    60,   123,
      22,    93,    81,    14,    93,    60,   160,    58,    58,    58,
      58,   101,    22,    22,    58,   122,    22,    56,    58,    58,
      54,    56,   120,    58,   147,   156,   120,   119,    58,    18,
     123,    21,    60,    93,   155,    18,   159,    21,    98,   149,
      21,    58,   162,   135,   123,   160,    17,   160,   160,   160,
     160,    58,    58,   122,   160,    58,    58,   122,    56,    56,
      58,    60,    93,    59,   162,    56,    60,   155,   157,    58,
     160,   160,    58,   160,   160,    58,    60,    17,   145,   155,
     160,   160,    60,    93,    60,    17,   145
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   105,   105,   106,
     106,   106,   106,   106,   106,   107,   107,   107,   107,   107,
     107,   108,   108,   109,   109,   109,   109,   110,   110,   110,
     111,   111,   111,   112,   112,   112,   112,   112,   113,   113,
     113,   114,   114,   115,   115,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120,   120,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   122,   122,   122,
     122,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     125,   125,   126,   126,   127,   127,   127,   127,   127,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   129,   129,   129,   130,   130,   131,
     131,   132,   133,   133,   133,   133,   134,   134,   135,   135,
     135,   136,   136,   136,   136,   136,   137,   137,   138,   138,
     139,   140,   140,   140,   141,   142,   142,   143,   143,   143,
     143,   143,   143,   143,   143,   144,   144,   144,   144,   144,
     144,   144,   144,   145,   145,   145,   146,   146,   147,   147,
     148,   148,   149,   149,   149,   149,   150,   150,   151,   151,
     152,   152,   152,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   154,   155,   155,   155,   156,   156,   156,
     156,   157,   158,   158,   159,   159,   160,   160,   160,   160,
     160,   160,   161,   161,   161,   162,   162,   162,   163,   163,
     164,   164,   165,   165,   166,   166,   166,   166,   166,   166,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   168,   168,   168,   168,   168,   168,
     169,   169,   170,   170,   170,   170,   170
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     1,     2,     3,
       3,     3,     3,     1,     1,     1,     3,     1,     4,     4,
       3,     3,     3,     3,     3,     6,     7,     1,     3,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       3,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       4,     2,     5,     3,     8,     1,     3,     6,     3,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     4,     2,     1,     1,     1,
       2,     3,     2,     1,     2,     1,     1,     3,     1,     3,
       2,     5,     4,     6,     5,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     2,     1,     1,     3,     4,
       3,     4,     4,     4,     3,     2,     1,     3,     2,     2,
       6,     8,     8,     3,     1,     0,     1,     2,     1,     3,
       1,     3,     2,     2,     2,     1,     1,     3,     2,     1,
       1,     2,     1,     3,     4,     3,     3,     2,     4,     4,
       3,     3,     2,     1,     1,     3,     4,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     3,     4,     1,     2,
       1,     2,     2,     1,     5,     5,     4,     7,     5,     4,
       5,     6,     9,     8,     8,     7,     7,     7,     6,     9,
       8,     8,     7,     7,     3,     2,     2,     3,     3,     2,
       1,     2,     4,     3,     5,     6,     6
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
  case 2: /* program_unit: declaration  */
#line 132 "c.y"
                        { (yyval.node) = createProgramUnitNode((yyvsp[0].node)); astRoot = (yyval.node);}
#line 2129 "c.tab.c"
    break;

  case 3: /* program_unit: program_unit declaration  */
#line 133 "c.y"
                                        { (yyval.node) = (yyvsp[-1].node); addLinkToList((yyval.node), (yyvsp[0].node));}
#line 2135 "c.tab.c"
    break;

  case 5: /* declaration: declaration-specifier END_OF_INSTRUCTION  */
#line 138 "c.y"
                                                   {(yyval.node) = createDeclarationNode((yyvsp[-1].node));}
#line 2141 "c.tab.c"
    break;

  case 6: /* declaration: function-definition  */
#line 139 "c.y"
                              { (yyval.node) = createDeclarationNode((yyvsp[0].node));}
#line 2147 "c.tab.c"
    break;

  case 10: /* declaration: selection-statement  */
#line 143 "c.y"
                              { (yyval.node) = createDeclarationNode((yyvsp[0].node));}
#line 2153 "c.tab.c"
    break;

  case 11: /* declaration: iteration-statement  */
#line 144 "c.y"
                              { (yyval.node) = createDeclarationNode((yyvsp[0].node));}
#line 2159 "c.tab.c"
    break;

  case 97: /* expression: IDENTIFIER LESS_THAN CONSTANT  */
#line 293 "c.y"
                                        {(yyval.node) = createExpressionStatement((yyvsp[-2].strings), (yyvsp[0].intVal));}
#line 2165 "c.tab.c"
    break;

  case 98: /* expression: IDENTIFIER INCREMENT  */
#line 294 "c.y"
                               {(yyval.node) = createExpressionStatement((yyvsp[-1].strings), NULL);}
#line 2171 "c.tab.c"
    break;

  case 99: /* expression: assignment-expression  */
#line 295 "c.y"
                                {(yyval.node) = createExpressionStatement(NULL, NULL);}
#line 2177 "c.tab.c"
    break;

  case 110: /* declaration-specifier: type-specifier IDENTIFIER ASSIGN CONSTANT  */
#line 312 "c.y"
                                                    { (yyval.node) = createVarDeclaration((yyvsp[-3].node), (yyvsp[-2].strings), (yyvsp[0].intVal));}
#line 2183 "c.tab.c"
    break;

  case 111: /* declaration-specifier: type-specifier IDENTIFIER  */
#line 313 "c.y"
                                    { (yyval.node) = createVarDeclaration((yyvsp[-1].node), (yyvsp[0].strings), 0);}
#line 2189 "c.tab.c"
    break;

  case 129: /* type-specifier: VOID  */
#line 343 "c.y"
               {(yyval.node) = createTypeSpecifier("VOID");}
#line 2195 "c.tab.c"
    break;

  case 130: /* type-specifier: CHAR  */
#line 344 "c.y"
               {(yyval.node) = createTypeSpecifier("CHAR");}
#line 2201 "c.tab.c"
    break;

  case 131: /* type-specifier: SHORT  */
#line 345 "c.y"
                {(yyval.node) = createTypeSpecifier("SHORT");}
#line 2207 "c.tab.c"
    break;

  case 132: /* type-specifier: INT  */
#line 346 "c.y"
              {(yyval.node) = createTypeSpecifier("INT");}
#line 2213 "c.tab.c"
    break;

  case 133: /* type-specifier: LONG  */
#line 347 "c.y"
               {(yyval.node) = createTypeSpecifier("LONG");}
#line 2219 "c.tab.c"
    break;

  case 134: /* type-specifier: FLOAT  */
#line 348 "c.y"
                {(yyval.node) = createTypeSpecifier("FLOAT");}
#line 2225 "c.tab.c"
    break;

  case 135: /* type-specifier: DOUBLE  */
#line 349 "c.y"
                 {(yyval.node) = createTypeSpecifier("DOUBLE");}
#line 2231 "c.tab.c"
    break;

  case 136: /* type-specifier: SIGNED  */
#line 350 "c.y"
                 {(yyval.node) = createTypeSpecifier("SIGNED");}
#line 2237 "c.tab.c"
    break;

  case 137: /* type-specifier: UNSIGNED  */
#line 351 "c.y"
                   {(yyval.node) = createTypeSpecifier("UNSIGNED");}
#line 2243 "c.tab.c"
    break;

  case 138: /* type-specifier: _BOOL  */
#line 352 "c.y"
                {(yyval.node) = createTypeSpecifier("_BOOL");}
#line 2249 "c.tab.c"
    break;

  case 139: /* type-specifier: _COMPLEX  */
#line 353 "c.y"
                   {(yyval.node) = createTypeSpecifier("_COMPLEX");}
#line 2255 "c.tab.c"
    break;

  case 140: /* type-specifier: _IMAGINARY  */
#line 354 "c.y"
                     {(yyval.node) = createTypeSpecifier("_IMAGINARY");}
#line 2261 "c.tab.c"
    break;

  case 200: /* parameter-list: parameter-declaration  */
#line 474 "c.y"
                                { (yyval.node) = createListNode("ParametersList", (yyvsp[0].node));}
#line 2267 "c.tab.c"
    break;

  case 202: /* parameter-declaration: type-specifier IDENTIFIER  */
#line 479 "c.y"
                                    { (yyval.node) = createVarDeclaration((yyvsp[-1].node), (yyvsp[0].strings), 0);}
#line 2273 "c.tab.c"
    break;

  case 245: /* compound-statement: LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET  */
#line 561 "c.y"
                                                 {(yyval.node) = createCompoundStatement(NULL, NULL);}
#line 2279 "c.tab.c"
    break;

  case 246: /* compound-statement: LEFT_CURLY_BRACKET local_declaration_list RIGHT_CURLY_BRACKET  */
#line 562 "c.y"
                                                                         {(yyval.node) = createCompoundStatement((yyvsp[-1].node), NULL);}
#line 2285 "c.tab.c"
    break;

  case 247: /* compound-statement: LEFT_CURLY_BRACKET local_declaration_list instructions_list RIGHT_CURLY_BRACKET  */
#line 563 "c.y"
                                                                                           {(yyval.node) = createCompoundStatement((yyvsp[-2].node), (yyvsp[-1].node));}
#line 2291 "c.tab.c"
    break;

  case 248: /* local_declaration_list: declaration  */
#line 567 "c.y"
                      { (yyval.node) = createListNode("LocalDeclarations", (yyvsp[0].node)); }
#line 2297 "c.tab.c"
    break;

  case 249: /* local_declaration_list: local_declaration_list declaration  */
#line 568 "c.y"
                                             {	(yyval.node) = (yyvsp[-1].node); addLinkToList((yyval.node), (yyvsp[0].node));}
#line 2303 "c.tab.c"
    break;

  case 250: /* instructions_list: statement  */
#line 572 "c.y"
                    {(yyval.node) = createListNode("InstructionsList", (yyvsp[0].node));}
#line 2309 "c.tab.c"
    break;

  case 251: /* instructions_list: instructions_list statement  */
#line 573 "c.y"
                                      {	(yyval.node) = (yyvsp[-1].node); addLinkToList((yyval.node), (yyvsp[0].node));}
#line 2315 "c.tab.c"
    break;

  case 254: /* selection-statement: IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement  */
#line 582 "c.y"
                                                                         { (yyval.node) = createIfStatement((yyvsp[-2].node), (yyvsp[0].node), NULL);}
#line 2321 "c.tab.c"
    break;

  case 255: /* selection-statement: IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET compound-statement  */
#line 583 "c.y"
                                                                                  { (yyval.node) = createIfStatement((yyvsp[-2].node), (yyvsp[0].node), NULL);}
#line 2327 "c.tab.c"
    break;

  case 256: /* selection-statement: IF LEFT_ROUND_BRACKET RIGHT_ROUND_BRACKET compound-statement  */
#line 584 "c.y"
                                                                       { (yyval.node) = createIfStatement("", (yyvsp[0].node), NULL);}
#line 2333 "c.tab.c"
    break;

  case 257: /* selection-statement: IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement ELSE statement  */
#line 585 "c.y"
                                                                                        { (yyval.node) = createIfStatement((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));}
#line 2339 "c.tab.c"
    break;

  case 258: /* selection-statement: SWITCH LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement  */
#line 586 "c.y"
                                                                             { (yyval.node) = createSwitchStatement((yyvsp[-2].node), (yyvsp[0].node), NULL);}
#line 2345 "c.tab.c"
    break;

  case 259: /* selection-statement: SWITCH LEFT_ROUND_BRACKET RIGHT_ROUND_BRACKET statement  */
#line 587 "c.y"
                                                                  { (yyval.node) = createSwitchStatement("", (yyvsp[0].node), NULL);}
#line 2351 "c.tab.c"
    break;

  case 260: /* iteration-statement: WHILE LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement  */
#line 591 "c.y"
                                                                            { (yyval.node) = createWhileStatement((yyvsp[-2].node), (yyvsp[0].node), NULL);}
#line 2357 "c.tab.c"
    break;

  case 261: /* iteration-statement: DO statement WHILE LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET  */
#line 592 "c.y"
                                                                               { (yyval.node) = createDoWhileStatement((yyvsp[-4].node), (yyvsp[-1].node), NULL);}
#line 2363 "c.tab.c"
    break;

  case 269: /* iteration-statement: FOR LEFT_ROUND_BRACKET declaration END_OF_INSTRUCTION expression END_OF_INSTRUCTION expression RIGHT_ROUND_BRACKET statement  */
#line 600 "c.y"
                                                                                                                                       { (yyval.node) = createForStatement((yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), NULL);}
#line 2369 "c.tab.c"
    break;

  case 272: /* iteration-statement: FOR LEFT_ROUND_BRACKET declaration END_OF_INSTRUCTION END_OF_INSTRUCTION RIGHT_ROUND_BRACKET statement  */
#line 603 "c.y"
                                                                                                                 { (yyval.node) = createForStatement((yyvsp[-4].node), NULL, (yyvsp[0].node), NULL, NULL);}
#line 2375 "c.tab.c"
    break;

  case 285: /* function-definition: type-specifier IDENTIFIER LEFT_ROUND_BRACKET declaration-specifier RIGHT_ROUND_BRACKET compound-statement  */
#line 635 "c.y"
                                                                                                                    { (yyval.node) = createFunctionDeclarationNode((yyvsp[-5].node), (yyvsp[-4].strings), (yyvsp[-2].node), (yyvsp[0].node));  }
#line 2381 "c.tab.c"
    break;

  case 286: /* function-definition: type-specifier IDENTIFIER LEFT_ROUND_BRACKET declaration-specifier RIGHT_ROUND_BRACKET compound-statement  */
#line 636 "c.y"
                                                                                                                    { (yyval.node) = createFunctionDeclarationNode((yyvsp[-5].node), (yyvsp[-4].strings), (yyvsp[-2].node), (yyvsp[0].node));  }
#line 2387 "c.tab.c"
    break;


#line 2391 "c.tab.c"

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

#line 639 "c.y"


int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  
