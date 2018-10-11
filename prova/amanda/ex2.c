#include <stdio.h>

/*2. Faça um programa em C que imprima a sequencia de 200 a 0 em ordem decrescente*/

main (){

	printf("Escolha o laço que você deseja usar:\n");
	printf("1 - For\n");
	printf("2 - While\n");
	printf("3 - Do While\n");

	int opcao;
	scanf("%d", &opcao);

	int i;

	if (opcao == 1){
		printf("Exemplo 1 - For\n");
		

		for (i = 200; i >= 0 ; i--)
		{
			printf("%i\n", i );
		}
	}

	if (opcao == 2){
		printf("Exemplo 2 - While\n");
		i = 200;
		while (i >= 0) {
		printf("%i\n", i);
		i--;
		}
	}

	if (opcao == 3){
		printf("Exemplo 3 - Do While\n");
		i = 200;
		do {
			printf("%i\n", i);
			i--;
		} while (i >= 0);
	}

	return 0;
}