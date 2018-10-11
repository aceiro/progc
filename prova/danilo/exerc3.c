#include <stdio.h>

int validaMes(int mes){
	if (mes > 12){
		printf("Número invalido, coloque um número no intervalo de 1 a 12 \n");
	}
}

int main (){

	int mes;

	printf ("Verificação de meses por seus respectivos números \n\n");
	printf("Entre com um número de 1 a 12 \n");
	scanf ("%d", &mes);

	mes = validaMes(mes);

	if (mes == 1)
	{
		printf("Janeiro \n");
	}
	else if (mes == 2){
		printf("Fevereiro \n");
	}
	else if (mes == 3){
		printf("Março \n");
	}
	else if (mes == 4){
		printf("Abril \n");
	}
	else if (mes == 5){
		printf("Maio \n");
	}
	else if (mes == 6){
		printf("Junho \n");
	}
	else if (mes == 7){
		printf("Julho \n");
	}
	else if (mes == 8){
		printf("Agosto \n");
	}
	else if (mes == 9){
		printf("Setembro \n");
	}
	else if (mes == 10){
		printf("Outubro \n");
	}
	else if (mes == 11){
		printf("Novembro \n");
	}
	else if (mes == 12){
		printf("Dezembro \n");
	}
	else {
		(mes);
	}
	return 0;
}