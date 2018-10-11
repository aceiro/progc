
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
    
    int i;
    int cont;

    int laco;
    printf("\nEntre com a opção de loop desejada.\n 1 -> Laço For. \n 2 -> Laço While \n 3 -> Laõ do-While \n");
    scanf("%d", &laco);
    
    switch (laco)

      {
        case 1 :

        printf("Laço FOR, de 100 a 1 (ordem decrescente):\n\n");
        cont = 1;
        for (i = 200; i >= cont; i--)
        printf("%d ", i);
        printf("\n\n");

        break;

     
        case 2 :
        printf(" Laço WHILE, de 200 a 1 (ordem decrescente):\n\n");
        cont = 1;
        i = 200;
        while (i >= cont){
        printf("%d ", i);
        i--;
     }
        break;

        case 3 :
        printf(" Laço DO WHILE, de 200 a 1:\n\n");
        cont = 1;
        i = 200;
        do {
        printf("%d ", i);
        i--;
        }while (i >= cont);

        break;
        default:
        printf ("Valor invalido!\n");
    }


    return 0;

}

