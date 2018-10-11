#include <stdio.h>
#include <math.h>

int main (){
int cont = 0;
int i=1;
printf("Quantos triangulos deseja cacular?\n");
scanf("%d", &cont);

while (i <= cont){
        printf("%d ", i);
        i++;

     
float cat1, cat2, hip;

printf ("Qual é o valordo do cateto 1:\n");

scanf ("%f",&cat1);

printf ("Qual é o valor do cateto 2:\n");

scanf ("%f",&cat2);

hip = sqrt((cat1*cat1) + (cat2*cat2));

printf ("O valor da hipotenusa é %3.2f", hip);

printf("\n\n");
}

return (0);

}