#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, n3, n4, n5, ne, ne1, ne2, MA;
	
	printf("\nDigite a primeira nota: ");
	scanf("%f", &n1);
	printf("\nDigite a segunda nota: ");
	scanf("%f", &n2);
	printf("\nDigite a terceira nota: ");
	scanf("%f", &n3);
	printf("\nDigite a quarta nota: ");
	scanf("%f", &n4);
	printf("\nDigite a quinta nota: ");
	scanf("%f", &n5);
	printf("\nDigite a primeira nota dos exercícios: ");
	scanf("%f", &ne1);
	printf("\nDigite a segunda nota dos exercícios: ");
	scanf("%f", &ne2);
	ne = (ne1+ne2)/2;
	MA = (n1 + n2*2 + n3*3 + n4*4 + n5*5 + ne)/15;
		
		system("cls");
		
	printf("Média geral: %3.2f\n", MA);

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
