#include <stdio.h>

/* Strings
Faça um programa em C para ler os seguintes dados via teclado de uma pessoa:
-Nome
-Endereço
-Cep
-Telefone
-Idade
-Numero de Filhos
-Cidade
-Salário
*/

int main() {
	char nome[31], end, cidade;
	int cep, tel, idade, filhos, salario;

	printf("Qual é o seu nome?\n");
	scanf("%s", nome);
	printf("Qual é o seu Endereço?\n");
	scanf(" %d", &end);
	printf("Qual é o seu CEP?\n");
	scanf("%i", &cep);
	printf("Qual é o seu número de Telefone?\n");
	scanf("%i", &tel);

	printf("Nome: %s\n", nome);
	printf("Endereço: %d\n", end);
	printf("CEP: %i\n", cep );
	printf("Endereço: %i\n", tel );

	return 0;
}