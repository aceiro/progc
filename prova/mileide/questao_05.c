#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	char string1[50]; 
	char string2[50];	
	
	
	printf("Entre com a String 1: \n");
	fgets(string1, sizeof(string1), stdin);
   
	
	
	printf("Entre com a String 2: \n");
	fgets(string2, sizeof(string2), stdin);



		if (strncmp(string1,string2) == 0) {
    	 printf("As strings são iguais!\n");
    }
    	 else {
    	 	printf("As strings NÃO são iguais!\n");
		 }
}
