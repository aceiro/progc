#include <stdio.h>
#include <locale.h>

/*18. Condicional - Fa�a um programa em C que leia os valores A, B, C e diga se a
soma de A + B � menor que C.*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	float a, b, c;
	
	printf("Digite os valores de A, B e C: \n");
	scanf("%f" "%f" "%f", &a, &b, &c);
	
			if (c == (a + b)){
				printf("C � igual a A + B");
			}
			else if (c < (a+b)){
			printf("C � menor do que A + B");
			}
			else{
				printf("C � maior do que A + B");
			}
}
