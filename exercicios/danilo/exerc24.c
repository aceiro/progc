#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*float pitagoras (float cat1, float cat2){
	float hip = sqrt(pow(cat1, 2)+ pow(cat2,2));
	return hip;
}*/

int main(){

	//float hip;
	float cat2;
	float cat1;
	FILE *medcat;
	int cont = 0;

	printf("\n\tCalculo de Hipotenusa\n");

	medcat = fopen("med_catetos.txt", "r");
	if(medcat == NULL){
		printf("Arquivo requerido não encontrado!\n");
	}
	else{
            for (cont =1; cont <= 10; cont++){
        while ((fscanf(medcat, "%f %f\n", &cat1, &cat2))!= EOF)
              //hip = pitagoras(cat1, cat2);
              printf("\nAs medidas dos catetos: %.2f e %.2f\n\nA medida da hipotenusa desse triângulo é: %.2f\n", cat1, cat2, sqrt(pow(cat1, 2)+ pow(cat2,2)));

	}}

	fclose(medcat);
	return 0;
}
