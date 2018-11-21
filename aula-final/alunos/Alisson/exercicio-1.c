#include <stdio.h>


unsigned long  fatorial_recursivo (unsigned long  fat);

int main (){

	int i;
    unsigned long resultado;
    printf("Entre com um valor:\n" );
    scanf("%d", &i);
    resultado = fatorial_recursivo(i);
    printf("\nFatorial calculado é: %lu\n\n", resultado);

	


}
unsigned long fatorial_recursivo (unsigned long  fat){
if (fat!=0) return fat * fatorial_recursivo(fat-1);


if (fat!=0) return fat * fatorial_recursivo(fat+1);
else return 1;
}
