#include <stdio.h>

unsigned long fatorial(long num){
	//printf("%d\n", num );
	
	if(num == 0){
		return 1;
	}

	if(num > 1) {
		return num * fatorial(num-1);
		//printf("%d\n", num );
	} 
	
	else return num;

}

int main(){

	long num,result;

	printf("Digite um número para calcular o fatorial: ");
	scanf("%ld", &num);
	result = fatorial(num);
	printf("O resultado do fatorial é: %lu\n", result);

	return 0;
}