%{
#include <stdio.h>
#include "ast.h"
#include "SemanticAnalizer.h"

struct symTableEntry sym_table_entry[100];
int contor = 0;
int scope_index;

Node* astRoot = NULL;
int yyerror(char * s);
extern int yylex(void);

typedef struct AST{ // Abstract Sintax Tree AST
	char lexeme[100]; //a basic lexical unit of a language consisting of one word or several words, the elements of which do not separately convey the meaning of the whole.
	int numberChild; 
	struct AST **child;
}AST_node;

struct AST* make_for_node(char* root, AST_node* child1, AST_node* child2, AST_node* child3, AST_node* child4);
struct AST * make_node(char*, AST_node*, AST_node*);
struct AST* make_leaf(char* root);
void AST_print(struct AST *t);

%}
%union{
	
	Node	*node;
	char* strings;
	int intVal;
}
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
%token <intVal> CONSTANT
%token STRING_LITERAL 
%token ASSIGN 
%token ADD 
%token SUBSTRACT  
%token <strings> IDENTIFIER
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
%token DOTS

%type <node> program_unit
%type <node> declaration
%type <node> function-definition
%type <node> type-specifier
%type <node> parameter-list
%type <node> parameter-declaration
%type <node> declaration-specifier
%type <node> expression
%type <node> compound-statement
%type <node> local_declaration_list
%type <node> instructions_list
%type <node> statement
%type <node> selection-statement
%type <node> jump-statement
%type <node> iteration-statement


%start program_unit
%%
program_unit
	: declaration	{ $$ = createProgramUnitNode($1); astRoot = $$;}
	| program_unit declaration	{ $$ = $1; addLinkToList($$, $2);}
	;

declaration
	: declaration-specifier init-declarator-list END_OF_INSTRUCTION 
	| declaration-specifier END_OF_INSTRUCTION {$$ = createDeclarationNode($1);}
	| function-definition { $$ = createDeclarationNode($1);}
	| INCLUDE_LIBRARY
	| INCLUDE_HEADER
	| comment_sequence
	| selection-statement { $$ = createDeclarationNode($1);}
	| iteration-statement { $$ = createDeclarationNode($1);}
	;

comment_sequence
	: LINE_COMMENT STRING_LITERAL
	| LINE_COMMENT declaration-specifier
	| LINE_COMMENT function-definition
	| LINE_COMMENT INCLUDE_LIBRARY
	| LINE_COMMENT INCLUDE_HEADER
	| LINE_COMMENT
	| START_COMMENT END_COMMENT
	| START_COMMENT STRING_LITERAL END_COMMENT
	| START_COMMENT function-definition END_COMMENT
	| START_COMMENT INCLUDE_LIBRARY END_COMMENT
	| START_COMMENT INCLUDE_HEADER END_COMMENT
	;

primary_expression
	: IDENTIFIER 
	| CONSTANT  
	| STRING_LITERAL 
	| LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET 
	;

postfix-expression
	: primary_expression 
	| postfix-expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  
	| postfix-expression LEFT_ROUND_BRACKET argument-expression-list RIGHT_ROUND_BRACKET
	| postfix-expression LEFT_ROUND_BRACKET RIGHT_ROUND_BRACKET
	| postfix-expression STRUCTURE_REFERENCE IDENTIFIER  
	| postfix-expression STRUCTURE_DEFERENCE IDENTIFIER  
	| postfix-expression INCREMENT IDENTIFIER  
	| postfix-expression DECREMENT IDENTIFIER  
	| LEFT_ROUND_BRACKET type-name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET  
	| LEFT_ROUND_BRACKET type-name RIGHT_ROUND_BRACKET LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET  
	;

argument-expression-list
	: assignment-expression 
	| argument-expression-list COMMA assignment-expression 
	;
	
