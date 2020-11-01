%{
#include <stdio.h>
%}
%token END 
%token INT 
%token LONG 
%token DOUBLE 
%token SHORT 
%token UNSIGNED 
%token VOID 
%token VOLATILE 
%token WHILE 
%token FLOAT 
%token IF 
%token ELSE 
%token RETURN 
%token CONSTANT 
%token STRING_LITERAL 
%token ASSIGN 
%token ADD 
%token SUBSTRACT  
%token IDENTIFIER  
%token END_OF_INSTRUCTION  
%token CHAR  
%token SIGNED  
%token _BOOL  
%token _COMPLEX  
%token _IMAGINARY  
%token CONST  
%token ENUM  
%token EXTERN  
%token REGISTER  
%token STATIC  
%token STRUCT  
%token UNION  
%token TYPEDEF  
%token FOR  
%token SWITCH  
%token CASE  
%token BREAK  
%token DEFAULT  
%token INLINE  
%token AUTO  
%token CONTINUE  
%token GOTO  
%token RESTRICT  
%token SIZEOF  
%token SIMPLE_ESCAPE_SEQUENCE  
%token INCLUDE_HEADER  
%token INCLUDE_LIBRARY  
%token DEFINE  
%token PREPROCESSING_NUMBER  
%token DIVIDE  
%token MODULO  
%token MULTIPLY  
%token LEFT_SQUARE_BRACKET  
%token RIGHT_SQUARE_BRACKET  
%token LEFT_ROUND_BRACKET  
%token RIGHT_ROUND_BRACKET  
%token LEFT_CURLY_BRACKET  
%token RIGHT_CURLY_BRACKET  
%token STRUCTURE_REFERENCE  
%token STRUCTURE_DEFERENCE  
%token INCREMENT  
%token DECREMENT  
%token BITWISE_AND  
%token BITWISE_NOT  
%token LOGICAL_NEGATION  
%token BITWISE_LEFT_SHIFT  
%token BITWISE_RIGHT_SHIFT  
%token LESS_THAN  
%token GREATER_THAN  
%token LESS_THAN_OR_EQUAL_TO  
%token GREATER_THAN_OR_EQUAL_TO  
%token EQUAL_TO  
%token NOT_EQUAL_TO  
%token BITWISE_XOR  
%token BITWISE_OR  
%token LOGICAL_AND  
%token LOGICAL_OR  
%token TERNARY_IF_CONDITION  
%token TERNARY_ELSE_CONDITION  
%token ASSIGNMENT_BY_PRODUCT  
%token ASSIGNMENT_BY_QUOTIENT  
%token ASSIGNMENT_BY_REMAINDER  
%token ASSIGNMENT_BY_SUM  
%token ASSIGNMENT_BY_DIFFERENCE  
%token ASSIGNMENT_BY_BITWISE_LEFT_SHIFT  
%token ASSIGNMENT_BY_BITWISE_RIGHT_SHIFT  
%token ASSIGNMENT_BY_BITWISE_AND  
%token ASSIGNMENT_BY_BITWISE_XOR  
%token ASSIGNMENT_BY_BITWISE_OR  
%token START_COMMENT   
%token COMMA  
%token LINE_COMMENT  
%token END_COMMENT  
%token DO  
%token ARRAY  
%token POINTER  

%start program_unit
%%
program_unit
	: declaration
	| program_unit declaration
	;
	
declaration
	: function_definition
	| var_declaration
	;
	
function_definition
	: type_specifier IDENTIFIER '(' params_list ')' compound_statement
	;

type_specifier
	: INT
	| LONG
	| DOUBLE
	| SHORT
	| UNSIGNED
	| SIGNED
	| VOID
	| CONSTANT 
	| CHAR  
	| _BOOL  
	| _COMPLEX  
	| _IMAGINARY  
	| STATIC  
	;
	
params_list
	: fun_param
	| params_list ',' fun_param
	;

