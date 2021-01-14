#ifdef  __SYMBOLANALIZER_H
#define __SYMBOLANALIZER_H

#include "ast.h"
#define MAX_SYMBOL_NAME 255
#define MAX_DATATYPE_NAME 255
#define MAX_CONTEXT_NAME 255
#define SIZE 255

typedef enum IdentifierScope { Local = 0, Global = 1 } IdentifierScope; 

typedef enum SymbolType {Function = 0 , Variable = 1} SymbolType;

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
void generateSymTable(Node * astRoot, int level, Node* parent);


#endif //  __SYMBOLANALIZER_H