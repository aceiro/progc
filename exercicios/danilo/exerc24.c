#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float pitagoras (float cat1, float cat2){
	float hip = sqrt(pow(cat1, 2)+ pow(cat2,2));
	return hip;
}

int main(){

	float hip;
	float cat2;
	float cat1;
	FILE *medcat;

	medcat = fopen("med_catetos.txt", "r");
	if(!medcat){
		printf("Arquivo requerido não encontrado!\n");
	}
	else{

	}

	printf("\tCalculo de Hipotenusa\n");

	fclose(medcat);
	return 0;
}