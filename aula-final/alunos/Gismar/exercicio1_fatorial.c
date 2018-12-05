/*
 *  Exercicio 1: Fazer um programa usando Recursividade que calcule o Fatoria de um número >= 0
 *  Formula Fatorial: n! = n * (n - 1) * (n - 2) ... 1 se n >= 1
 *                    n! = 1                           se n = 0
 *  
*/

#include <stdio.h>
#include <stdlib.h>


long int factorial_calculator(int number);

int main(int argc, char *argv[])
{
    while(argc == 1) {
        printf("\n\tDo like this: %s number (For Exemple: %s <space or tab> 10 <enter>)\n\n", argv[0], argv[0]);
        return 1;
    }

    int number = atoi(argv[1]);
    long int factorial = 0;

    if (number < 0){
        printf("\n\tDon't use Number less than 0\n\n");
        return 1;
    }


    factorial = factorial_calculator(number);

    printf("\n\tThe Factorial of %d (%d!) is %ld\n\n", number, number, factorial);

    return 0;
}

long int factorial_calculator(int number) {
    if (number == 0)
        return (number = 1);
    
    if (number >= 1)
        return number * factorial_calculator(number - 1);
}