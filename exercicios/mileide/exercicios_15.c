#include <stdio.h>

/*15. Fun��es � Crie um programa em C usando fun��es para calcular a m�dia
aritm�tica de tr�s notas de um aluno. A fun��o deve ser declarada no c�digo como
prot�tipo e ser chamada ap�s a leitura dos dados via teclado e/ou por arquivo.*/

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
