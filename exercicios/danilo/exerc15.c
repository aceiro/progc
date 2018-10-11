#include <stdio.h>

float calcMedia (float n1, float n2, float n3){
	float m = (n1 + n2 +n3)/3;
	return (m);
}

int main (){
	
	float n1;
	float n2;
	float n3;
	float m;
	
	printf("Insira a primeira nota do aluno \n");
	scanf("%f", &n1);
	printf("Insira a segunda nota do aluno \n");
	scanf("%f", &n2);
	printf("Insira a terceira nota do aluno \n");
	scanf("%f", &n3);
	
	m = calcMedia(n1, n2, n3);
	printf("\n A média do aluno é: %.2f", m);
	return 0;
}
