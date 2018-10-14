#include <stdio.h>

int main ()
{
	int valor;
	
	printf("\n\nCONSULTA RODIZIO MUNICIPAL DA REGIÃO METROPOLOTANA DE SÃO PAULO:\n\n");
	printf("\nComo Funciona:\n De acordo com o final de placa e dia da semana, os veículos não poderão circular  \n nas ruas e avenidas internas ao chamado mini-anel viário, inclusive, das 7 às 10 horas \n e das 17 às 20 horas.\n");
	
	printf("\nDigite o numero do dia da semana desejado: \n (2) - Segunda \n (3) - Terça \n (4) - Quarta \n (5) - Quinta \n (6) - Sexta \n ");
	scanf("%d", &valor);
	
	switch ( valor )
	{
		
		case 2 :
		printf ("Segunda\n\nO rodizio deste dia é somente para os veiculos com o final da placa 1 e 2. \n ");
		break;
		
		case 3 :
		printf ("Terça\n\nO rodizio deste dia é somente para os veiculos com o final da placa 3 e 4.\n");
		break;
		
		case 4 :
		printf ("Quarta\n\nO rodizio deste dia é somente para os veiculos com o final da placa 5 e 6.\n ");
		break;
		
		case 5 :
		printf ("Quinta\n\nO rodizio deste dia é somente para os veiculos com o final da placa 7 e 8. \n");
		break;
		
		case 6 :
		printf ("Sexta\n\nO rodizio deste dia é somente para os veiculos com o final da placa 9 e 0.\n");
		break;
		
		default :
		printf ("Valor invalido!\n");
	}
	

	return 0;
}