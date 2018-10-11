/*

	Calcular N (entrada via teclado) hipotenusas
	formula hipotenusa ^ 2 = (cateto1 ^ 2) + (cateto2 ^ 2)

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int i;
	int qtde_hipotenusas = 0;
	int cateto1 = 0;
	int cateto2 = 0;
	float hipotenusa = 0;
	
	float acum_hipotenusa = 0;
	double raiz_hipotenusa;

	system("clear");

	printf("\n\n\tVamos Calcular um monte de Hipotenusa?!?!? Bora...");
	printf("\n\n\tEntre com o [ NUMERO ] de hipotenusas: ");
	scanf("%d", &qtde_hipotenusas);

	if (qtde_hipotenusas != 0) {
		for (i = 1; i <= qtde_hipotenusas; ++i) {
			printf("\t\tEntre com o Cateto x [ %d ] :", i);
			scanf("%d", &cateto1);
			printf("\t\tEntre com o Cateto y [ %d ] :", i);
			scanf("%d", &cateto2);
			hipotenusa = ((cateto1 * cateto1) + (cateto2 * cateto2));
			acum_hipotenusa += hipotenusa; 
			
		}
		raiz_hipotenusa = sqrt(acum_hipotenusa);
		printf("\n\n\tA Hipotenusa Total de [ %d ] e igual a [ %4.3f ]\n\n", qtde_hipotenusas, raiz_hipotenusa);
	}
	else
		printf("\n\n\tOK, nao vamos calcular, finalizando...\n\n");

	return 0;
}