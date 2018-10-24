/*17. Condicional - O preço de um automóvel é calculado pela soma do preço de fábrica com o preço dos impostos
 (45% do preço da fábrica) e a porcentagem do revendedor (28% do preço da fábrica).

 Faça um programa em C que leia o nome do automóvel e o preço da fábrica e imprima o nome do automóvel e o preço final*/

#include <stdio.h>

int main(){

	float preco_fabrica, preco_final;
	char automovel[10];

	printf("Qual é o nome do automóvel?\n");
	scanf("%s", automovel);
	printf("Qual é o preço da fábrica?\n");
	scanf("%f", &preco_fabrica);

	preco_final = (preco_fabrica * 1.28) + (preco_fabrica * 1.45);

	printf("O Preço Final do automóvel %s é: %.2f\n", automovel, preco_final);



}