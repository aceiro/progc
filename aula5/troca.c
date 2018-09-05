#include<stdio.h>

void troca_valor(int a, int b){
     int aux = a;
     a=b;
     b=aux;

    printf("2-Valores locais na troca por valor --> a=%d, b=%d\n", a,b);     
}

void troca_referencia(int *a, int *b){
    int aux = *a;
    *a=*b;
    *b=aux;

   printf("4-Valores locais na troca por referência --> a=%d, b=%d\n", *a,*b);     

}

int main(){
    
    int x,y;
    x=10;
    y=20;

    printf("1-Valores declarados x=%d, y=%d\n", x,y);

    troca_valor(x,y);


    printf("3-Valores de x e y depois da troca por valor --> x=%d, y=%d\n", x,y);
    printf("\n");

    troca_referencia(&x,&y);
    printf("5-Valores de x e y depois da troca por referência --> x=%d, y=%d\n", x,y);
     	

       


}
