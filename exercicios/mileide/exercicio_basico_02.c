#include <stdio.h>
#include <locale.h> //biblioteca de idiomas - corrige problemas de acentua��o

int main(){
	int a = 3; // int: armazena valores num�ricos inteiros.
	float b = 4.5; //float: armazena n�meros com ponto flutuante (reais) com precis�o simples.
	double c = 5.25; //double: armazena n�meros com ponto flutuante, com precis�o dupla, ou seja normalmente possui o dobro da capacidade de uma vari�vel do tipo float.
	float sum;
	
	sum = a + b + c;
	setlocale(LC_ALL,"Portuguese");
	printf("A soma � : %6.2f", sum); // Para a impress�o de uma vari�vel real � necess�rio o uso de %f. No exemplo, formatado para %6.2f (especifica que se quer imprimir um float com 2 casas decimais e com um tamanho total de  6 caracteres.
}
