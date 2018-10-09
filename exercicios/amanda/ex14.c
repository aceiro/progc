#include <stdio.h>

main () {
	printf("Exemplo 1 - For\n");
	int i;
	for(i=100 ; i<= 100 && i > 0 ; i--){
		printf("%i\n", i );
	}

	printf("Exemplo 2 - While\n");
	i = 100;
	while(i<=100 && i > 0){
		printf("%i\n", i);
		i--;
	}

	printf("Exemplo 3 - Do While\n");
	i = 100;
	do {
		printf("%i\n", i);
		i--;
	} while (i <=100 && i > 0);

	return 0;

}