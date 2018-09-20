#include <stdio.h>

int main (){
	int bar = 0;
	int foo = 0;


	printf("Digite o valor de bar: ");
	scanf("%d", &bar);

	printf("Digite o valor de foo: ");
	scanf("%d", &foo);

	if(bar > foo){
		printf("Bar é maior que Foo");
	} else if (foo > bar){
		printf("Foo é maior que Bar");
	}
	
}