fun_param
	: type_specifier IDENTIFIER
	;

type_specifier_var
	: INT 
	| LONG 
	| DOUBLE 
	| SHORT 
	| UNSIGNED 
	| VOID 
	| VOLATILE 
	| FLOAT 
	| CONSTANT 
	| CHAR  
	| SIGNED  
	| _BOOL  
	| _COMPLEX  
	| _IMAGINARY  
	| STATIC  
	;

var_declaration
	:type_specifier_var IDENTIFIER END_OF_INSTRUCTION
	;

compound_statement 
	: '{' '}'
	| '{' local_declaration_list '}'
	| '{' local_declaration_list instructions_list '}'
	| '{' expression '}'
	;

local_declaration_list
	: var_declaration
	| local_declaration_list var_declaration
	;

instructions_list
	: statement
	| instructions_list statement
	;

compound_operator
	 : ASSIGNMENT_BY_PRODUCT  
	 | ASSIGNMENT_BY_QUOTIENT  
	 | ASSIGNMENT_BY_REMAINDER  
	 | ASSIGNMENT_BY_SUM  
	 | ASSIGNMENT_BY_DIFFERENCE  
	 | ASSIGNMENT_BY_BITWISE_LEFT_SHIFT  
	 | ASSIGNMENT_BY_BITWISE_RIGHT_SHIFT  
	 | ASSIGNMENT_BY_BITWISE_AND  
	 | ASSIGNMENT_BY_BITWISE_XOR  
	 | ASSIGNMENT_BY_BITWISE_OR  
	 ;

relational_operator
	: LESS_THAN  
	| GREATER_THAN  
	| LESS_THAN_OR_EQUAL_TO  
	| GREATER_THAN_OR_EQUAL_TO  
	| EQUAL_TO  
	| NOT_EQUAL_TO  
	;

logical_operator
	: LOGICAL_NEGATION  
	| LOGICAL_AND  
	| LOGICAL_OR
	;

arithmetic_operator
	: ADD 
	| SUBSTRACT  
	| DIVIDE  
	| MODULO  
	| MULTIPLY  
	;

expression
	: IDENTIFIER compound_operator IDENTIFIER
	| IDENTIFIER compound_operator {D}
	| IDENTIFIER logical_operator IDENTIFIER
	| expression logical_operator IDENTIFIER
	| expression logical_operator expression
	| IDENTIFIER arithmetic_operator IDENTIFIER relational_operator IDENTIFIER
	| IDENTIFIER arithmetic_operator IDENTIFIER relational_operator expression
	| IDENTIFIER bitwise_operator IDENTIFIER
	| IDENTIFIER bitwise_operator expression
	| expression bitwise_operator IDENTIFIER
	| expression bitwise_operator expression
	| IDENTIFIER INCREMENT
	| IDENTIFIER DECREMENT
	;

bitwise_operator
	: BITWISE_AND  
	| BITWISE_NOT  
	| BITWISE_LEFT_SHIFT  
	| BITWISE_RIGHT_SHIFT  
	| BITWISE_XOR  
	| BITWISE_OR  
	;

statement
	: IF '(' expression ')' compound_statement ELSE compound_statement
	| IF '(' expression ')' compound_statement
	| IF '(' ')' compound_statement ELSE compound_statement
	| IF '(' ')' compound_statement
	| WHILE '(' expression ')' compound_statement
	| WHILE '(' ')' compound_statement
	| FOR '(' expression END_OF_INSTRUCTION expression END_OF_INSTRUCTION expression ')' compound_statement 
	| DO '(' compound_statement ')' compound_statement  WHILE '(' expression ')'
	| DO '(' compound_statement ')' compound_statement  WHILE '(' ')'
	;

struct_statement
	: var_declaration struct_statement
	;

union_statement
	: var_declaration union_statement
	| struct_statement union_statement
	;

%%

void yyerror(char *s)
/* yacc error handler */
{
	printf ( "%s\n", s);
}
