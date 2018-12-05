/*23. Loops e Funções - Faça um programa em C para somar os restos da divisão por 3 de 200 números
Os valores de início e fim da sequencia devem ser lidos via teclado ou por arquivo via redirecionamento*/

#include <stdio.h>

#define MAX_NUM 200

int soma_resto(int num1, int num2){
    int soma = 0;
    int r[MAX_NUM];
	int j = 0;
	
    for(j = 0; num1 <= num2; j++) {
	    r[j] = num1 % 3;
	    num1 = num1 + 1;
	    soma = soma + r[j];
	    j++;
	}
	
	return soma;
}

int main (){
	
	int num1, num2, total;

	printf("Digite o número para o início da sequencia: ");
	scanf("%i", &num1);
	printf("Digite o número para o fim da sequencia: ");
	scanf("%i", &num2);

    total = soma_resto(num1, num2);

	printf("\n\n\tA soma dos restos da sequencia de %d a %d é: %d\n", num1, num2, total);
	
}