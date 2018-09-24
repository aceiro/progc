#include <stdio.h>

float n=0.0;
int provas=0;

float media(int w=1,float nm=0.0) {
    system("clear");
    while (w < provas) {
    printf("Insira a nota da %dº prova.\n",w);
    scanf("%f",&nm);
    nm = nm * w;
    n = n + nm;    
    w++;
    n = n / 7;
return n;
}

int main() {
    printf("Este programa calcula a media do aluno, quantas provas você deu?\n");
    scanf("%d",&provas);
    provas++;
    system("clear");
    media();
    printf ("A média do aluno foi de:%f\n",n);
    
}

/*clear;gcc Ex7.c -o Ex7.out;./Ex7.out*/

