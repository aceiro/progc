#include <stdio.h>

#define VERDADEIRO 1
#define FALSO 0

/*
	Escreva um programa que leia via teclado 5 notas de um aluno e duas médias de notas dos
	exercicios realizados por ele. Calcular a média de aproveitamento, usando a fórmula:
	MA = [N1 + N2*2 + N3*3 + N4*4 + N5*5 + (ME1 + ME2)]/15
*/
int verifica_nota(float nota){
	if ( nota >=0 )
		return VERDADEIRO; /* retorna 1 como sendo verdadeiro */

	return FALSO;

}

float media (float N1, float N2, float N3, float N4, float N5, float ME1, float ME2) {
	float md = (N1 + N2*2 + N3*3 + N4*4 + N5*5 + (ME1 + ME2)/2)/15;
	return md;
}

int main(){
	float N1, N2, N3, N4, N5, ME1, ME2, MA;

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

	printf("Escreva a quarta nota: ");
	scanf("%f", &N4);

	if ( verifica_nota(N4) == 0){
		printf("Nota inválida, deve ser maior ou igual a zero!\n");
		return -1;
	}

	printf("Escreva a quinta nota: ");
	scanf("%f", &N5);

	if ( verifica_nota(N5) == 0){
		printf("Nota inválida, deve ser maior ou igual a zero!\n");
		return -1;
	}
	
	printf("Escreva a primeira média: ");
	scanf("%f", &ME1);

	if ( verifica_nota(ME1) == 0){
		printf("Média inválida, deve ser maior ou igual a zero!\n");
		return -1;
	}

	printf("Escreva a segunda média: ");
	scanf("%f", &ME2);

	if ( verifica_nota(ME2) == 0){
		printf("Média inválida, deve ser maior ou igual a zero!\n");
		return -1;
	}

	MA = media(N1,N2,N3,N4,N5,ME1,ME2);

	printf("Sua média de aproveitamento é: %.1f \n ", MA);

	if (MA >= 9) {
		printf("Conceito A %.1f\n", MA);
	} else if ((MA >= 7.5) && (MA < 9)) {
		printf("Conceito B %.1f\n", MA);
	} else if ((MA >= 6) && (MA < 7.5)) {
		printf("Conceito C %.1f\n", MA);
	} else if ((MA >= 4) && (MA < 6)) {
		printf("Conceito D %.1f\n", MA);
	} else {
		printf("Conceito E %.1f\n", MA);
	}
	
	return 0;


}