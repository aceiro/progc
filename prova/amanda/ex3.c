#include <stdio.h>
/*Ex3: Faça um programa em C que leia um número que represente um determinado mês do ano. Após a leitura escreva por 
extenso qual o mês lido. Caso o número digitado não seja na faixa de 1..12 escreva uma mensagem informando ao usuário
de erro da digitação. Para essa atividade use necessariamente uma função para retornar se o mês digitado é válido ou não.
Use também o switch ou if para seleção dos meses*/

#define VERDADEIRO 1
#define FALSO 0


int verifica_mes(float mes){
	if (mes > 1 && mes < 12)
		return VERDADEIRO; /* retorna 1 como sendo verdadeiro */

	return FALSO;

}

int main(){

	int numeromes;
	printf("Digite um número de 1 a 12: \n");
	scanf("%d", &numeromes);

	if ( verifica_mes(numeromes) == FALSO){
		printf("Mês inválido, o mês deve ser entre 1 a 12!\n");
		return -1;
	}

	if (numeromes == 1){
		printf("O mês é Janeiro\n");
	}

	if (numeromes == 2){
		printf("O mês é Fevereiro\n");
	}

	if (numeromes == 3){
		printf("O mês é Março\n");
	}

	if (numeromes == 4){
		printf("O mês é Abril\n");
	}

	if (numeromes == 5){
		printf("O mês é Maio\n");
	}

	if (numeromes == 6){
		printf("O mês é Junho\n");
	}

	if (numeromes == 7){
		printf("O mês é Julho\n");
	}

	if (numeromes == 8){
		printf("O mês é Agosto\n");
	}

	if (numeromes == 9){
		printf("O mês é Setembro\n");
	}

	if (numeromes == 10){
		printf("O mês é Outubro\n");
	}

	if (numeromes == 11){
		printf("O mês é Novembro\n");
	}

	if (numeromes == 12){
		printf("O mês é Dezembro\n");
	}
 

}