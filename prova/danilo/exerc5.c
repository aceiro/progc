#include <stdio.h>
#include <string.h>

int main (){
	
	char str1 [20];
	char str2 [20];
	
	printf("Digite uma palavra \n");
	fgets(str1, sizeof(str1), stdin);
	printf("Digite a mesma ou outra palavra \n");
	fgets(str2, sizeof(str2), stdin);
	
	if (strncmp(str1, str2, 20) ==0){
		printf("As palavras em questão são palíndromas \n");
	}
	else{
		printf("As palavras não são palíndromas \n");
	}
	return 0;
}
