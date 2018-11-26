#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	for (i = 100; i>=1; i--){
		printf("Contador FOR igual a: %d\n", i);
	}
	system ("pause");
	i = 100;
	while (i >=1){
		printf("Contador WHILE igual a: %d\n", i);
		i--;
	}
	system ("pause");
	i = 100;
	do {
		printf("Contador DO... WHILE igual a: %d\n", i);
		i--;
	}
	while(i>=1);
}
