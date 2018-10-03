#include <stdio.h>

int main()
{
	float n1;
	float n2;
	float n3;
	float media;
	float ma;

	printf("\n Insira a primeira nota do aluno \n");
	scanf ("%f", &n1);
	printf("\n Insira a segunda nota do aluno \n");
	scanf("%f", &n2);
	printf("\n Insira a terceira nota do aluno \n");
	scanf("%f", &n3);
	media = (n1+n2+n3)/3;
	ma = (n1+(n2*2)+(n3*3)+media)/7;

	if (ma >= 9)
	{
		printf("Média do aluno com conceito A: %.2f\n", ma);
	}
	else if ((ma >= 7.5) && (ma < 9)) 
	{
		printf("Média do aluno com conceito B: %.2f\n", ma);
	}
	else if ((ma >= 6) && (ma < 7.5))
	{
		printf("Média do aluno com conceito C: %.2f\n", ma);
	}
	else if ((ma >= 4) && (ma < 6))
	{
		printf("Média do aluno com conceito D: %.2f\n", ma);
	}
	else
		{
			printf("Média do aluno com conceito E: %.2f\n", ma);

	}
		
}
