#include "SemanticAnalyzer.h"
#include <malloc.h>
#include <string.h>
#include <stdio.h>

int currentElement = 0, i = 0, index = 0;

void initHashTable() {
	hashTable = (symbolsTableEntry**)malloc(sizeof(symbolsTableEntry));
	for (i = 0; i < SIZE; i++)
		hashTable[i] = NULL;
}

void insertSymbol(char* name, char* data, SymbolType type, IdentifierScope scope, char* context) {
	int hashValue = currentElement;
	symbolsTableEntry* list = hashTable[hashValue];

	list = (symbolsTableEntry*)malloc(sizeof(symbolsTableEntry));
	list->symbolScope = scope;
	list->symbolType = type;
	strcpy(list->dataType , data);
	strcpy(list->symbolName , name);
	strcpy(list->contextName , context);

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

			switch(list->symbolType) {
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