unary-expression
	: postfix-expression 
	| INCREMENT unary-expression 
	| DECREMENT unary-expression 
	| unary-operator cast-expression  
	| SIZEOF unary-expression  
	| SIZEOF LEFT_ROUND_BRACKET type-name RIGHT_ROUND_BRACKET   
	;
	
unary-operator
	: BITWISE_AND
	| MULTIPLY
	| ADD 
	| SUBSTRACT 
	| BITWISE_NOT
	| LOGICAL_NEGATION  
	;
	
cast-expression
	: unary-expression
	| LEFT_ROUND_BRACKET type-name RIGHT_ROUND_BRACKET cast-expression
	;

multiplicative-expression
	: cast-expression 
	| multiplicative-expression MULTIPLY cast-expression
	| multiplicative-expression DIVIDE cast-expression
	| multiplicative-expression MODULO cast-expression  
	;

additive-expression
	: multiplicative-expression
	| additive-expression ADD multiplicative-expression
	| additive-expression SUBSTRACT multiplicative-expression
	;

shift-expression
	: additive-expression
	| shift-expression BITWISE_LEFT_SHIFT additive-expression
	| shift-expression BITWISE_RIGHT_SHIFT additive-expression
	;

relational-expression
	: shift-expression
	| relational-expression LESS_THAN shift-expression
	| relational-expression GREATER_THAN shift-expression
	| relational-expression LESS_THAN_OR_EQUAL_TO shift-expression
	| relational-expression GREATER_THAN_OR_EQUAL_TO shift-expression
	;

equality-expression
	: relational-expression
	| equality-expression EQUAL_TO relational-expression
	| equality-expression NOT_EQUAL_TO relational-expression
	;

AND-expression
	: equality-expression
	| AND-expression BITWISE_AND equality-expression
	;

exclusive-OR-expression
	: AND-expression
	| exclusive-OR-expression BITWISE_XOR AND-expression
	;

inclusive-OR-expression
	: exclusive-OR-expression
	| inclusive-OR-expression BITWISE_OR exclusive-OR-expression
	;

logical-AND-expression
	: inclusive-OR-expression
	| logical-AND-expression LOGICAL_AND inclusive-OR-expression
	;

logical-OR-expression
	: logical-AND-expression
	| logical-OR-expression LOGICAL_OR logical-AND-expression
	;

conditional-expression
	: logical-OR-expression
	| logical-OR-expression TERNARY_IF_CONDITION expression TERNARY_ELSE_CONDITION conditional-expression
	;

assignment-expression
	: IDENTIFIER EQUAL_TO CONSTANT
	| conditional-expression
	| unary-expression assignment-operator assignment-expression
	;

assignment-operator
	: ASSIGN
	| ASSIGNMENT_BY_PRODUCT
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

expression
	: IDENTIFIER LESS_THAN CONSTANT {$$ = createExpressionStatement($1, $3);}
	| IDENTIFIER INCREMENT {$$ = createExpressionStatement($1, NULL);}
	| assignment-expression {$$ = createExpressionStatement(NULL, NULL);}
	| expression COMMA assignment-expression
	;

constant-expression
	: conditional-expression
	;

declaration-specifier
	: storage-class-specifier declaration-specifier
	| storage-class-specifier
	| type-specifier declaration-specifier
	| type-specifier 
	| type-qualifier declaration-specifier
	| type-qualifier
	| function-specifier declaration-specifier
	| function-specifier
	| type-specifier IDENTIFIER ASSIGN CONSTANT { $$ = createVarDeclaration($1, $2, $4);}
	| type-specifier IDENTIFIER { $$ = createVarDeclaration($1, $2, 0);}
	| IDENTIFIER ASSIGN IDENTIFIER LEFT_ROUND_BRACKET RIGHT_ROUND_BRACKET 
	| IDENTIFIER ASSIGN CONSTANT 
	| IDENTIFIER ASSIGN IDENTIFIER LEFT_ROUND_BRACKET STRING_LITERAL COMMA STRING_LITERAL RIGHT_ROUND_BRACKET
	| function-definition
	| storage-class-specifier type-specifier IDENTIFIER
	| storage-class-specifier type-specifier IDENTIFIER LEFT_ROUND_BRACKET type-specifier RIGHT_ROUND_BRACKET
	| storage-class-specifier IDENTIFIER pointer
	| type-specifier pointer
	;

