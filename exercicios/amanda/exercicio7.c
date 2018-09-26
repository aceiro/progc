#include <stdio.h>

/*
	7 - Condicional – Escreva um programa que leia via teclado 3 notas de um aluno e a média das notas dos exercícios realizados por ele. 
	Calcular a média de aproveitamento, usando a fórmula: 
	MA = (N1 + N2*2 + N3*3 + ME)/7. 
	A partir da média, informar o conceito de acordo com a tabela
*/

int main(){
	float N1, N2, N3, ME, MA;

	printf("Escreva a primeira nota: ");
	scanf("%f", &N1);
	printf("Escreva a segunda nota: ");
	scanf("%f", &N2);
	printf("Escreva a terceira nota: ");
	scanf("%f", &N3);
	

	ME = (N1 + N2 + N3)/3;

	MA = (N1 + N2*2 + N3*3 + ME)/7;

	printf("Sua média de aproveitamento é: %.1f \n ", MA);

	if (MA >= 9)
		printf("Conceito A\n", MA);
	else if (MA >= 7.5 && MA < 9)
		printf("Conceito B\n", MA);
	else if (MA >= 6 && MA < 7.5)
		printf("Conceito C\n", MA);
	else if (MA >= 4 && MA < 6)
		printf("Conceito D\n", MA);
	else
		printf("Conceito E\n", MA);
	
	return 0;


}
