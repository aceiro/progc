/*
 *  Exercicio 1: Fazer um programa usando Recursividade que calcule o Fatoria de um número >= 0
 *  Formula Fatorial: n! = n * (n - 1) * (n - 2) ... 1 se n >= 1
 *                    n! = 1                           se n = 0
 * Obs.: Usando Vetor Recursivo
 *  
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE_MAX 10

void create_array(int array_factorial[], int number, int count);
void print_factorial(int array_factorial[], int aux_count, int count);
int size_a = 0;
long int factorial = 1;

int main(int argc, char *argv[]) {
    int number = 0;
    int count = 0;
    int aux_count = 0;
    int array_factorial[SIZE_MAX];
    
    while(argc == 1) {
        printf("\n\tDo like this: %s number (For Exemple: %s <space or tab> 10 <enter>)\n\n", argv[0], argv[0]);
        return 1;
    }

    number = atoi(argv[1]);

    if (number < 0){
        printf("\n\tDon't use Number less than 0\n\n");
        return 1;
    }

    printf("\nThe Factorial of %d (%d!) is ", number,number);
    create_array(array_factorial, number, count);
    aux_count = size_a;
    count = 0;
    print_factorial(array_factorial, aux_count, count);
    printf(" = %ld\n\n", factorial);

    return 0;
}

void create_array(int array_factorial[], int number, int count) {
    if (number > 0) {
        array_factorial[count] = number;
        count++;
        size_a++;
        number--;
        create_array(array_factorial, number, count);
    }
}

void print_factorial(int array_factorial[], int aux_count, int count) {
    if (count < aux_count) {
        factorial = factorial * array_factorial[count];
        printf("%d", array_factorial[count]);
        count++;
        if (count < aux_count)
            printf(" * ");
        
        print_factorial(array_factorial, aux_count, count);
    }
}