init-declarator-list
	: init-declarator
	| init-declarator-list COMMA init-declarator
	;

init-declarator
	: declarator 
	| declarator ASSIGN initializer
	;

storage-class-specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type-specifier
	: VOID {$$ = createTypeSpecifier("VOID");}
	| CHAR {$$ = createTypeSpecifier("CHAR");}
	| SHORT {$$ = createTypeSpecifier("SHORT");}
	| INT {$$ = createTypeSpecifier("INT");}
	| LONG {$$ = createTypeSpecifier("LONG");}
	| FLOAT {$$ = createTypeSpecifier("FLOAT");}
	| DOUBLE {$$ = createTypeSpecifier("DOUBLE");}
	| SIGNED {$$ = createTypeSpecifier("SIGNED");}
	| UNSIGNED {$$ = createTypeSpecifier("UNSIGNED");}
	| _BOOL {$$ = createTypeSpecifier("_BOOL");}
	| _COMPLEX {$$ = createTypeSpecifier("_COMPLEX");}
	| _IMAGINARY {$$ = createTypeSpecifier("_IMAGINARY");}
	| struct-or-union-specifier
	| enum-specifier
	| typedef-name
	;

struct-or-union-specifier
	: struct-or-union IDENTIFIER LEFT_CURLY_BRACKET struct-declaration-list RIGHT_CURLY_BRACKET
	| struct-or-union LEFT_CURLY_BRACKET struct-declaration-list RIGHT_CURLY_BRACKET
	| struct-or-union IDENTIFIER
	;

struct-or-union
	: STRUCT
	| UNION
	;

struct-declaration-list
	: struct-declaration
	| struct-declaration-list struct-declaration
	;

struct-declaration
	: specifier-qualifier-list struct-declarator-list END_OF_INSTRUCTION
	;

specifier-qualifier-list
	: type-specifier specifier-qualifier-list
	| type-specifier
	| type-qualifier specifier-qualifier-list
	| type-qualifier
	;

struct-declarator-list
	: struct-declarator
	| struct-declarator-list COMMA struct-declarator
	;

struct-declarator
	: declarator
	| declarator TERNARY_ELSE_CONDITION constant-expression
	| TERNARY_ELSE_CONDITION constant-expression
	;

enum-specifier
	: ENUM IDENTIFIER LEFT_CURLY_BRACKET enumerator-list RIGHT_CURLY_BRACKET
	| ENUM LEFT_CURLY_BRACKET enumerator-list RIGHT_CURLY_BRACKET
	| ENUM IDENTIFIER LEFT_CURLY_BRACKET enumerator-list COMMA RIGHT_CURLY_BRACKET
	| ENUM LEFT_CURLY_BRACKET enumerator-list COMMA RIGHT_CURLY_BRACKET
	| ENUM IDENTIFIER
	;

enumerator-list
	: enumerator
	| enumerator-list COMMA enumerator
	;

enumerator
	: enumeration-constant
	| enumeration-constant ASSIGN constant-expression
	;

enumeration-constant
	: IDENTIFIER
	;

type-qualifier
	: CONST
	| RESTRICT
	| VOLATILE
	;

function-specifier
	: INLINE
	;

declarator
	: pointer direct-declarator
	| direct-declarator
	;

direct-declarator
	: IDENTIFIER
	| LEFT_ROUND_BRACKET declarator RIGHT_ROUND_BRACKET
	| direct-declarator LEFT_SQUARE_BRACKET assignment-expression RIGHT_SQUARE_BRACKET
	| direct-declarator LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET
	| direct-declarator LEFT_SQUARE_BRACKET MULTIPLY RIGHT_SQUARE_BRACKET
	| direct-declarator LEFT_ROUND_BRACKET parameter-type-list RIGHT_ROUND_BRACKET
	| direct-declarator LEFT_ROUND_BRACKET identifier-list RIGHT_ROUND_BRACKET
	| direct-declarator LEFT_ROUND_BRACKET RIGHT_ROUND_BRACKET
	;

