/*
 *
 *   Todos os Loops de Acordo com a vontade do usuário
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    
    int opc;
    int i;
    int cont;

    system("clear");
    printf("\n\n\t\tEntre com a Opcao para Tipo de Loop que vai de 200 para 0\n");
    printf("\n\n\t\tOpcoes: \n");
    printf("\n\n\t\t\tOpcoes [ 1 ] para [ FOR ]:");
    printf("\n\n\t\t\tOpcoes [ 2 ] para [ WHILE ]:");
    printf("\n\n\t\t\tOpcoes [ 3 ] para [ DO WHILE ]:");
    printf("\n\n\t\t\tQual e sua opcao: ");
    scanf("%d", &opc);
    
    switch(opc) {
        case 1:
            system("clear");
            printf("\n\nContando de 200 para 0 [Forma Descrecente] usando Laço FOR:\n\n");
            cont = 0;
            for (i = 200; i >= cont; i--)
                printf("%d ", i);

            printf("\n\n");
        break;

        case 2:
            system("clear");
            printf("\n\nContando de 200 para 0 [Forma Descrecente] usando Laço WHILE:\n\n");
            cont = 0;
            i = 200;
            while (i >= cont){
                printf("%d ", i);
                i--;
            }
            
            printf("\n\n");
        break;
        
        case 3:
            printf("\n\nContando de 200 para 0 [Forma Descrecente] usando Laço DO WHILE:\n\n");
            cont = 0;
            i = 200;
            do {
                printf("%d ", i);
                i--;
            } while (i >= cont);

            printf("\n\n");
        break;
            
        default:
            printf("\n\nNenhum dos casos, finaliznado....\n\n");

    }

    return 0;

}