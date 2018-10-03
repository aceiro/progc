#include <stdio.h>

int main(){

	int bar;
	int foo;

	printf("Insira o valor de bar\n");
	scanf("%d", &bar);
	printf("Insira o valor de foo \n");
	scanf("%d", &foo);

	if (bar > foo)
	{
		printf("Bar é maior que Foo \n");
	}
	else if (bar < foo)
	{
		printf("Foo é maior que Bar \n");
	}
	else{
		printf("Os valores de Bar e Foo são iguais \n");
	}
}
