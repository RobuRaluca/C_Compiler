#include <stdio.h>
#include "symbols.h"
//extern int yylex(void);
//#define YYPARSE_PARAM symbol;
//int yyparse(void *symbol);
extern int yyparse(void);
extern FILE* yyin;
extern int yydebug;
char* symbols[] = {
                            "END",
                            "INT",
                            "LONG",
                            "DOUBLE",
                            "SHORT",
                            "UNSIGNED",
                            "VOID",
                            "VOLATILE",
                            "WHILE",
                            "FLOAT",
                            "IF",
                            "ELSE",
                            "RETURN",
                            "CONSTANT",
                            "STRING_LITERAL",
                            "ASSIGN",
                            "ADD",
                            "SUBSTRACT",
                            "IDENTIFIER",
                            "END_OF_INSTRUCTION",
                            "CHAR",
                            "SIGNED",
                            "_BOOL",
                            "_COMPLEX",
                            "_IMAGINARY",
                            "CONST",
                            "ENUM",
                            "EXTERN",
                            "REGISTER",
                            "STATIC",
                            "STRUCT",
                            "UNION",
                            "TYPEDEF",
                            "FOR",
                            "SWITCH",
                            "CASE",
                            "BREAK",
                            "DEFAULT",
                            "INLINE",
                            "AUTO",
                            "CONTINUE",
                            "GOTO",
                            "RESTRICT",
                            "SIZEOF",
                            "SIMPLE_ESCAPE_SEQUENCE",
                            "INCLUDE_HEADER",
                            "INCLUDE_LIBRARY",
                            "DEFINE",
                            "PREPROCESSING_NUMBER",
                            "DIVIDE",
                            "MODULO",
                            "MULTIPLY",
                            "LEFT_SQUARE_BRACKET",
                            "RIGHT_SQUARE_BRACKET",
                            "LEFT_ROUND_BRACKET",
                            "RIGHT_ROUND_BRACKET",
                            "LEFT_CURLY_BRACKET",
                            "RIGHT_CURLY_BRACKET",
                            "STRUCTURE_REFERENCE",
                            "STRUCTURE_DEFERENCE",
                            "INCREMENT",
                            "DECREMENT",
                            "BITWISE_AND",
                            "BITWISE_NOT",
                            "LOGICAL_NEGATION",
                            "BITWISE_LEFT_SHIFT",
                            "BITWISE_RIGHT_SHIFT",
                            "LESS_THAN",
                            "GREATER_THAN",
                            "LESS_THAN_OR_EQUAL_TO",
                            "GREATER_THAN_OR_EQUAL_TO",
                            "EQUAL_TO",
                            "NOT_EQUAL_TO",
                            "BITWISE_XOR",
                            "BITWISE_OR",
                            "LOGICAL_AND",
                            "LOGICAL_OR",
                            "TERNARY_IF_CONDITION",
                            "TERNARY_ELSE_CONDITION",
                            "ASSIGNMENT_BY_PRODUCT",
                            "ASSIGNMENT_BY_QUOTIENT",
                            "ASSIGNMENT_BY_REMAINDER",
                            "ASSIGNMENT_BY_SUM",
                            "ASSIGNMENT_BY_DIFFERENCE",
                            "ASSIGNMENT_BY_BITWISE_LEFT_SHIFT",
                            "ASSIGNMENT_BY_BITWISE_RIGHT_SHIFT",
                            "ASSIGNMENT_BY_BITWISE_AND",
                            "ASSIGNMENT_BY_BITWISE_XOR",
                            "ASSIGNMENT_BY_BITWISE_OR",
                            "START_COMMENT",
                            "COMMA",
                            "LINE_COMMENT",
                            "END_COMMENT",
                            "DO",
                            "ARRAY",
                            "DOTS"
							
};

int main()
{
	//int lexUnit = 0;
	//yydebug = 1;
	yyin = fopen("input.csrc","rt");
	if (yyin != NULL)
	{
		int result = yyparse();
		switch (result)
		{
		case 0: 
			printf("\n Parse successfull.\n");
			break;

		case 1: 
			printf("\n Invalid input encountered\n");
			break;

		case 2:
			printf("Out of memory\n");
			break;

		default:
			break;
		}
		/*while ((lexUnit = yylex()) != END)
		{
			printf(" -> TOKEN: %s\n", symbols[lexUnit]);
		}*/
		fclose(yyin);
	}
	else
	{
		printf("Fisier inexistent");
	}

	//getchar();
}

