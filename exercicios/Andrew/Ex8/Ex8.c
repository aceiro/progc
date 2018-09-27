#include "stdio.h"
#define MAX_NOME 50

char storage [8];
char resp[MAX_NOME];


char primeironome() {
    printf("Qual o seu nome completo?\n");
    scanf("%s", resp);
    printf("%s", resp);
//    scanf("%c",&resp);
//    storage[0] = resp;

}

int main(){
primeironome();
printf("teste\n");
	return 0;
}