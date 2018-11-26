#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int foo = 1;
	int bar = 2;
	
	if ( foo>bar ) {
		printf("\nFoo é maior que Bar");
	}else if ( bar>foo ) {
		printf("\nBar é maior de Foo");
	}
	else{
		printf("\nFoo e Bar são iguais");
	}
}
