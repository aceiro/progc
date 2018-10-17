#include <stdio.h>
#include <stdlib.h>

int soma (int a, int b){
	int ab = a+b;
	return ab;
}

int main (){
	
	int a;
	int b;
	int c;
	int ab;
	
	printf("Entre com um valor para A \n");
	scanf("%d", &a);
	printf("Entre com um valor para B \n");
	scanf("%d", &b);
	printf("Entre com um valor para C \n");
	scanf("%d", &c);
	
	printf("\n\tOs valores atribuidos foram estes\n");
	printf("A- %d", a);
	printf("\nB- %d", b);
	printf("\nC- %d", c);
			
	ab = soma(a,b);
	
	if (ab < c){
		printf("\n\tA soma entre os valores de A e B é menor que o valor C");
	}
	else if (ab > c){
		printf("\n\t A soma entre os valores de A e B é maior que o valor C");
	}
	else{
		printf("\n\tA soma entre os valores de A e B é igual ao valor de C");
	}
	return 0;
}
