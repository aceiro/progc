#include <stdio.h>
#include <locale.h> //biblioteca de idiomas - corrige problemas de acentuação


int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Hello, world!\n");
	printf("Ol�, mundo!\n");
}
