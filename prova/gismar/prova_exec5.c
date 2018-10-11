/*

	Verificando se uma palavra e Palindroma

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAM_MAX_WORD

void get_line(char *line, int limit){
     int  i = 0;
     char c = '\0';

     while( (i < limit-1) && (c = getchar()) && (c!=EOF) && (c!='\n') )
	     line[i++] = c;

     line[i] = '\0';
}


int main() {
	
	char palavra[TAM_MAX_WORD] = "\0";
	char lixo[100];
    size_t len = 0;
    char *ptr_nome;
    int aux = 0;	

	printf("\n\n\tVamos verificar se uma Palarva e Palidroma"); 
	printf("\n\n\tPalidroma: sao palavras ou frases que podem ser lidas da esquerda para a direita ou da direita para a esquerda");
	
	printf("\n\n\tDigite uma [ PALAVARA ]: ");
	getline(&ptr_nome, &len, stdin);

	strcpy(palavra, ptr_nome);
	strrev(palavra);
	aux = strcmp(ptr_nome, palavra);

	if (aux == 0)
		printf("\n\n\tA PALAVARA [ %s ] nao e [ PALINDROMA ]: ", ptr_nome);

	else
		printf("\n\n\tA PALAVARA [ %s ] e [ PALINDROMA ]: ", ptr_nome);		


	return 0;
}