#include<stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float hip,cat1,cat2;
	int n, i;

	printf("Quer calcular a hipotenusa de quantos triangulos?\n");
		scanf("%d", &n);
		i=1;
		while( i<=n ){
	
	printf("Digite o cateto 1: \n");
		scanf("%f",&cat1);
	
	printf("Digite o cateto 2: \n");
		scanf("%f",&cat2);
	
	hip=(cat1*cat1)+(cat2*cat2);
		printf("A hipotenusa é: %3.2f\n",sqrt(hip)); // sqrt = raiz quadrada
		
		i++;}
}
