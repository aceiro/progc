

/*EX5. Faça um programa em C que leia uma string e verifique se a mesma é palindroma ou não 
- por exemplo, se ovo é igual a ovo. 
Use funções e a rotina get_line() vista em aula*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_line(char *line, int limit){

int  i = 0;
char c = '\0';

while((i < limit-1) && (c = getchar()) && (c!=EOF) && (c!='\n') )

line[i++] = c;

line[i] = '\0';

}

void main(){

int i, acerto=0;
char palavra[10];

printf("Palavra? ");

get_line(palavra, sizeof(palavra));       

for(i=0; i<strlen(palavra); i++){
if(palavra[strlen(palavra)-i-1]==palavra[i])
    acerto++;
}
if(acerto==strlen(palavra))
	printf("\nPalíndromo\n");
else
   printf("\nNão é um Palíndromo\n");
}