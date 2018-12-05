#include <stdio.h>

void trocaValor(int x, int y, int z, int w){
    x = w;
    y = z;
    z = y;
    w = x;

    printf("\nCom os valores trocados ficará assim:\nX: %d\nY: %d\nZ: %d\nW: %d\n", x, y, z, w);
}
int main (){

    int x = 1;
    int y = 2;
    int z = 3;
    int w = 4;

    printf("\n\t\tTroca de valores entre variáveis\n");
    printf("\n\tEsses são os valores que irão ser trocados:\n");
    printf("X: %d\nY: %d\nZ: %d\nW: %d\n", x, y, z, w);

    trocaValor(x, y, z, w);



return 0;
}
