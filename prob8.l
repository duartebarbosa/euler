

%{

#include <stdio.h>


int matrix[1000];
int i = 0;
int flag = 0;

%}

%%

[0-9]		{matrix[i++] = yytext; }

%%


int yywrap(void){

	return 1;
}

int main(){

	printf("char s[1000] = {\n\t\t");

	/* Call the lexer, then quit. */
	yylex();

	printf("}\n");

}
