/*16. Switch - Faça um programa em C que exiba em tema o dia da semana que uma
  determinada placa de veículo não pode rodar na região metropolitana de São Paulo.*/

#include <stdio.h>

#define VERDADEIRO 1
#define FALSO 0

int verifica_numero(float numero){
	if ( (numero >= 0) && (numero <= 9) )
		return VERDADEIRO; /* retorna 1 como sendo verdadeiro */

	return FALSO;

}

int main() {

	int numero;

	printf("Qual é o último número da sua placa?\n");
	scanf("%i", &numero);

	if ( verifica_numero(numero) == FALSO){
		printf("Número inválido, deve ser entre 0 e 9.\n");
		return -1;
	}

	if ((numero = 1) && (numero = 2)) {
		printf("Você não pode dirigir na Segunda-Feira\n");
	} else if ((numero = 3) && (numero = 4)) {
		printf("Você não pode dirigir na Terça-Feira\n");
	} else if ((numero = 5) && (numero = 6)) {
		printf("Você não pode dirigir na Quarta-Feira\n");
	} else if ((numero = 7) && (numero = 8)) {
		printf("Você não pode dirigir na Quinta-Feira\n");
	} else {
		printf("Você não pode dirigir na Sexta-Feira\n");
	}
	
	return 0;
}