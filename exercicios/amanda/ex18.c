/*18. Condicional - Faça um programa em C que leia os valores A, B, C e diga se a soma A+B é menor que C*/

#include <stdio.h>

int main()
{
	float A, B, C;

	printf("Dê o valor de A: \n");
	scanf("%f", &A);
	printf("Dê o valor de B: \n");
	scanf("%f", &B);
	printf("Dê o valor de C: \n");
	scanf("%f", &C);

	if(A+B < C){
		printf("A soma de A + B é menor que C.\n");
	} else if {
		printf("A soma de A + B é maior que C.\n");
	} else {
		printf("A soma de A + B é igual a C.\n");
	}
	
	return 0;
}