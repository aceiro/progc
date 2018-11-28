#include <stdio.h>
#include <locale.h>
#define VERDADEIRO 1
#define FALSO      0

/*20. Condicional e Função - Faça um programa em C que leia um número que
represente um determinado mês do ano. Após a leitura escreva por extenso qual o
mês lido. Caso o número digitado não esteja na faixa de 1..12 escreva uma
mensagem informando o usuário do erro da digitação. Para essa atividade use
necessariamente uma função para retornar se o mês digita é valido ou não. Use
também o switch para seleção dos meses.*/

int verifica_valor(float valor);

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int mes;
	
	printf("Digite um número correspondente a um mês - de 1 a 12: \n");
	scanf("%d", &mes);
		if ( verifica_valor(mes) == FALSO ){
    		printf("Não corresponde a um Mês!\n");
      	return -1;
 	  	}

	
	switch (mes){
		case 1 :
			printf("\nVocê escolheu Janeiro!");
		break;
		case 2:
			printf("\nVocê escolheu Fevereiro!");
		break;
		case 3:
			printf("\nVocê escolheu Março!");
		break;
		case 4:
			printf("\nVocê escolheu Abril!");
		break;
		case 5:
			printf("\nVocê escolheu Maio!");
		break;
		case 6:
			printf("\nVocê escolheu Junho!");
		break;
		case 7:
			printf("\nVocê escolheu Julho!");
		break;
		case 8:
			printf("\nVocê escolheu Agosto!");
		break;
		case 9:
			printf("\nVocê escolheu Setembro!");
		break;
		case 10:
			printf("\nVocê escolheu Outubro!");
		break;
		case 11:
			printf("\nVocê escolheu Novembro!");
		break;
		case 12:
			printf("\nVocê escolheu Dezembro!");
		break;
	}

	return 0;
	
}

	int verifica_valor(float mes){
    	if ( mes>=1 && mes<=12 ) 
       	return VERDADEIRO; /* retorna 1 como sendo verdadeiro */
    return FALSO;}
