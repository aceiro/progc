#include<stdio.h>

#define VERDADEIRO 1
#define FALSO      0

int verifica_nota(float nota){
    if ( nota>=0 ) 
       return VERDADEIRO; 
    
    return FALSO;
}

float media(float n1, float n2, float n3,float n4, float n5, float me1, float me2){
    float ma = (n1 + n2*2 + n3*3 + n4*4 + n5*5 + (me1 + me2))/17;
    return ma;
}


int main(){
   float n1, n2, n3, n4, n5, me1, me2; 
   float ma;             

   printf("Digite a nota N1:"); 
   scanf("%f", &n1);

   if ( verifica_nota(n1) == FALSO ){
      printf("Nota inválida, deve ser maior ou igual a zero!\n");
      return -1;
   }

   printf("Digite a nota N2:");
   scanf("%f", &n2);

   if ( verifica_nota(n2) == FALSO ){
      printf("Nota inválida, deve ser maior ou igual a zero!\n");
      return -1;
   }
    printf("Digite a nota N3:");
   scanf("%f", &n3);

   if ( verifica_nota(n3) == FALSO ){
      printf("Nota inválida, deve ser maior ou igual a zero!\n");
      return -1;
   }
    printf("Digite a nota N4:");
   scanf("%f", &n4);

   if ( verifica_nota(n4) == FALSO ){
      printf("Nota inválida, deve ser maior ou igual a zero!\n");
      return -1;
   }
    printf("Digite a nota N5:");
   scanf("%f", &n5);

   if ( verifica_nota(n5) == FALSO ){
      printf("Nota inválida, deve ser maior ou igual a zero!\n");
      return -1;
   }

   

   printf("Digite a primeira media dos exercícios ME1:");
   scanf("%f", &me1);

   printf("Digite a segunda media dos exercícios ME2:");
   scanf("%f", &me2);



   ma = media(n1,n2,n3, n4, n5, me1, me2);

   printf("Media geral: %3.2f\n", ma);

   if ( ma >= 9 ){
      printf("Conceito: A\n");	
   }else if( (ma >= 7.5) && ( ma < 9) ){
      printf("Conceito: B\n");
   }else if ( (ma >= 6) && ( ma < 7.5) ){
      printf("Conceito: C\n");
   }else if ( (ma >= 4) && ( ma < 6) ){
      printf("Conceito: D\n");
   }else if (ma <4){
      printf("Conceito: E\n");
   }

   return 0;
}

