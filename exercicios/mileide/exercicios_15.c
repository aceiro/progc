#include <stdio.h>

/*15. Funções – Crie um programa em C usando funções para calcular a média
aritmética de três notas de um aluno. A função deve ser declarada no código como
protótipo e ser chamada após a leitura dos dados via teclado e/ou por arquivo.*/

float calcula_media(float n1, float n2, float n3);

int main(){
	
		float n1, n2, n3;
		printf("Digite as tres notas aluno:\n");
		scanf("%f\n" "%f\n" "%f", &n1, &n2, &n3);
		system("pause");
			float media;
			media = calcula_media(n1, n2, n3);
			printf("A media foi: %2.2f", media);
		}

float calcula_media (float n1, float n2, float n3){
	float calc_media;
	calc_media = (n1+n2+n3)/3;
	return calc_media;
	}
