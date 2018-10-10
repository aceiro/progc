/*

	MA = [N1 + N2*2 + N3*3 + N4*4 + N5*5 + (ME1 + ME2)]/15


*/


#include <stdio.h>
#include <stdlib.h>


int verifica_nota(float valor){
	if (valor < 0 || valor > 10)
		return 0;
	else
		return 1;
}


int main()
{

	float n1 = 0;
	float n2 = 0;
	float n3 = 0;
	float n4 = 0;
	float n5 = 0;

	float me1 = 0;
	float me2 = 0;
	float ma = 0;

	int confere_nota = 0;
	
	system("clear");

	do {
		printf("Entre com a Nota 1: ");
		scanf("%f", &n1);
		confere_nota = verifica_nota(n1);
	} while (confere_nota != 1);

	do {
		printf("Entre com a Nota 2: ");
		scanf("%f", &n2);
		confere_nota = verifica_nota(n2);
	} while (confere_nota != 1);
		
	do {
		printf("Entre com a Nota 3: ");
		scanf("%f", &n3);
		confere_nota = verifica_nota(n3);
	} while (confere_nota != 1);

	do {
		printf("Entre com a Nota 4: ");
		scanf("%f", &n4);
		confere_nota = verifica_nota(n4);
	} while (confere_nota != 1);

	do {
		printf("Entre com a Nota 5: ");
		scanf("%f", &n5);
		confere_nota = verifica_nota(n5);
	} while (confere_nota != 1);

	do {
		printf("Entre com a Média 1 de Exercícios: ");
		scanf("%f", &me1);
		confere_nota = verifica_nota(me1);
	} while (confere_nota != 1);

		
	do {
		printf("Entre com a Média 2 de Exercícios: ");
		scanf("%f", &me2);
		confere_nota = verifica_nota(me2);
	} while (confere_nota != 1);
	
	ma = (n1 + (n2 * 2) + (n3 * 3) + (n4 * 4) + (n5 * 5) + (me1 + me2))/17;

	if (ma >= 9)
		printf("Média Acumulada é %2.f\tConceito A\n", ma);
	
	else if (ma >= 7.5 && ma < 9)
		printf("Média Acumulada é %2.1f\tConceito B\n", ma);
	
	else if (ma >= 6 && ma < 7.5)
		printf("Média Acumulada é %2.1f\tConceito C\n", ma);
	
	else if (ma >= 4 && ma < 6)
		printf("Média Acumulada é %2.1f\tConceito D\n", ma);
	
	else
		printf("Média Acumulada é %2.1f\tConceito E\n", ma);
	
	return 0;

}
		

