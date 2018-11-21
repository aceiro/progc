#include<stdio.h>
#include<locale.h>

int fatorial (int n);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n, resultado;
	printf("Digite o número a ser fatorado: ");
	scanf("\n%d", &n);
	resultado = fatorial(n);
	printf("O resultado é: %d", resultado);
	}
	
	
	int fatorial(int n){
		if (n<0){
			return -1;
		}
		if (n==0){
			return 1;
		}
 		if (n!=0) return n*fatorial(n-1);
	else return n;
}

	
	

