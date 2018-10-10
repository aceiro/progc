/*

	Programa que retorna Mês do Ano de acordo com numero digitado na faixa de 1 à 12

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int opc;

	system("clear");

	printf("\n\n\tPrograma Meses do Ano");
	printf("\n\n\tEntre com um valor de 1 à 12 e Programa retornará o [ MES ] Correspondente: ");
	scanf("%d", &opc);

	switch(opc) {
		case 1:
			printf("\n\tJaneiro\n\n");
		break;

		case 2:
			printf("\n\tFevereiro\n\n");
		break;

		case 3:
			printf("\n\tMarco\n\n");
		break;

		case 4:
			printf("\n\tAbril\n\n");
		break;

		case 5:
			printf("\n\tMaio\n\n");
		break;

		case 6:
			printf("\n\tJunho\n\n");
		break;

		case 7:
			printf("\n\tJulho\n\n");
		break;

		case 8:
			printf("\n\tAgosto\n\n");
		break;

		case 9:
			printf("\n\tSetembro\n\n");
		break;

		case 10:
			printf("\n\tOutubro\n\n");
		break;

		case 11:
			printf("\n\tNovembro\n\n");
		break;

		case 12:
			printf("\n\tDezembro\n\n");
		break;

		default:
			printf("\n\tVoce entrou com uma informacao errada, finalizando...\n\n");

	}

	return 0;
}