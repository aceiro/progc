#include <stdio.h>

#define CHARMAX 40

int main()
{
	char nome [CHARMAX];
	char end [50];
	char cep [9];
	char tel [13];
	int idade;
	int numFihos;
	char cidade[20];
	float sal;

	printf("Digite seu nome \n");
	fgets(nome, sizeof (nome), stdin);	/*sizeof se refere ao tamanho limite do vetor*/

	printf("Digite seu endereço \n");
	fgets(end, sizeof (end), stdin);

	printf("Digite o CEP de seu endereço \n");
	fgets(cep, sizeof (cep), stdin);

	printf("Digite seu N° de telefone ou celular \n");
	fgets(tel, sizeof (tel), stdin);

	printf("Digite a sua idade \n");
	scanf("%d", &idade);

	printf("Digite a quantidade de filhos, se não possuir, por favor, coloque 0 \n");
	scanf("%d", &numFihos);

	printf("Digite a cidade onde mora \n");
	fgets(cidade, sizeof (cidade), stdin);

	printf("Informe seu salário \n");
	scanf("%f", &sal);

	printf("\n Nome: %s", nome);
	printf("Endereço: %s", end);
	printf("CEP: %s", cep);
	printf("Telefone: %s", tel);
	printf("Idade: %d", idade);
	printf("Quantidade de filhos: %d", numFihos);
	printf("Cidade: %s", cidade);
	printf("Salário: %.2f \n", sal);

	return 0;
}