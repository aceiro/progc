#include <stdio.h>

float n=0.0;
int provas=0;
float tp=0.0;
float tn=0.0;
int t = 2;

float media() {
    int w=1;
    float nm=0.0;
    system("clear");
    if (t == 1) {
    while (w < provas) {
    printf("Insira a nota da %dº prova.\n",w);
    scanf("%f",&nm);
    nm = nm * w;
    n = n + nm;    
    w++;
    }
    tn = tn * tp;
    n = n + tn;
    n = n / 7;
    printf ("A média do aluno foi de:%f",n);
    return n;
    }
    if (t == 0) {
    while (w < provas) {
    printf("Insira a nota da %dº prova.\n",w);
    scanf("%f",&nm);
    nm = nm * w;
    n = n + nm;  
    n = n / 7;  
    w++;
    }
    printf ("A média do aluno foi de:%f\n",n);
    return n;
    }
}

float trabalho() {
    system("clear");
    printf("Você deu algum trabalho?\n Digite 1 para sim e 0 para não.\n");
    scanf("%d",&t);
    if (t == 1) {
    printf("Seu trabalho tem qual peso na média?\n");
    scanf("%f",&tp);
    printf("Qual foi a nota do aluno no trabalho?\n");
    scanf("%f",&tn);
    media();
     return n;
    }else if (t == 0) {
    printf("Você não deu um trabalho.\n");
    system("clear");
    media();
    return t;
    }else {
        printf("Erro desconhecido, por favor contate o criador.\n");
    }
}

int main() {
    printf("Este programa calcula a media do aluno, quantas provas você deu?\n");
    scanf("%d",&provas);
    provas++;
    system("clear");
    trabalho();    
}

/*clear;gcc Ex7.c -o Ex7.out;./Ex7.out*/

