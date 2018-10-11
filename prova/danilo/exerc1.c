#include <stdio.h>

float calcMediaAp (float n1, float n2, float n3, float n4, float n5, float me1, float me2){
	float ma = (n1 +(n2*2) +(n3*3) +(n4*4) +(n5*5) +(me1 + me2)/2)/15;
	return ma;
}

int main (){
	
	float n1;
	float n2;
	float n3;
	float n4;
	float n5;
	float me1;
	float me2;
	float ma;

	printf("Insira a primeira nota do aluno: \n");
	scanf("%f", &n1);

	printf("Insira a segunda nota do aluno: \n");
	scanf("%f", &n2);

	printf("Insira a terceira nota do aluno: \n");
	scanf("%f", &n3);

	printf("Insira a quarta nota do aluno: \n");
	scanf("%f", &n4);

	printf("Insira a quinta nota do aluno: \n");
	scanf("%f", &n5);

	printf("Insira a primeira média dos exercícios: \n");
	scanf("%f", &me1);

	printf("Insira a segunda média dos exercícios: \n");
	scanf("%f", &me2);

	ma = calcMediaAp(n1, n2, n3, n4, n5, me1, me2);

	if (ma >= 9)
	{
		printf("Média do aluno com conceito A: %.2f \n", ma);
	}
	else if ((ma >= 7.5) && (ma < 9)){
		printf("Média do aluno com conceito B: %.2f \n", ma);
	}
	else if ((ma >= 6) && (ma < 7.5)){
		printf("Média do aluno com conceito C: %.2f \n", ma);
	}
	else if ((ma >= 4) && (ma < 6)){
		printf("Média do aluno com conceito D: %.2f \n", ma);
	}
	else {
		printf("Média do aluno com conceito E: %.2f \n", ma);
	}
	return 0;
}