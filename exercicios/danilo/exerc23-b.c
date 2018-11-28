#include <stdio.h>

/*int fibo (int num){
	if (num >= cont)
	{
		return num + fibo(num+1);
	}
	else{
		return 1;
	}
}*/

int main (){

	int cont = 0;
	int num;
	int fbnc;

	printf("\n\tSEQUÊNCIA FIBONACCI\n");
	printf("Informe um número referente a última posição que você queira da sequência\n");
	scanf("%d", &num);
	fbnc = num + num++;
	
	for(cont = 0; cont <= num; cont++){
	printf("Sequência: %d\n", fbnc);
}

	return 0;
}