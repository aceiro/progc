#include <stdio.h>

int main (){
	int a = 3;
	float b = 4.5F; //em decimal de precisão simples
	double c = 5.25F; //em decimal de precisão dupla
	
	float sum = a + b + c;

	printf("Sum %3.2f\n", sum);

}