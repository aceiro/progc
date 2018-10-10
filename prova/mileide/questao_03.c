#include <stdio.h>
#include <locale.h>
#define VERDADEIRO 1
#define FALSO      0

int verifica_valor(float valor){
    if ( valor>=1 && valor<=12 ) 
       return VERDADEIRO; /* retorna 1 como sendo verdadeiro */
    
    return FALSO;}

int main (){
	setlocale(LC_ALL,"Portuguese");
    int valor;

    printf ("Digite um valor de 1 a 12: \n");
	scanf("%d", &valor);
	if ( verifica_valor(valor) == FALSO ){
      printf("Não corresponde a um Mês!\n");
      return -1;
   }

	switch ( valor ) {
    case 1 :
   		printf ("Janeiro!\n");
    break;

    case 2 :
        printf ("Fevereiro!\n");
    break;

    case 3 :
	    printf ("Março!\n");
    break;

    case 4 :
	    printf ("Abril!\n");
    break;

    case 5 :
        printf ("Maio!\n");
    break;

    case 6 :
        printf ("Junho!\n");
    break;

    case 7 :
		printf ("Julho!\n");
    break;

	case 8 :
		printf ("Agosto!\n");
    break;
    
    case 9 :
		printf ("Setembro!\n");
    break;
    
    case 10 :
		printf ("Outubro!\n");
    break;
    
    case 11 :
		printf ("Novembro!\n");
    break;
    
    case 12 :
		printf ("Dezembro!\n");
    break;
    
    //default :
    //   printf ("Não corresponde a um Mês!\n");
  }
//  getch();
  return 0;

}

