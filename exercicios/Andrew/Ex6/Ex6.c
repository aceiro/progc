#include <stdio.h>
float foo=0,bar=0;
int main() {
    system("clear");
    printf("Qual é o valor de Foo?");
    scanf("%f",&foo);
    system ("clear");
    printf ("Qual é o valor de Bar?");
    scanf("%f",&bar);
    if (foo > bar) {
        printf("Foo é maior que bar\n");
    }
    else if (bar > foo) {
        printf("Bar é maior que Foo\n");
    }
    else if (bar == foo) {
        printf("Bar e Foo são iguais.\n");
    }
    else {
        printf("Um erro ocorreu...\n");
    }
return 0;
}
