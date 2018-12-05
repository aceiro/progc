#include <stdio.h>
#include <locale.h>
#define VERDADEIRO 1
#define FALSO      0

/*20. Condicional e Fun��o - Fa�a um programa em C que leia um n�mero que
represente um determinado m�s do ano. Ap�s a leitura escreva por extenso qual o
m�s lido. Caso o n�mero digitado n�o esteja na faixa de 1..12 escreva uma
mensagem informando o usu�rio do erro da digita��o. Para essa atividade use
necessariamente uma fun��o para retornar se o m�s digita � valido ou n�o. Use
tamb�m o switch para sele��o dos meses.*/

int verifica_valor(float valor);

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int mes;
	
	printf("Digite um n�mero correspondente a um m�s - de 1 a 12: \n");
	scanf("%d", &mes);
		if ( verifica_valor(mes) == FALSO ){
    		printf("N�o corresponde a um M�s!\n");
      	return -1;
 	  	}

	
	switch (mes){
		case 1 :
			printf("\nVoc� escolheu Janeiro!");
		break;
		case 2:
			printf("\nVoc� escolheu Fevereiro!");
		break;
		case 3:
			printf("\nVoc� escolheu Mar�o!");
		break;
		case 4:
			printf("\nVoc� escolheu Abril!");
		break;
		case 5:
			printf("\nVoc� escolheu Maio!");
		break;
		case 6:
			printf("\nVoc� escolheu Junho!");
		break;
		case 7:
			printf("\nVoc� escolheu Julho!");
		break;
		case 8:
			printf("\nVoc� escolheu Agosto!");
		break;
		case 9:
			printf("\nVoc� escolheu Setembro!");
		break;
		case 10:
			printf("\nVoc� escolheu Outubro!");
		break;
		case 11:
			printf("\nVoc� escolheu Novembro!");
		break;
		case 12:
			printf("\nVoc� escolheu Dezembro!");
		break;
	}

	return 0;
	
}

	int verifica_valor(float mes){
    	if ( mes>=1 && mes<=12 ) 
       	return VERDADEIRO; /* retorna 1 como sendo verdadeiro */
    return FALSO;}
