#include <stdio.h>

int somaPares(int num){
    if (num % 2 == 0){
        return num + somaPares();
      }
      else{
        return 1;
      }
}

int main(){

printf("\tSoma dos n�meros pares at� 100\n");

int cont;
int result;

for (cont = 1; cont <100; cont++)

result = somaPares(num);
   printf("\nA soma total � de: %d", result);
return 0;
}
