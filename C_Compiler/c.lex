D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*
HP			(0x|0X)
N0D			[1-9]
OD			[0-8]
US          [u|U]
LS			[l|L]
LLS         [ll|LL]
const		[int|float|enum|char]
S			[\r\n\t\f\v]
ES          [Ee][+-]
NULL		[\0]

%{
#include <stdio.h>
#include "c.tab.h"

void count();
%}

%%
"/*"			{ comment();}

	
"int"			{ count(); return(INT); }
"char"			{ count(); return(CHAR); }
"double"		{ count(); return(DOUBLE); }
"short"			{ count(); return(SHORT); }
"unsigned"		{ count(); return(UNSIGNED); }
"signed"		{ count(); return(SIGNED); }
"float"			{ count(); return(FLOAT); }
"long"			{ count(); return(LONG); }
"_Bool"			{ count(); return(_BOOL); }
"_Complex"		{ count(); return(_COMPLEX); }
"_Imaginary"	{ count(); return(_IMAGINARY); }
"const"			{ count(); return(CONST); }
"volatile"		{ count(); return(VOLATILE); }
"enum"			{ count(); return(ENUM); }
"extern"		{ count(); return(EXTERN); }
"register"		{ count(); return(REGISTER); }
"static"		{ count(); return(STATIC); }
"struct"		{ count(); return(STRUCT); }
"union"			{ count(); return(UNION); }
"typedef"		{ count(); return(TYPEDEF); }
"do"			{ count(); return(DO); }
"while"			{ count(); return(WHILE); }
"for"			{ count(); return(FOR); }
"switch"		{ count(); return(SWITCH); }
"case"			{ count(); return(CASE); }
"break"			{ count(); return(BREAK); }
"default"		{ count(); return(DEFAULT); }
"if"			{ count(); return(IF); }
"else"			{ count(); return(ELSE); }

"void"			{ count(); return(VOID); }
"return"		{ count(); return(RETURN); }
"inline"		{ count(); return(INLINE); }

"auto"		{ count(); return(AUTO); }
"continue"	{ count(); return(CONTINUE); }
"goto"		{ count(); return(GOTO); }
"restrict"	{ count(); return(RESTRICT); }
"sizeof"	{ count(); return(SIZEOF); }

{L}({L}|{D})*		{ count(); return(check_type()); }
0{D}+{IS}?		{ count(); return(CONSTANT); }
{D}+{IS}?		{ count(); return(CONSTANT); }
{D}+{E}{FS}?		{ count(); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ count(); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ count(); return(CONSTANT); }



"#include<"{L}+">"				{ count(); return(INCLUDE_LIBRARY); }
"#include\""{L}+"\""			{ count(); return(INCLUDE_HEADER); }
"#define "{L}+" "{D}+			{ count(); return(DEFINE); }
("char "{L}+"["{D}+"]"|"int "{L}+"["{D}+"]"|"long "{L}+"["{D}+"]"|"float "{L}+"["{D}+"]")			{ count(); return(ARRAY); }


"\\n"|"\\t"|"\\a"|"\\b"|"\\f"|"\\v"	{ count(); return(SIMPLE_ESCAPE_SEQUENCE); }

{L}?\"(\\.|[^\\"])*\"					{ count(); return(STRING_LITERAL); }

"="			{ count(); return(ASSIGN); }
"+"			{ count(); return(ADD); }
"-"			{ count(); return(SUBSTRACT); }
"/"			{ count(); return(DIVIDE); }
"%"			{ count(); return(MODULO); }
"*"			{ count(); return(MULTIPLY); }
";"			{ count(); return (END_OF_INSTRUCTION);}
"["			{ count(); return (LEFT_SQUARE_BRACKET);}
"]"			{ count(); return (RIGHT_SQUARE_BRACKET);}
"("			{ count(); return (LEFT_ROUND_BRACKET);}
")"			{ count(); return (RIGHT_ROUND_BRACKET);}
"{"			{ count(); return (LEFT_CURLY_BRACKET);}
"}"			{ count(); return (RIGHT_CURLY_BRACKET);}
"."			{ count(); return (STRUCTURE_REFERENCE);}
"->"		{ count(); return (STRUCTURE_DEFERENCE);}
"++"		{ count(); return (INCREMENT);}
"--"		{ count(); return (DECREMENT);}
"&"			{ count(); return (BITWISE_AND);}
"~"			{ count(); return (BITWISE_NOT);}
"!"			{ count(); return (LOGICAL_NEGATION);}
"<<"		{ count(); return (BITWISE_LEFT_SHIFT);}
">>"		{ count(); return (BITWISE_RIGHT_SHIFT);}
"<"			{ count(); return (LESS_THAN);}
">"			{ count(); return (GREATER_THAN);}
"<="		{ count(); return (LESS_THAN_OR_EQUAL_TO);}
">="		{ count(); return (GREATER_THAN_OR_EQUAL_TO);}
"=="		{ count(); return (EQUAL_TO);}
"!="		{ count(); return (NOT_EQUAL_TO);}
"^"			{ count(); return (BITWISE_XOR);}
"|"			{ count(); return (BITWISE_OR);}
"&&"		{ count(); return (LOGICAL_AND);}
"||"		{ count(); return (LOGICAL_OR);}
"?"			{ count(); return (TERNARY_IF_CONDITION);}
":"			{ count(); return (TERNARY_ELSE_CONDITION);}
"*="		{ count(); return (ASSIGNMENT_BY_PRODUCT);}
"/="		{ count(); return (ASSIGNMENT_BY_QUOTIENT);}
"%="		{ count(); return (ASSIGNMENT_BY_REMAINDER);}
"+="		{ count(); return (ASSIGNMENT_BY_SUM);}
"-="		{ count(); return (ASSIGNMENT_BY_DIFFERENCE);}
"<<="		{ count(); return (ASSIGNMENT_BY_BITWISE_LEFT_SHIFT);}
">>="		{ count(); return (ASSIGNMENT_BY_BITWISE_RIGHT_SHIFT);}
"&="		{ count(); return (ASSIGNMENT_BY_BITWISE_AND);}
"^="		{ count(); return (ASSIGNMENT_BY_BITWISE_XOR);}
"|="		{ count(); return (ASSIGNMENT_BY_BITWISE_OR);}
","			{ count(); return (COMMA);}
"..."		{ count(); return (DOTS);}



%%

yywrap()
{
	return(1);
}


comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);
}


int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}

int check_type()
{

	return(IDENTIFIER);
}