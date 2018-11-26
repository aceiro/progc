#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char placa[9] = " ";
	char ultimo_digito;
	
	printf("Rodízio municipal de veículos de São Paulo!");
	printf("\nDigite a placa: ");
	scanf("%s", placa);
	system("cls");
	
	printf("A placa digitada foi: %s", placa);
	ultimo_digito = placa[7];
	
	
	switch (ultimo_digito) {
		case '1':
			printf("\nSeu veiculo tem restrição de circulação de segunda feira!");
		break;
		case '2':
			printf("\nSeu veiculo tem restrição de circulação de segunda feira!");
		break;			
		case '3':
			printf("\nSeu veiculo tem restrição de circulação de terça feira!");
		break;
		case '4':
			printf("\nSeu veiculo tem restrição de circulação de terça feira!");
		break;
		case '5':
			printf("\nSeu veiculo tem restrição de circulação de quarta feira!");
		break;
		case '6':
			printf("\nSeu veiculo tem restrição de circulação de quarta feira!");
		break;
		case '7':
			printf("\nSeu veiculo tem restrição de circulação de quinta feira!");
		break;
		case '8':
			printf("\nSeu veiculo tem restrição de circulação de quinta feira!");
		break;
		case '9':
			printf("\nSeu veiculo tem restrição de circulação de sexta feira!");
		break;
		case '0':
			printf("\nSeu veiculo tem restrição de circulação de sexta feira!");
		break;
		default:
			printf("\nPlaca inválida, tente novamente com o padrão: abc-1234 ");
	}

}
	

	

