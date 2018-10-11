#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	int main ()

	{
	  int mes;

	 

	  printf ("\nDigite o numero de 1 a 12...\n");
	  scanf("%d", &mes);

	 

	  switch (mes)

	  {

	     case 1 :

	       printf ("1-Janeiro\n");

	     break;

	 

	     case 2 :

	       printf ("2-Fevereiro\n");


	 

	     case 3 :

	        printf ("3-Março\n");

	     break;
 

	     case 4 :

	        printf ("4-Abril\n");

	     break;

	 

	     case 5 :

	        printf ("5-Maio\n");

	     break;

	 
     case 6 :

	        printf ("6-Junho\n");

	     break;
 

	     case 7 :

	        printf ("7-julho\n");

	     break;

	     case 8 :

	        printf ("8-Agosto\n");

	     break;

	     case 9 :

	        printf ("9-Setembro\n");

	     break;
	     case 10 :

	        printf ("10-Outubro\n");

	     break;
	     case 11 :

	        printf ("11-Novembro\n");

	     break;
	     case 12 :

	        printf ("12-Dezembro\n");

	     break;

	 

	     default :

	       printf ("Valor invalido!\n");

	  }

	 

	 

	  return 0;

	}