/* Crie um programa em C usando funções para calcular a média aritmética de três notas de um aluno.
A função deve ser declarada no código como protótipo e ser chamada após a leitura dos dados via teclado e/ou por arquivo*/

#include <stdio.h>

float media (float primeiraNota, float segundaNota, float terceiraNota){
	float mediaa;
	mediaa = (primeiraNota + segundaNota + terceiraNota) /3;
	return mediaa;
}

int main () {
	float primeiraNota, segundaNota, terceiraNota, m;

	printf("\nCalculadora de Media para 3 Notas\n");

	printf("Digite a primeira nota:\n");
	scanf("%f", &primeiraNota);
	printf("Digite a segunda nota:\n");
	scanf("%f", &segundaNota);
	printf("Digite a terceira nota:\n");
	scanf("%f", &terceiraNota);

	m = media (primeiraNota, segundaNota, terceiraNota);
	printf("A sua média é: %2.1f\n", m );

}