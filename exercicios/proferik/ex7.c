#include<stdio.h>

#define VERDADEIRO 1
#define FALSO      0

int verifica_nota(float nota){
    if ( nota>=0 ) 
       return VERDADEIRO; /* retorna 1 como sendo verdadeiro */
    
    return FALSO;
}

float media(float n1, float n2, float n3, float me){
    float md = (n1+n2*2+n3*3+me)/7;
    return md;
}


int main(){
   float n1, n2, n3, me; /* Notas de um determinado aluno N1, N2, N3 e M3 */
   float ma;             /* Media geral*/

   printf("Digite a nota N1:"); 
   scanf("%f", &n1);

   if ( verifica_nota(n1) == FALSO ){
      printf("Nota inválida, deve ser maior ou igual a zero!\n");
      return -1;
   }

   printf("Digite a nota N2:");
   scanf("%f", &n2);

   if ( verifica_nota(n1) == FALSO ){
      printf("Nota inválida, deve ser maior ou igual a zero!\n");
      return -1;
   }

   //TODO: Faça para as outras notas
   //      os respectivos ifs de verificação N3 e ME

   printf("Digite a nota N3:");
   scanf("%f", &n3);


   printf("Digite a média dos exercícios ME:");
   scanf("%f", &me);


   ma = media(n1,n2,n3,me);

   printf("Media geral: %3.2f\n", ma);

   if ( ma >= 9 ){
      printf("Conceito: A\n");	
   }else if( (ma >= 7.5) && ( ma < 9) ){
      printf("Conceito: B\n");
   }else if ( (ma >= 6) && ( ma < 7.5) ){
      printf("Conceito: C\n");
   }else if ( (ma >= 4) && ( ma < 6) ){
      printf("Conceito: D\n");
   }else {
      printf("Conceito: E\n");
   }

   return 0;
}