pointer
	: MULTIPLY type-qualifier-list
	| MULTIPLY
	| MULTIPLY type-qualifier-list pointer
	| MULTIPLY pointer
	| MULTIPLY IDENTIFIER
	| MULTIPLY IDENTIFIER LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET ASSIGN compound-statement
	| MULTIPLY IDENTIFIER LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET ASSIGN LEFT_CURLY_BRACKET STRING_LITERAL RIGHT_CURLY_BRACKET
	| MULTIPLY IDENTIFIER LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET ASSIGN LEFT_CURLY_BRACKET pointer-vector-definition RIGHT_CURLY_BRACKET
	;

pointer-vector-definition
	: STRING_LITERAL COMMA pointer-vector-definition
	| STRING_LITERAL
	|
	;

type-qualifier-list
	: type-qualifier
	| type-qualifier-list type-qualifier
	;

parameter-type-list
	: parameter-list
	| parameter-list COMMA DOTS
	;

parameter-list
	: parameter-declaration { $$ = createListNode("ParametersList", $1);}
	| parameter-list COMMA parameter-declaration
	;

parameter-declaration
        : type-specifier IDENTIFIER { $$ = createVarDeclaration($1, $2, 0);}
	| declaration-specifier declarator
	| declaration-specifier abstract-declarator
	| declaration-specifier 
	;

identifier-list
	: IDENTIFIER
	| identifier-list COMMA IDENTIFIER
	;

type-name
	: specifier-qualifier-list abstract-declarator
	| specifier-qualifier-list
	;

abstract-declarator
	: pointer
	| pointer direct-abstract-declarator
	| direct-abstract-declarator
	;

direct-abstract-declarator
	: LEFT_ROUND_BRACKET abstract-declarator RIGHT_ROUND_BRACKET
	| direct-abstract-declarator LEFT_SQUARE_BRACKET assignment-expression RIGHT_SQUARE_BRACKET
	| LEFT_SQUARE_BRACKET assignment-expression RIGHT_SQUARE_BRACKET
	| direct-abstract-declarator LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET
	| LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET
	| direct-abstract-declarator LEFT_SQUARE_BRACKET MULTIPLY RIGHT_SQUARE_BRACKET
	| direct-abstract-declarator LEFT_ROUND_BRACKET parameter-type-list RIGHT_ROUND_BRACKET
	| LEFT_ROUND_BRACKET parameter-type-list RIGHT_ROUND_BRACKET
	| direct-abstract-declarator LEFT_ROUND_BRACKET RIGHT_ROUND_BRACKET
	| LEFT_ROUND_BRACKET RIGHT_ROUND_BRACKET
	;

typedef-name
	: IDENTIFIER
	;

initializer
	: assignment-expression
	| LEFT_CURLY_BRACKET initializer-list RIGHT_CURLY_BRACKET
	| LEFT_CURLY_BRACKET initializer-list COMMA RIGHT_CURLY_BRACKET
	;

initializer-list
	: designation initializer
	| initializer
	| initializer-list COMMA designation initializer
	| initializer-list COMMA initializer
	;

designation
	: designator-list ASSIGN
	;

designator-list
	: designator
	| designator-list designator
	;

designator
	: LEFT_SQUARE_BRACKET constant-expression RIGHT_SQUARE_BRACKET
	| STRUCTURE_REFERENCE IDENTIFIER
	;

statement
	: labeled-statement
	| compound-statement
	| expression-statement
	| selection-statement
	| iteration-statement
	| jump-statement
	;

