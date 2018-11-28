#include <stdio.h>
#include <locale.h>

/*19. Condicional - Faça um programa em C que leia o nome e a três notas de uma
disciplina de um aluno e ao final escreva o nome do aluno, sua média e se ele foi
aprovado a média é 8.*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[30] = " ";
	float n1, n2, n3, media;
	
	printf("\nDigite seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	
	printf("Digite as 3 notas do aluno: ");
	scanf("%f" "%f" "%f", &n1, &n2, &n3);
	
	media = (n1+n2+n3)/3;
	if (media >= 8){
		printf("A média do aluno %s foi: %.2f e foi APROVADO! ", nome, media);
	}
	else if ( media > 4){
		printf("A média do aluno %s foi: %.2f e esta de RECUPERAÇÂO! ", nome, media);
	}
	else{
		printf("A média do aluno %s foi: %.2f e foi REPROVADO! ", nome, media);
	}
	
}
