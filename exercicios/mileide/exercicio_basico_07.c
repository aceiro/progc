#include <stdio.h>
#include <locale.h>

#define VERDADEIRO 1
#define FALSO 0

	int verifica_nota(float nota){
		if ( nota>=0 && nota <= 10)
			return VERDADEIRO;

		return FALSO;
	}
	/*
	float media(float n1, float n2, float n3, float ME){
		float MA = (n1 + n2*2 + n3*3 + ME)/7;

	}
	*/
int main(){
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, n3, ME, MA;
	
	printf("\nDigite a primeira nota: ");
	scanf("%f", &n1);
		if ( verifica_nota(n1) == FALSO ){
			printf("Nota inválida, deve ser maior que 0 e menor que 10!");
			return FALSO;
		}
	printf("\nDigite a segunda nota: ");
	scanf("%f", &n2);
		if ( verifica_nota(n2) == FALSO ){
			printf("Nota inválida, deve ser maior que 0 e menor que 10!");
			return FALSO;
		}
	printf("\nDigite a terceira nota: ");
	scanf("%f", &n3);
		if ( verifica_nota(n3) == FALSO ){
			printf("Nota inválida, deve ser maior que 0 e menor que 10!");
			return FALSO;
		}
	printf("\nDigite a nota dos exercícios: ");
	scanf("%f", &ME);
		if ( verifica_nota(ME) == FALSO ){
			printf("Nota inválida, deve ser maior que 0 e menor que 10!");
			return FALSO;
		}
	MA = (n1 + n2*2 + n3*3 + ME)/7;
	printf("\nMédia %2.2f\n", MA);

	if ( MA >= 9 ){
		printf("Parabéns! Sua nota foi A");
	}else if (( MA >= 7.5 ) && ( MA < 9 )){
		printf("Sua nota foi B");
	}else if (( MA >= 6 ) && ( MA < 7.5 )){
		printf("Sua nota foi C");
	}else if (( MA >= 4 ) && ( MA < 6 )){
		printf("Sua nota foi D");
	} else {
		printf("Precisa estudar mais, sua nota foi E");
	}
}
