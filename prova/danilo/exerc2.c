#include <stdio.h>

int main (){

	int op;
	int n;

	printf("Sequênia decrescente de 200 até 0 \n\n");
	printf("Escolha a opção de laço desejado \n");
	printf("1 - FOR \n2 - WHILE \n3 - DO WHILE \n");
	scanf("%d", &op);

	switch (op){
		case 1 :
	
		for (n = 200; n >= 1; n--){
			printf("%d \n", n);
		}
	
	case 2 :
		n = 200;
		while (n >= 1){
			printf("%d \n", n--);
		}
	
	case 3 :
		n = 200;
		do {
			printf("%d \n", n--);
		}
		while
			(n >= 1);
	}
	
	return 0;
}