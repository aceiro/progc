#include <stdio.h>
int main() {


	//exemplo 1 - for
	printf("Exemplo 1 - for\n");
    int i;
    for(i=1; i<=100; i=i+1)
    	printf("%d\n", i);

	printf("\nExemplo 1 - for\n");

	//exemplo 2 - while
	i=1;
	while( i<=100 ){
		printf("%d\n", i);
		i++;
	}


	//exemplo 3 - do ... while
	i=1;
	do{
		printf("%d\n", i);
		i++;
	}while( i<=100);



	return 0;
}
