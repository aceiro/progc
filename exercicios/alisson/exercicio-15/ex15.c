#include <stdio.h>

#define VERDADEIRO 1
#define FALSO      0

int verifica_nota(float nota){
    if ( nota>=0 || nota <10 ) 
       return VERDADEIRO; /* retorna 1 como sendo verdadeiro */
    
    return FALSO;
}

float media(float n1, float n2, float n3){
    float mear = (n1+n2+n3/3);
    return mear;
}
int main(){

float n1, n2, n3;
float ma;

printf("Digite a nota N1\n");
scanf ("%f", &n1);

if ( verifica_nota(n1) == FALSO ){
      printf("Nota inválida, valores devem estar entre 0 a 10!\n");
      return -1;
   }

   printf("Digite a nota N2:\n");
   scanf("%f", &n2);

   if ( verifica_nota(n2) == FALSO ){
      printf("Nota inválida, valores devem estar entre 0 a 10!\n");
      return -1;
   }

   printf("Digite a nota N3\n:");
   scanf("%f", &n3);

   if (verifica_nota(n3) == FALSO){
    printf("Nota inválida, valores devem estar entre 0 a 10!\n");
      return-1;
   }
   ma = media(n1,n2,n3);


   printf("Media geral: %3.1f\n", ma);

	return 0;
}