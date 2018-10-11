#include <stdio.h>
#include <math.h>

/*Ex4. 
Faça um programa em C que calcule a hipotenusa de n-triângulos, onde n é lido via teclado. 
Todos os valores devem ser lidos
via arquivo (através do redirecionamento interno) ou teclado.
hipotenusa2 = cateto2 + cateto2*/

int main() {
	int n, i;
	float hipotenusa, cateto1, cateto2, z;
	int triangulo = 1;

	printf("Digite a quantidade de triângulos\n");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {

		printf("Triângulo %d\n", triangulo);
		printf("Digite o valor do primeiro cateto:\n");
		scanf("%f", &cateto1);

		printf("Digite o valor do segundo cateto:\n");
		scanf("%f", &cateto2);

		hipotenusa = (cateto1*cateto1) + (cateto2*cateto2);
		
		z = sqrt(hipotenusa);

		printf("A hipotenusa é: %.2f\n", z);

		triangulo++;
	}

}