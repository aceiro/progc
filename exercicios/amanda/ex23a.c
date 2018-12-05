/*23. Loops e Funções
Faça um programa em C para calcular a série Fibonacci até o N-ésimo termo.
A série tem a seguinte forma: 1,1,2,3,5,8,13,21,34..*/

#include <stdio.h>

int main(){

	int soma = 0;
	int f1 = 0, f2 = 1, f3; // o primeiro termo sempre será 0 e o segundo sempre será 1. o terceiro é a soma do primeiro com o segundo (0 + 1)
	
	printf("A série Fibonacci até o N-ésimo termo é "); // chamada para imprimir o séria fibonacci

	for (int i = 0; i < 10; ++i) // 9 termos ( 0 - 9)
	{
		if( i == 0){ // quando i estiver na primeira posição ele sempre será 0
			printf("%d ", f1);
		} else if (i == 1){ // quando i estiver na segunda posição ele sempre será 1
			printf("%d ", f2);
		} else {
		f3 = f1 + f2; // o f3 é o resultado da soma de f1 com f2
		f1 = f2; // dps da soma troca o valor de f1 vira f2
		f2 = f3; // e o valor de f2 passa a ser o f3
		printf("%d ", f3); // f3 é o resultado que eu busco que é f1 + f2

		}
	}
}