labeled-statement
	: IDENTIFIER TERNARY_ELSE_CONDITION statement
	| CASE constant-expression TERNARY_ELSE_CONDITION statement
	| DEFAULT TERNARY_ELSE_CONDITION statement
	;

compound-statement
	: LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET {$$ = createCompoundStatement(NULL, NULL);}
	| LEFT_CURLY_BRACKET local_declaration_list RIGHT_CURLY_BRACKET  {$$ = createCompoundStatement($2, NULL);}
	| LEFT_CURLY_BRACKET local_declaration_list instructions_list RIGHT_CURLY_BRACKET  {$$ = createCompoundStatement($2, $3);}
	;

local_declaration_list
	: declaration { $$ = createListNode("LocalDeclarations", $1); }
	| local_declaration_list declaration {	$$ = $1; addLinkToList($$, $2);}
	;

instructions_list
	: statement {$$ = createListNode("InstructionsList", $1);}
	| instructions_list statement {	$$ = $1; addLinkToList($$, $2);}
	;

expression-statement
	: expression END_OF_INSTRUCTION
	| END_OF_INSTRUCTION
	;

selection-statement
	: IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement { $$ = createIfStatement($3, $5, NULL);}
	| IF LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement ELSE statement { $$ = createIfStatement($3, $5, $7);}
	| SWITCH LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement { $$ = createSwitchStatement($3, $5);}
	;

iteration-statement
	: WHILE LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET statement { $$ = createWhileStatement($3, $5, NULL);}
	| DO statement WHILE LEFT_ROUND_BRACKET expression RIGHT_ROUND_BRACKET { $$ = createDoWhileStatement($2, $5, NULL);}
	| FOR LEFT_ROUND_BRACKET expression END_OF_INSTRUCTION expression END_OF_INSTRUCTION expression RIGHT_ROUND_BRACKET statement
	| FOR LEFT_ROUND_BRACKET expression END_OF_INSTRUCTION expression END_OF_INSTRUCTION RIGHT_ROUND_BRACKET statement
	| FOR LEFT_ROUND_BRACKET expression END_OF_INSTRUCTION END_OF_INSTRUCTION expression RIGHT_ROUND_BRACKET statement
	| FOR LEFT_ROUND_BRACKET expression END_OF_INSTRUCTION END_OF_INSTRUCTION RIGHT_ROUND_BRACKET statement
	| FOR LEFT_ROUND_BRACKET END_OF_INSTRUCTION expression END_OF_INSTRUCTION RIGHT_ROUND_BRACKET statement
	| FOR LEFT_ROUND_BRACKET END_OF_INSTRUCTION END_OF_INSTRUCTION expression RIGHT_ROUND_BRACKET statement
	| FOR LEFT_ROUND_BRACKET END_OF_INSTRUCTION END_OF_INSTRUCTION RIGHT_ROUND_BRACKET statement
	| FOR LEFT_ROUND_BRACKET declaration END_OF_INSTRUCTION expression END_OF_INSTRUCTION expression RIGHT_ROUND_BRACKET statement { $$ = createForStatement($3, $5, $7, $9, NULL);}
	| FOR LEFT_ROUND_BRACKET declaration END_OF_INSTRUCTION declaration END_OF_INSTRUCTION RIGHT_ROUND_BRACKET statement
	| FOR LEFT_ROUND_BRACKET declaration END_OF_INSTRUCTION END_OF_INSTRUCTION declaration RIGHT_ROUND_BRACKET statement
	| FOR LEFT_ROUND_BRACKET declaration END_OF_INSTRUCTION END_OF_INSTRUCTION RIGHT_ROUND_BRACKET statement { $$ = createForStatement($3, NULL, $7, NULL, NULL);}
	| FOR LEFT_ROUND_BRACKET END_OF_INSTRUCTION declaration END_OF_INSTRUCTION RIGHT_ROUND_BRACKET statement
	;

