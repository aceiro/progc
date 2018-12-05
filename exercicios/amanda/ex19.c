/*Condicional - Faça um programa em C que leia o nome e as três notas de uma disciplina de um aluno
e ao final escreva o nome do aluno, sua média e se ele foi aprovado
A média é 8*/

#include <stdio.h>

float calcula_media(float nota1, float nota2, float nota3){
	float media = (nota1 + nota2 + nota3) / 3;
	return media;
}

int main(){

	char name [20];
	float nota1, nota2, nota3, media;

	printf("*************************************************\n");
	printf("************** CALCULADOR DE MÉDIA **************\n");
	printf("*************************************************\n");

	printf("Qual é o nome do aluno? ");
	fgets(name, sizeof(name), stdin);

	printf("Digite a primeira nota: \n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: \n");
	scanf("%f", &nota2);
	printf("Digite a terceira nota: \n");
	scanf("%f", &nota3);

	media = calcula_media(nota1,nota2,nota3);

	printf("A média é: %.2f\n", media);

	if(media >= 8){
		printf("Parabéns %sAPROVADO!", name);
	} else {
		printf("Que pena %sREPROVADO!", name);
	}

	return 0;

}