#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char placa[9] = " ";
	char ultimo_digito;
	
	printf("Rod�zio municipal de ve�culos de S�o Paulo!");
	printf("\nDigite a placa: ");
	scanf("%s", placa);
	system("cls");
	
	printf("A placa digitada foi: %s", placa);
	ultimo_digito = placa[7];
	
	
	switch (ultimo_digito) {
		case '1':
			printf("\nSeu veiculo tem restri��o de circula��o de segunda feira!");
		break;
		case '2':
			printf("\nSeu veiculo tem restri��o de circula��o de segunda feira!");
		break;			
		case '3':
			printf("\nSeu veiculo tem restri��o de circula��o de ter�a feira!");
		break;
		case '4':
			printf("\nSeu veiculo tem restri��o de circula��o de ter�a feira!");
		break;
		case '5':
			printf("\nSeu veiculo tem restri��o de circula��o de quarta feira!");
		break;
		case '6':
			printf("\nSeu veiculo tem restri��o de circula��o de quarta feira!");
		break;
		case '7':
			printf("\nSeu veiculo tem restri��o de circula��o de quinta feira!");
		break;
		case '8':
			printf("\nSeu veiculo tem restri��o de circula��o de quinta feira!");
		break;
		case '9':
			printf("\nSeu veiculo tem restri��o de circula��o de sexta feira!");
		break;
		case '0':
			printf("\nSeu veiculo tem restri��o de circula��o de sexta feira!");
		break;
		default:
			printf("\nPlaca inv�lida, tente novamente com o padr�o: abc-1234 ");
	}

}
	

	

