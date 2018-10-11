#include <stdio.h>
int main()
{

	float nm = 0;
	float me = 0;
	float me1 = 0;
	float me2 = 0;
	float ma = 0;
	int provas = 5;
	int w = 1;

while (w < provas+1) {
    printf("Insira a nota da %dº prova.\n",w);
    scanf("%f",&nm);
    nm = nm * w;
    ma = ma + nm; 
    w++;
    }
    printf("Entre com a Média de Notas Do Exercício 1: ");
	scanf("%f", &me1);
	printf("Entre com a Média de Notas Do Exercício 2: ");
	scanf("%f", &me2);
	me = me1 + me2;
    ma = ma + me;  
    ma = ma / 17;  

	if (ma >= 9)
		printf("Média Acumulada é %2.1f\tConceito A\n", ma);
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
		

