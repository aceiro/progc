#include <stdio.h>

#define VERDADEIRO 1
#define FALSO 0

/*
	7 - Condicional – Escreva um programa que leia via teclado 3 notas de um aluno e a média das notas dos exercícios realizados por ele. 
	Calcular a média de aproveitamento, usando a fórmula: 
	MA = (N1 + N2*2 + N3*3 + ME)/7. 
	A partir da média, informar o conceito de acordo com a tabela
*/
int verifica_nota(float nota){
	if ( nota>=0 )
		return VERDADEIRO; /* retorna 1 como sendo verdadeiro */

	return FALSO;

}

float media (float N1, float N2, float N3, float ME){
	float md = (N1 + N2*2 + N3*3 + ME)/7;
	return md;
}

int main(){
	float N1, N2, N3, ME, MA;

	printf("Escreva a primeira nota: ");
	scanf("%f", &N1);

	if ( verifica_nota(N1) == FALSO){
		printf("Nota inválida, deve ser maior ou igual a zero!\n");
		return -1;
	}

	printf("Escreva a segunda nota: ");
	scanf("%f", &N2);

	if ( verifica_nota(N2) == 0){
		printf("Nota inválida, deve ser maior ou igual a zero!\n");
		return -1;
	}

	printf("Escreva a terceira nota: ");
	scanf("%f", &N3);

	if ( verifica_nota(N3) == 0){
		printf("Nota inválida, deve ser maior ou igual a zero!\n");
		return -1;
	}
	

	ME = (N1 + N2 + N3)/3;

	MA = media(N1,N2,N3,ME);

	printf("Sua média de aproveitamento é: %.1f \n ", MA);

	if (MA >= 9) {
		printf("Conceito A %.1f\n", MA);
	} else if (MA >= 7.5) && (MA < 9) {
		printf("Conceito B %.1f\n", MA);
	} else if (MA >= 6) && (MA < 7.5) {
		printf("Conceito C %.1f\n", MA);
	} else if (MA >= 4) && (MA < 6) {
		printf("Conceito D %.1f\n", MA);
	} else {
		printf("Conceito E %.1f\n", MA);
	}
	
	return 0;


}
