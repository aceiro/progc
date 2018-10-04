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

void get_line(char *line, int limit){
     int  i = 0;
     char c = '\0';

     while( (i < limit-1) && (c = getchar()) && (c!=EOF) && (c!='\n') ) /* evita problemas de Buffer Overflow pois limita a qtd de chars*/
	     line[i++] = c;

     line[i] = '\0';
}

int main() {
	char nome[MAX_NOME], end[100], cidade[20], cep[10], tel[11], filhos[10];
	int salario, idade;
	size_t len = 0;
	char *ptr_end;

	printf("Qual é o seu nome? ");
    get_line(nome, MAX_NOME);
    
	printf("Qual é o seu Endereço? ");
	getline(&ptr_end, &len, stdin);

	printf("Qual é o seu CEP? ");
	fgets(cep, sizeof(cep), stdin);

	printf("Qual é o seu Telefone? ");
	fgets(tel, sizeof(tel), stdin);

	printf("Qual é a sua idade? ");
	scanf("%i", &idade);

	printf("Qual é a sua cidade? ");
	scanf("%s", cidade);

	printf("Quantos filhos você tem? ");
	fgets(filhos, sizeof(filhos), stdin);

	printf("Qual é o seu salário? ");
	scanf("%i", &salario);
   
	printf("Nome: %s\n", nome);
	printf("Endereço: %s", ptr_end);
	printf("CEP: %s", cep);
	printf("Telefone: %s", tel);
	printf("Idade: %i\n", idade);
	printf("Cidade: %s\n", cidade);
	printf("Filhos: %s", filhos );
	printf("Salário: %i\n", salario);

	

	return 0;
}