#include <stdio.h>
#include <math.h>

float pitagoras(float cat1, float cat2){
	float hip = sqrt(pow(cat1,2) + pow(cat2,2));
	return hip;
}

int main (){

	float hip;
	float cat1;
	float cat2;
	int n;

	printf("Calculo de hipotenusa \n\n");
	printf("Insira a quantidade de triangulos a ser calculado \n");
	scanf("%d", &n);

	while (n = n--){
	printf("Insira a medida do primeiro lado do triângulo \n");
	scanf("%f", &cat1);
	printf("Insira a medida do segundo lado do triângulo \n");
	scanf("%f", &cat2);

	hip = pitagoras(cat1, cat2);

	printf("A hipotenusa desse triângulo é: %.2f \n", hip);
	}

	return 0;

}