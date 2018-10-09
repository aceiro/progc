#include <stdio.h>

main (){
	printf("Exemplo 1 - For\n");
	int i;
	for (int i = 0; i <= 100; ++i)
	{
		printf("%i\n", i );
	}

	printf("Exemplo 2 - While\n");
	while (i <= 100) {
		printf("%i\n", i);
		i++;
	}

	printf("Exemplo 3 - Do While\n");
	i = 0;
	do {
		printf("%i\n", i);
		i++;
	} while (i <= 100);


	return 0;
}