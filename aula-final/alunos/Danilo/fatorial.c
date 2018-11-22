#include <stdio.h>

int fat(int n){

	if (n >= 1){
        return
        n * fat(n-1);
	}
	else{
        return 1;
	}

}

int main()
{
	int n;
	int fatorial;

	printf("Entre com um número inteiro:");
	scanf("%d", &n);
	fatorial = fat(n);
	printf("Fatorial de %d é: %d\n", n,fatorial);

	return 0;
}


