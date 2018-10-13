#include <stdio.h>
#include <locale.h> //biblioteca de idiomas - corrige problemas de acentuação

int main(){
	int a = 3; // int: armazena valores numéricos inteiros.
	float b = 4.5; //float: armazena números com ponto flutuante (reais) com precisão simples.
	double c = 5.25; //double: armazena números com ponto flutuante, com precisão dupla, ou seja normalmente possui o dobro da capacidade de uma variável do tipo float.
	float sum;
	
	sum = a + b + c;
	setlocale(LC_ALL,"Portuguese");
	printf("A soma é : %6.2f", sum); // Para a impressão de uma variável real é necessário o uso de %f. No exemplo, formatado para %6.2f (especifica que se quer imprimir um float com 2 casas decimais e com um tamanho total de  6 caracteres.
}
