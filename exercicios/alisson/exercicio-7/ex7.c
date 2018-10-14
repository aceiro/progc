#include <stdio.h>

int main(){
	float N1=0;
	float N2=0;
	float N3=0;
	float ME=0;
	float ma =0;

		printf("\nDigite a primeira nota do aluno: \n");
		scanf ("%f", &N1);
		printf("\nDigite a segunda nota do aluno: \n");
		scanf("%f", &N2);
		printf("\nDigite a segunda nota do aluno: \n");
		scanf("%f", &N3);
		printf("\nAgora digite a média dos exesrcicios feita pelo o aluno: \n");
		scanf("%f", &ME);
		ma = (N1 + N2*2 + N3*3 + ME)/7;

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