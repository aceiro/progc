/*
 *  Exercicio 2: Faca um programa em C que crie um vetor de 10 posicoes de inteiro. Para
 *  cada valor desse vetor converta cada valor de decimal para binário ate encontra o final
 *  do vetor. Use uma rotina recursiva para iterar ate o fim do vetor.
 *  
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define DECIMAL 10
#define BINARY 2

void create_array(int array[], int count);
int decimal_to_binary(int number);
void print_array(int array[], int count);

int main() {
    int array[SIZE];
    int count = 0;
    int number = 0;

    system("clear");
    printf("\nPopulating with Decimal Values the Array:\n");
    create_array(array, count);

    printf("\n\nConverting Decimal Values to Binary Values and Printing Array:\n");
    print_array(array, count);
    printf("\n\n");

    return 0;
}

void create_array(int array[], int count) {
    int number;

    if (count < SIZE) {
        printf("\tType in position [%d] integer number: ", count);
        scanf("%d", &number);
        array[count] = decimal_to_binary(number);
        count++;
        create_array(array, count);
    }
    
    else    
        return;
}

int decimal_to_binary(int number) {
    if (number == 0)
        return number;
    
    if (number > 0)
        return (number % BINARY + DECIMAL * decimal_to_binary(number / BINARY));
}

void print_array(int array[], int count) {
    int number;

    if (count < SIZE) {
        printf("\t\t\t\t\tPosition [%d] --> Allocates %d\n", count, array[count]);
        count++;
        print_array(array, count);
    }
    
    else    
        return;
}