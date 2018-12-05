/*20. Condicional e Função.
Faça um programa em C que leia um número que represente um determinado mês do ano.
Após a leitura escreva por extenso qual o mês lido.
Caso o número digitado não esteja na faixa de 1 a 12 escreva uma mensagem informando o usuário do erro de digitação.
Para essa atividade use necessariamente uma função para retornar se o mês digitado é válido ou não.
Use também switch para a seleção dos meses*/

#include <stdio.h>

int verifica_mes(int mes){

	if(mes >= 1 && mes <=12)
		return 0;
	else 
		return 1;
}

int main(){

	int mes, check;

	printf("Digite um número de um determinado mês (Valores entre 1 a 12): \n");
	scanf("%i", &mes);
	check = verifica_mes(mes);

	if(check != 1){
		switch(mes){
			case 1:
			printf("O mês %i é Janeiro.\n", mes);
			break;

			case 2:
			printf("O mês %i é Fevereiro.\n", mes);
			break;
			
			case 3:
			printf("O mês %i é Março.\n", mes);
			break;
			
			case 4:
			printf("O mês %i é Abril.\n", mes);
			break;
			
			case 5:
			printf("O mês %i é Maio.\n", mes);
			break;
			
			case 6:
			printf("O mês %i é Junho.\n", mes);
			break;
			
			case 7:
			printf("O mês %i é Julho.\n", mes);
			break;
			
			case 8:
			printf("O mês %i é Agosto.\n", mes);
			break;
			
			case 9:
			printf("O mês %i é Setembro.\n", mes);
			break;
			
			case 10:
			printf("O mês %i é Outubro.\n", mes);
			break;
			
			case 11:
			printf("O mês %i é Novembro.\n", mes);
			break;
			
			case 12:
			printf("O mês %i é Dezembro.\n", mes);
			break;

		}
	} else {
		printf("Mês inválido! Digite um número entre 1 a 12.\n");
	}
		
}