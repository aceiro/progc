#include <stdio.h>

int somaPares(int num){
    if (num % 2 == 0){
        return num + somaPares(num);
      }
      else{
        return 1;
      }
}

int main(){

printf("\tSoma dos números pares menores que 100\n");

int num;
int cont = 0;
int result;

for (cont = 0; cont <100; cont++){

result = num + somaPares(num % 2 == 0);
   printf("\nA soma total é de: %d", result);
   }
return 0;
}
