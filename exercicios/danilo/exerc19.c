#include <stdio.h>

float calcMedia (float n1, float n2, float n3){
	float m = (n1 + n2 + n3)/3;
	return m;
}

int main (){
	
	char nome [20];
	float m;
	float n1;
	float n2;
	float n3;
	
	printf("\tCálculo da média de alunos\n");
	
	printf("\nInforme o nome do aluno:\n");
	fgets(nome, sizeof(nome), stdin);
	
	printf("\nInsira a primeira nota do aluno: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("\nInsira a segunda nota do aluno: ");
	scanf("%f", &n2);
	
	printf("\nInsira a terceira nota do aluno: ");
	scanf("%f", &n3);
	
	m = calcMedia (n1, n2, n3);
	
	if (m >= 8){
		printf("\nA média do aluno %s foi %.2f \n", nome, m);
		printf("\n\tAPROVADO!");
	}
	else {
		printf("\nA média do aluno %s foi %.2f \n", nome, m);
		printf("\n\tREPROVADO!");
	}
	return 0;
}
