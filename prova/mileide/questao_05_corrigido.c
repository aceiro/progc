#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <strings.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char string[100]; 
	char inverso[100];
	int i,f;
  	
  		printf("Digite uma palavra/frase para verificar: \n");
  		gets(string);
  		f=0;
  			for (i=strlen(string)-1; i >=0; i--){ 
			  	inverso[f] = string[i];
      		f++;
  			}	     
  		inverso[f] = '\0'; 
  
  		if(strcmp(string,inverso)==0){ 
    		printf("É palindromo!");
  		}
  		else{
    		printf("Não é palindromo!");
  		} 
return 0;  	       
}
