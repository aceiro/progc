#include <stdio.h>

int fibo (int num){
	if (num == 1 || num == 2)
	{
		return 1;
	}
	else{
		return fibo(num - 1) + fibo(num - 2);
	}
}

int main (){

	int cont = 0;
	int num;
	int fbnc;

	printf("\n\tSEQUÊNCIA FIBONACCI\n");
	printf("Informe um número referente a última posição que você queira da sequência\n");
	scanf("%d", &num);


	for(cont = 0; cont < num; cont++){
            fbnc = fibo(cont+1);
	printf("%d ", fbnc);
}

	return 0;
}
