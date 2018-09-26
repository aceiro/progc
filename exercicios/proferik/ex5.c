#include<stdio.h>

int main(){
   int foo = 1;
   int bar = 2;

   printf("Digite um valor para foo:");
   scanf("%d", &foo);

   printf("Digite um valor para bar:");
   scanf("%d", &bar);

   if ( foo>bar ) {
      printf("Foo é maior que bar\n");
   }else if ( bar>foo ){
      printf("Bar é maior que foo\n");
   }else {
      printf("Foo e Bar são iguais\n");
   }

   return 0;
}
