#include <stdio.h>

int fatorial(int num){
	//printf("%d\n", num );
	if(num!=0 && num > 1) {
		return num * fatorial(num-1);
		//printf("%d\n", num );
	} else return num;

}

int main(){

	int num, result;

	printf("Digite um número para calcular o fatorial: ");
	scanf("%d", &num);
	result = fatorial(num);
	printf("O resultado do fatorial é: %d\n", result);

	return 0;
}