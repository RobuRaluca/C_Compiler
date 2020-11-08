/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_C_TAB_H_INCLUDED
# define YY_YY_C_TAB_H_INCLUDED
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
    END = 258,                     /* END  */
    INT = 259,                     /* INT  */
    LONG = 260,                    /* LONG  */
    DOUBLE = 261,                  /* DOUBLE  */
    SHORT = 262,                   /* SHORT  */
    UNSIGNED = 263,                /* UNSIGNED  */
    VOID = 264,                    /* VOID  */
    VOLATILE = 265,                /* VOLATILE  */
    WHILE = 266,                   /* WHILE  */
    FLOAT = 267,                   /* FLOAT  */
    IF = 268,                      /* IF  */
    ELSE = 269,                    /* ELSE  */
    RETURN = 270,                  /* RETURN  */
    CONSTANT = 271,                /* CONSTANT  */
    STRING_LITERAL = 272,          /* STRING_LITERAL  */
    ASSIGN = 273,                  /* ASSIGN  */
    ADD = 274,                     /* ADD  */
    SUBSTRACT = 275,               /* SUBSTRACT  */
    IDENTIFIER = 276,              /* IDENTIFIER  */
    END_OF_INSTRUCTION = 277,      /* END_OF_INSTRUCTION  */
    CHAR = 278,                    /* CHAR  */
    SIGNED = 279,                  /* SIGNED  */
    _BOOL = 280,                   /* _BOOL  */
    _COMPLEX = 281,                /* _COMPLEX  */
    _IMAGINARY = 282,              /* _IMAGINARY  */
    CONST = 283,                   /* CONST  */
    ENUM = 284,                    /* ENUM  */
    EXTERN = 285,                  /* EXTERN  */
    REGISTER = 286,                /* REGISTER  */
    STATIC = 287,                  /* STATIC  */
    STRUCT = 288,                  /* STRUCT  */
    UNION = 289,                   /* UNION  */
    TYPEDEF = 290,                 /* TYPEDEF  */
    FOR = 291,                     /* FOR  */
    SWITCH = 292,                  /* SWITCH  */
    CASE = 293,                    /* CASE  */
    BREAK = 294,                   /* BREAK  */
    DEFAULT = 295,                 /* DEFAULT  */
    INLINE = 296,                  /* INLINE  */
    AUTO = 297,                    /* AUTO  */
    CONTINUE = 298,                /* CONTINUE  */
    GOTO = 299,                    /* GOTO  */
    RESTRICT = 300,                /* RESTRICT  */
    SIZEOF = 301,                  /* SIZEOF  */
    SIMPLE_ESCAPE_SEQUENCE = 302,  /* SIMPLE_ESCAPE_SEQUENCE  */
    INCLUDE_HEADER = 303,          /* INCLUDE_HEADER  */
    INCLUDE_LIBRARY = 304,         /* INCLUDE_LIBRARY  */
    DEFINE = 305,                  /* DEFINE  */
    PREPROCESSING_NUMBER = 306,    /* PREPROCESSING_NUMBER  */
    DIVIDE = 307,                  /* DIVIDE  */
    MODULO = 308,                  /* MODULO  */
    MULTIPLY = 309,                /* MULTIPLY  */
    LEFT_SQUARE_BRACKET = 310,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 311,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_ROUND_BRACKET = 312,      /* LEFT_ROUND_BRACKET  */
    RIGHT_ROUND_BRACKET = 313,     /* RIGHT_ROUND_BRACKET  */
    LEFT_CURLY_BRACKET = 314,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 315,     /* RIGHT_CURLY_BRACKET  */
    STRUCTURE_REFERENCE = 316,     /* STRUCTURE_REFERENCE  */
    STRUCTURE_DEFERENCE = 317,     /* STRUCTURE_DEFERENCE  */
    INCREMENT = 318,               /* INCREMENT  */
    DECREMENT = 319,               /* DECREMENT  */
    BITWISE_AND = 320,             /* BITWISE_AND  */
    BITWISE_NOT = 321,             /* BITWISE_NOT  */
    LOGICAL_NEGATION = 322,        /* LOGICAL_NEGATION  */
    BITWISE_LEFT_SHIFT = 323,      /* BITWISE_LEFT_SHIFT  */
    BITWISE_RIGHT_SHIFT = 324,     /* BITWISE_RIGHT_SHIFT  */
    LESS_THAN = 325,               /* LESS_THAN  */
    GREATER_THAN = 326,            /* GREATER_THAN  */
    LESS_THAN_OR_EQUAL_TO = 327,   /* LESS_THAN_OR_EQUAL_TO  */
    GREATER_THAN_OR_EQUAL_TO = 328, /* GREATER_THAN_OR_EQUAL_TO  */
    EQUAL_TO = 329,                /* EQUAL_TO  */
    NOT_EQUAL_TO = 330,            /* NOT_EQUAL_TO  */
    BITWISE_XOR = 331,             /* BITWISE_XOR  */
    BITWISE_OR = 332,              /* BITWISE_OR  */
    LOGICAL_AND = 333,             /* LOGICAL_AND  */
    LOGICAL_OR = 334,              /* LOGICAL_OR  */
    TERNARY_IF_CONDITION = 335,    /* TERNARY_IF_CONDITION  */
    TERNARY_ELSE_CONDITION = 336,  /* TERNARY_ELSE_CONDITION  */
    ASSIGNMENT_BY_PRODUCT = 337,   /* ASSIGNMENT_BY_PRODUCT  */
    ASSIGNMENT_BY_QUOTIENT = 338,  /* ASSIGNMENT_BY_QUOTIENT  */
    ASSIGNMENT_BY_REMAINDER = 339, /* ASSIGNMENT_BY_REMAINDER  */
    ASSIGNMENT_BY_SUM = 340,       /* ASSIGNMENT_BY_SUM  */
    ASSIGNMENT_BY_DIFFERENCE = 341, /* ASSIGNMENT_BY_DIFFERENCE  */
    ASSIGNMENT_BY_BITWISE_LEFT_SHIFT = 342, /* ASSIGNMENT_BY_BITWISE_LEFT_SHIFT  */
    ASSIGNMENT_BY_BITWISE_RIGHT_SHIFT = 343, /* ASSIGNMENT_BY_BITWISE_RIGHT_SHIFT  */
    ASSIGNMENT_BY_BITWISE_AND = 344, /* ASSIGNMENT_BY_BITWISE_AND  */
    ASSIGNMENT_BY_BITWISE_XOR = 345, /* ASSIGNMENT_BY_BITWISE_XOR  */
    ASSIGNMENT_BY_BITWISE_OR = 346, /* ASSIGNMENT_BY_BITWISE_OR  */
    START_COMMENT = 347,           /* START_COMMENT  */
    COMMA = 348,                   /* COMMA  */
    LINE_COMMENT = 349,            /* LINE_COMMENT  */
    END_COMMENT = 350,             /* END_COMMENT  */
    DO = 351,                      /* DO  */
    ARRAY = 352,                   /* ARRAY  */
    DOTS = 353                     /* DOTS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_C_TAB_H_INCLUDED  */
