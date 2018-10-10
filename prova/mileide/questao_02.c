#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int escolha;
	printf("Digite 1 para FOR; \n");
	printf("Digite 2 para WHILE; \n");
	printf("Digite 3 para DO ... WHILE; \n");
	scanf("%d", &escolha);
		switch(escolha)
		{
		case 1: 
			printf("\nVocê escolheu FOR\n");
    		int i;
    		for(i=200; i>=1; i=i-1)
    			printf("%d\n", i);
		break;

		case 2:
			printf("\nVocê escolheu WHILE\n");
			i=200;
			while( i>=1 ){
				printf("%d\n", i);
			i--;
			}	
		break;

		case 3:
			printf("\nVocê escolheu DO ... WHILE\n");
			i=200;
			do{
				printf("%d\n", i);
				i--;
			}while( i>=1);
		break;
	
		default:
			printf("\nTentativa inválida!\n");
	}
	return 0;

}
