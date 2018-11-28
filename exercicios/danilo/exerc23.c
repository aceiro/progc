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
//int cont;
int result;

for (num = 0; num <100; num++){

result = num + somaPares(num);
   printf("\nA soma total é de: %d", result);
   }
return 0;
}
