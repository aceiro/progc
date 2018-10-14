
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

int main(){
	int i = 100;
	int cont = 1;

printf("Imprimindo valores de 100 a 1( forma decrescente) com loop For:\n");
		for (i; i >= cont; i--)
			printf("%d\n", i );

	printf("\n");

printf("Imprimindo valores de 100 a 1 com loop While:\n");
		
		i = 100;
		cont = 1;
		while (i >= cont){
		printf("%d\n", i);
		i--;
	}

	printf("\n");

printf("Imprimindo valores de 100 a 1 com loop Do-While\n");
	
	i = 100;
	cont = 1;
	do{
		printf("%d\n", i);
		i--;
	} while (i >= cont);

	printf("\n");


	return 0;
}