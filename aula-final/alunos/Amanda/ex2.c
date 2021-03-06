/*Faça um programa em C que crie um vetor de 10 posições de inteiro.
Então para cada valor desse vetor converta cada valor de decimal para binário até encontrar o final do vetor.
Use uma rotina recursiva para iterar até o final do vetor*/


#include <stdio.h>
#define VETOR 10

void build_array() {

	int dec[VETOR], n;
	int count = 0;

	if (count < VETOR){
		printf("Digite 10 números inteiros para transformá-los em binários: ");
		scanf("%i", &n);
		dec[count] = dec2bin(n);
		count++;
		build_array(dec, count);
	}

}

int dec2bin(int n){
	
	int i;
	int r[80];

	if(n == 1) {
	  	printf("%d\n", n);
	}
	else {
		printf("Forma binária: ");
	 			
		i = 0;
 			
		do {
			r[i] = (n % 2);
			n = n / 2;
	    	i++;
			} while(n >= 1);

			for(int l = i-1; l >= 0; l--) {
				printf("%d", r[l]);
			}
			
		   	printf("\n");
		}
}

int main(){
	
	int n;
	build_array();
	dec2bin(n);

}

		
