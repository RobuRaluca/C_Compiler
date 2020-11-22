#include <stdio.h>
#include "ast.h"
//#include "symbols.h"
//extern int yylex(void);
extern int yyparse(void);
extern FILE * yyin;
extern int yydebug;
extern Node* astRoot;

//char* symbols[] = {
//	"END",
//							"INT",
//							"LONG",
//							"DOUBLE",
//							"SHORT",
//							"UNSIGNED",
//							"VOID",
//							"VOLATILE",
//							"WHILE",
//							"FLOAT",
//							"IF",
//							"ELSE",
//							"RETURN",
//							"CONSTANT",
//							"STRING_LITERAL",
//							"ASSIGN",
//							"ADD",
//							"SUBSTRACT",
//							"IDENTIFIER",
//							"END_OF_INSTRUCTION"
//
//};
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
		printAst(astRoot, 0);
		fclose(yyin);
	}
	else
	{
		printf("Fisier inexistent");
	}
	functions_called();
	//printf("The function if was called %d times \n", counter_if_call);
	printf("Do you want to check a function definition ? Type YES if you want, or NO if you don't want : ");
	char answer[4];
	scanf("%s", &answer);

	if (strcmp(answer, "YES") == 0) {
		printf("Please type the function name : ");
		char function_name[40];
		scanf("%s", &function_name);
		
		if (strcmp(function_name, "createTypeSpecifier") == 0)
			printf("Node * createTypeSpecifier(const char* typeName);");

		if (strcmp(function_name, "createProgramUnitNode") == 0)
			printf("Node* createProgramUnitNode(Node* declaration);");

		if (strcmp(function_name, "createDeclarationNode") == 0)
			printf("Node* createDeclarationNode(Node* varFunDeclaration);");

		if (strcmp(function_name, "createFunctionDeclarationNode") == 0)
			printf("Node* createFunctionDeclarationNode(Node* typeSpecifier, const char* functionName, Node* paramsList, Node* compoundStatement);");
	
		if (strcmp(function_name, "createVarDeclaration") == 0)
			printf("Node* createVarDeclaration(Node* typeSpecifier, const char* varName, int value);");

		if (strcmp(function_name, "createCompoundStatement") == 0)
			printf("Node* createCompoundStatement(Node* localDeclList, Node* instructionsList);");

		if (strcmp(function_name, "createIfStatement") == 0) {
			printf("Node* createIfStatement(const char* identifierName, Node* thenStatement, Node* elseStatement);\n");
			if_calls();
		}

		if (strcmp(function_name, "createSwitchStatement") == 0) {
			printf("Node* createSwitchStatement(const char* identName, Node* condStatement, Node* cond2Statement);\n");
			switch_calls();
		}

		if (strcmp(function_name, "createWhileStatement") == 0) {
			printf("Node* createWhileStatement(const char* identName, Node* condStatement, Node* cond2Statement);\n");
			while_calls();
		}

		if (strcmp(function_name, "createDoWhileStatement") == 0) {
			printf("Node* createDoWhileStatement(const char* identName, Node* condStatement, Node* cond2Statement);\n");
			do_while_calls();
		}
		if (strcmp(function_name, "createForStatement") == 0) {
			printf("Node* createForStatement(const char* identName, Node* condStatement, Node* cond2Statement, Node* cond3Statement, Node* cond4Statement);\n");
			for_calls();
		}

		if (strcmp(function_name, "createExpressionStatement") == 0)
			printf("Node * createExpressionStatement(Node * localIdent, Node * localValue);");

		if (strcmp(function_name, "createDefaultNode") == 0)
			printf("Node* createDefaultNode(const char* nodeName, unsigned int linksCount);");

		if (strcmp(function_name, "resizeNodeLinks") == 0)
			printf("Node* resizeNodeLinks(Node* nodeToResize, unsigned int newSize);");

		if (strcmp(function_name, "createListNode") == 0)
			printf("Node* createListNode(const char* listName, Node* firstLink);");

		if (strcmp(function_name, "addLinkToList") == 0)
			printf("void addLinkToList(Node* listNode, Node* linkToAdd);");

		if (strcmp(function_name, "printAst") == 0)
			printf("void printAst(Node* ast, int level);");
	}

	//getchar();
}