jump-statement
	: GOTO IDENTIFIER END_OF_INSTRUCTION
	| CONTINUE END_OF_INSTRUCTION
	| BREAK END_OF_INSTRUCTION
	| RETURN expression END_OF_INSTRUCTION
	| RETURN CONSTANT END_OF_INSTRUCTION
	| RETURN END_OF_INSTRUCTION
	;

translation-unit
	: external-declaration
	| translation-unit external-declaration
	;

external-declaration
	: function-definition
	| declaration
	;

declaration-list
	: declaration
	| declaration-list declaration
	;

function-definition
	: declaration-specifier declarator declaration-list compound-statement
	| declaration-specifier declarator compound-statement
	| type-specifier IDENTIFIER LEFT_ROUND_BRACKET RIGHT_ROUND_BRACKET compound-statement 
	| type-specifier IDENTIFIER LEFT_ROUND_BRACKET declaration-specifier RIGHT_ROUND_BRACKET compound-statement { $$ = createFunctionDeclarationNode($1, $2, $4, $6);  } 
	| type-specifier IDENTIFIER LEFT_ROUND_BRACKET declaration-specifier RIGHT_ROUND_BRACKET compound-statement { $$ = createFunctionDeclarationNode($1, $2, $4, $6);  } 
	;

%%

int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  

//sym_table_entry

void update_sym_table(char* type, char* name, int line, int scope){ //updateaza tabelul de simboluri cu intrarile citite
	strcpy(sym_table_entry[contor].symbolName,name);

	if(strcmp(type,"int")==0){
		strcpy(sym_table_entry[contor].dataType,type);
		sym_table_entry[contor].symbolType=4; //cati biti are tipul de date
	}
	else if(strcmp(type,"float")==0){
		strcpy(sym_table_entry[contor].type,typ);
		sym_table_entry[contor].symbolType=8;
	}
	else if(strcmp(typ,"char")==0){
		strcpy(sym_table_entry[contor].type,typ);
		sym_table_entry[contor].symbolType=1;	
	}
	sym_table_entry[contor].contextName=line;
	sym_table_entry[contor].symbolScope=scope;
	contor++;
}

void print_sym_table(){ //afiseaza tabelul de simboluri
	int i;
	printf("\n\nSymbol Table: \n");
	for(i=0;i<contor;i++){
		printf("<%s, %s, %d, %d, %s> \n",sym_table_entry[i].symbolName, sym_table_entry[i].dataType, sym_table_entry[i].symbolType,sym_table_entry[i].symbolScope,sym_table_entry[i].contextName);
	}
}

int look_up_sym_table(char* name){ //verifica variabile nedeclarate
	int i; 
	for(i=0;i<contor;i++){
		if(strcmp(sym_table_entry[i].symbolName,name)==0){
			int scop=sym_table_entry[i].IdentifierScope;
			int flag=0;
			int zero_contor=0;
			int j=scope_ind-1;
			while(j>=0){
				if(scope[j]==0)
					zero_contor++;
				else if(scope[j]!=0 && zero_contor>0)
					zero_contor--;
				else if(scope[j]!=0 && zero_contor==0)	{
					if(scope[j]==scope){
						flag=1;
						return 1;
					}
				}
				j--;
			}
		}
	}
	return 0;
}

int look_up_sym_table_dec(char* name, int scope){ //verifica pentru redeclarari
	int i; 
	for(i=0;i<contor;i++){
		if(strcmp(sym_table_entry[i].symbolName,name)==0 && sym_table_entry[i].scope==scop){
			return 1;
		}
	}
	return 0;
}

int get_scope(){ //A scope in any programming is a region of the program where a defined variable can have its existence and beyond that variable it cannot be accessed.
	int i=scope_index-1;
	int zero_contor=0;
	int flag=1;
	while(flag && i>0){
		if(scope[i]!=0)
			zero_contor--;
		else
			zero_contor++;
		if(zero_contor==0){
			i--;
			flag=0;
			break;
		}
		i--;
	}
	return scope[i];
}
