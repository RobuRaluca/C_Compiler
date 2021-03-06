#include <stdio.h>
#include "ast.h"
#include "c.tab.h"
//#include "symbols.h"
//extern int yylex(void);
extern int yyparse(void);
extern FILE * yyin;
extern int yydebug;
extern Node* astRoot;

#define MAX_SYMBOL_NAME 255
#define MAX_DATATYPE_NAME 255
#define MAX_CONTEXT_NAME 255
#define SIZE 200

typedef enum IdentifierScope { Local = 0, Global = 1 } IdentifierScope;

typedef enum SymbolType { Function = 0, Variable = 1 } SymbolType;

typedef struct symTableEntry {
	char symbolName[MAX_SYMBOL_NAME];
	char dataType[MAX_DATATYPE_NAME];
	SymbolType symbolType;
	IdentifierScope symbolScope;
	char contextName[MAX_CONTEXT_NAME];
	struct symTableEntry* next;
}symbolsTableEntry;

static symbolsTableEntry** hashTable;

void initHashTable();
void insertSymbol(char* name, char* data, SymbolType type, IdentifierScope scope, char* context);
void printSymTable();
void generateSymTable(Node* astRoot, int level, Node* parent);


int currentElement = 0, i = 0, index = 0;

void initHashTable() {
	hashTable = (symbolsTableEntry*)malloc(sizeof(symbolsTableEntry));
	for (i = 0; i < SIZE; i++)
		hashTable[i] = NULL;
}

void insertSymbol(char* name, char* data, SymbolType type, IdentifierScope scope, char* context) {
	int hashValue = currentElement;
	symbolsTableEntry* list = hashTable[hashValue];

	list = (symbolsTableEntry*)malloc(sizeof(symbolsTableEntry));
	list->symbolScope = scope;
	list->symbolType = type;
	strcpy(list->dataType, data);
	strcpy(list->symbolName, name);
	strcpy(list->contextName, context);

	hashTable[hashValue] = list;
	currentElement++;

}

void printSymTable() {
	printf_s("             ## SYMBOLS TABLE ##\n ");

	if (hashTable[i]) {

		symbolsTableEntry* list = hashTable[i];

		while (list) {
			printf_s("Symbol name : %s", list->symbolName);
			printf_s("	Symbol data type :");

			switch (list->symbolType) {
			case(Function): printf_s("Function");
			case(Variable):printf_s("Variable");
			}

			printf_s("	Symbol scope :");
			switch (list->symbolScope) {
			case(Local): printf_s("Local");
			case(Global):printf_s("Global");
			}

			printf_s("	Symbol context : %s\n", list->contextName);
			list = list->next;

		}
	}
}

void generateSymTable(Node* astRoot, int level, Node* parent) {
	char* type = NULL;
	enum IdentifierScope scope = Local;
	enum SymbolType symType = Variable;
	Node* localParent = parent;

	if (astRoot) {
		if (strcmp(astRoot->type, "FunctionDefinition") == 0) {
			for (index = 0; index < astRoot->numLinks; index++) {
				if (strcmp(astRoot->links[index]->type, "TypeSpecifier") == 0) {
					type = astRoot->links[index]->extraData;
					break;
				}
			}

			insertSymbol(astRoot->extraData, type, Function, Global, localParent->type);
		}

		if (strcmp(astRoot->type, "VariableDeclaration") == 0) {
			symType = Variable;
			scope = Local;
			for (index = 0; index < astRoot->numLinks; index++) {
				if (strcmp(astRoot->links[index]->type, "TypeSpecifier") == 0) {
					type = astRoot->links[index]->extraData;
					break;
				}
			}

			insertSymbol(astRoot->extraData, type, symType, scope, localParent->type);

		}

		for (index = 0; index < astRoot->numLinks; index++) {
			localParent = astRoot;
			generateSymTable(astRoot->links[index], level + 1, localParent);
		}
	}
}

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

		initHashTable();
		//generateSymTable(astRoot, 0, astRoot);
		//printSymTable();

		fclose(yyin);
	}
	else
	{
		printf("Fisier inexistent");
	}
	//functions_called();
	//printf("The function if was called %d times \n", counter_if_call);
	/*printf("Do you want to check a function definition ? Type YES if you want, or NO if you don't want : ");
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
	}*/

	//getchar();
}

