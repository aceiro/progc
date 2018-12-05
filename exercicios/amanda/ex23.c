/*23. Loops - Faça um programa em C para somar os números pares < 100 e ao final imprimir o resultado.*/

#include <stdio.h>


int main(){

	int j = 0;
	int r[100];
	int soma = 0;

	for (int i = 0; i <= 99; ++i)
	{
		if(i % 2 == 0){ // se o resto da divisão por 2 for igual a 0 significa que o numero é par
		    r[j] = i; // guarda o i na posicao r[j]
		    soma = soma + r[j]; // soma inicializa em 0,  0 = 0 + 2  /  2 = 2 + 4  /  6 = 6 + 8 ....
	        j++; // contador para as posições
		}
	}
	
	printf("\n\n\tA soma dos números pares menores que 100 é: %d\n", soma); // no final ele imprimi a "ultima" soma.
	
}