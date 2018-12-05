#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int foo;
	int bar;
	printf("\nDigite um valor inteiro para Foo: ");
	scanf("%d", &foo);
	printf("\nDigite um valor inteiro para Bar: ");
	scanf("%d", &bar);

	if ( foo>bar ) {
		printf("\nFoo é maior que Bar");
	}else if ( bar>foo ) {
		printf("\nBar é maior de Foo");
	}
	else{
		printf("\nFoo e Bar são iguais");
	}
}
