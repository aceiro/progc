#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	char nome[50]= "";
	char endereco[150]= "";
	char cep[10]= "";
	char cidade[25]="";
	char telefone[15]= "";
	int idade = 0 ;
	int filhos = 0;
	float salario = 0;
	
		printf("Cadastro\n\n");
		system("pause");
		
	printf("\nDigite seu nome: ");
	fgets(nome, sizeof(nome), stdin);
    
	printf("\nDigite seu endereço: ");
	fgets(endereco, sizeof(endereco), stdin);
	
	printf("\nDigite seu cep: ");
	fgets(cep, sizeof(cep), stdin);
	
	printf("\nDigite seu Cidade: ");
	fgets(cidade, sizeof(cidade), stdin);
	
	printf("\nDigite seu telefone: ");
	fgets(telefone, sizeof(telefone), stdin);
	
	printf("\nDigite sua idade: ");
	scanf("%d", &idade);
	
	printf("\nDigite a quantidade de filhos: ");
	scanf("%d", &filhos);
	
	printf("\nDigite o salário: ");
	scanf("%f", &salario);
	
	system("cls");
	printf("O cadastro foi realizado com os seguintes dados: \n\n");
	printf("Nome: %s\n", nome);
	printf("Endereço: %s\n", endereco);
	printf("CEP: %s\n", cep);
	printf("Cidade: %s\n", cidade);
	printf("Telefone: %s\n", telefone);
	printf("Idade: %d\n", idade);
	printf("Filhos: %d\n", filhos);
	printf("Salário: R$ %.2f\n", salario);
}
