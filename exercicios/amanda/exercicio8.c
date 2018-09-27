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
#define MAX_NOME 50

int main() {
	char nome[MAX_NOME], end[100], cidade[20];
	int cep, tel, idade, filhos, salario;

	printf("Qual é o seu nome?\n");
	scanf("%s", nome); /*sem o &*/

	printf("Qual é o seu Endereço?\n");
	scanf("%s", end);

	printf("Qual é a sua cidade?\n");
	scanf("%s", cidade);
	

	printf("Nome: %s\n", nome);
	printf("Endereço: %s\n", end);
	printf("Cidade: %s\n", cidade);
	

	return 0;
}