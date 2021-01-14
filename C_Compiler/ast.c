#include "ast.h"
#include <malloc.h>
#include <string.h>
#include <stdio.h>
Node* createDefaultNode(const char* nodeName, unsigned int linksCount)
{
	Node* retNode = (Node*)malloc(sizeof(Node));
	if (retNode)
	{
		memset(retNode, 0, sizeof(Node));
		if (nodeName)
		{
			strcpy(retNode->type, nodeName);
		}
		retNode->numLinks = linksCount;
		if (linksCount > 0)
		{
			retNode->links = (Node**)malloc(linksCount * sizeof(Node*));
		}
	}
	return retNode;
}

Node* resizeNodeLinks(Node* nodeToResize, unsigned int newSize)
{
	if (nodeToResize->numLinks == 0)
	{
		nodeToResize->links = (Node**)malloc(newSize*sizeof(Node*));		
	}
	else
	{
		nodeToResize->links = (Node**)realloc(nodeToResize->links, newSize * sizeof(Node*));
	}
	nodeToResize->numLinks = newSize;
	return nodeToResize;
}

Node* createListNode(const char* listName, Node* firstLink)
{
	Node* retNode = createDefaultNode(listName, 1);
	retNode->links[0] = firstLink;
	return retNode;
}
void addLinkToList(Node* listNode, Node* linkToAdd)
{
	unsigned int numLinks = listNode->numLinks;	
	resizeNodeLinks(listNode, numLinks + 1);
	listNode->links[numLinks] = linkToAdd;
}

Node* createProgramUnitNode(Node* declaration)
{
	Node* retNode = createDefaultNode("ProgramUnit", 1);
	if (retNode)
	{
		retNode->links[0] = declaration;
	}

	return retNode;

}

Node* createDeclarationNode(Node* varFunDeclaration)
{
	Node* retNode = createDefaultNode("Declaration", 1);
	if (retNode)
	{
		retNode->links[0] = varFunDeclaration;
	}
	return retNode;
}

Node* createFunctionDeclarationNode(Node* typeSpecifier, const char* functionName, Node* paramsList, Node* compoundStatement)
{
	
	Node* retNode = createDefaultNode("FunctionDefinition", 3);
	
	if (retNode)
	{
		retNode->links[0] = typeSpecifier;
		retNode->links[1] = paramsList;
		retNode->links[2] = compoundStatement;
		if (functionName)
		strcpy(retNode->extraData, functionName);
	}

	return retNode;
}

Node* createVarDeclaration(Node* typeSpecifier, const char* varName, int value)
{
	Node* retNode = createDefaultNode("VariableDeclaration", 2);

	if (retNode)
	{
		retNode->links[0] = typeSpecifier;	
		if (varName)
			sprintf(retNode->extraData, "%s", varName);
		retNode->links[1] = createDefaultNode("IntValue", 0);		
		sprintf(retNode->links[1]->extraData, "%d", value);
	}

	return retNode;

}

Node* createCompoundStatement(Node* localDeclList, Node* instructionsList)
{
	Node* retNode = createDefaultNode("CompoundStatement", 2);
	retNode->links[0] = localDeclList;
	retNode->links[1] = instructionsList;
	return retNode;
}

Node* createExpressionStatement(Node* localIdent, Node* localValue) {
	Node* retNode = createDefaultNode("ExpressionStatement", 2);
	retNode->links[0] = localIdent;
	retNode->links[1] = localValue;
	return retNode;
}

Node* createIfStatement(const char* identifierName, Node* thenStatement, Node* elseStatement) 
{

	Node* retNode = createDefaultNode("IfStatement", 2);
	retNode->links[0] = thenStatement;
	retNode->links[1] = elseStatement;
	counter_if_call++;
	//printf("The function if was called %d times \n", counter_if_call);
	if (identifierName)
		sprintf(retNode->extraData, "%s", identifierName);
	return retNode;
}

Node* createSwitchStatement(Node* expression, Node* switchStatement) { // delete identName
	Node* retNode = createDefaultNode("SwitchStatement", 2);
	retNode->links[0] = expression;
	retNode->links[1] = switchStatement;
	counter_switch_call++;
	//if (identName)
	//	sprintf(retNode->extraData, "%s", identName);
	return retNode;
}

Node* createWhileStatement(const char* identName, Node* condStatement, Node* cond2Statement) {
	Node* retNode = createDefaultNode("WhileStatement", 2);
	retNode->links[0] = condStatement;
	retNode->links[1] = cond2Statement;
	counter_while_call++;
	if (identName)
		sprintf(retNode->extraData, "%s", identName);
	return retNode;
}

Node* createDoWhileStatement(const char* identName, Node* condStatement, Node* cond2Statement) {
	Node* retNode = createDefaultNode("DoWhileStatement", 2);
	retNode->links[0] = condStatement;
	retNode->links[1] = cond2Statement;
	counter_doWhile_call++;
	if (identName)
		sprintf(retNode->extraData, "%s", identName);
	return retNode;
}

Node* createForStatement(const char* identName, Node* condStatement, Node* cond2Statement, Node* cond3Statement, Node* cond4Statement) {
	Node* retNode = createDefaultNode("ForStatement", 2);
	retNode->links[0] = condStatement;
	retNode->links[1] = cond2Statement;
	retNode->links[0] = cond3Statement;
	retNode->links[1] = cond4Statement;
	counter_for_call++;
	if (identName)
		sprintf(retNode->extraData, "%s", identName);
	return retNode;
}

Node* createTypeSpecifier(const char* typeName)
{
	Node* retVal = createDefaultNode("TypeSpecifier", 0);
	if (typeName)
		sprintf(retVal->extraData, "%s", typeName);
	return retVal;
}

void printAst(Node* ast, int level)
{
	int idx = 0;
	if (ast)
	{
		for (idx = 0; idx < level; idx++)
		{
			printf(" ");
		}
		if (ast->type)
		{
			printf("%s ", ast->type);
		}
		if (ast->numLinks)
		{
			printf(" - %d - %s\n", ast->numLinks, ast->extraData);
		}
		else
		{
			printf(" - %s\n",  ast->extraData);
		}
		for (idx = 0; idx < ast->numLinks; idx++)
		{
			
			printAst(ast->links[idx], level + 1);			
		}
	}
	//printf("The function if was called %d times \n", counter_if_call);
}

void functions_called() {
	printf("The function if was called %d times \n", counter_if_call);
	printf("The function switch was called %d times \n", counter_switch_call);
	printf("The function do while was called %d times \n", counter_doWhile_call);
	printf("The function while was called %d times \n", counter_while_call);
	printf("The function for was called %d times \n", counter_for_call);
}

void if_calls() {
	printf("The function if was called %d times \n", counter_if_call);
}

void switch_calls() {
	printf("The function switch was called %d times \n", counter_switch_call);
}

void do_while_calls() {
	printf("The function do while was called %d times \n", counter_doWhile_call);
}

void while_calls() {
	printf("The function while was called %d times \n", counter_while_call);
}

void for_calls() {
	printf("The function for was called %d times \n", counter_for_call);
}
