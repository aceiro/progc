#include <stdio.h>
#include <locale.h>

/*17. Condicional - O pre�o de um autom�vel � calculado pela soma do pre�o de
f�brica com o pre�o dos impostos (45% do pre�o de f�brica) e a percentagem do
revendedor (28% do pre�o de f�brica). Fa�a um programa em C que leia o nome do
autom�vel e o pre�o de f�brica e imprima o nome do autom�vel e o pre�o final.*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	char automovel[30] =" ";
	float vl_fabrica = 0, impostos = 0, revendedor = 0, vl_final = 0;
	
	printf("Calcular o valor final do automovel!");
	printf("Digite o automovel: ");
	fgets(automovel, sizeof(automovel), stdin);
	
	printf("Digite o valor de fabrica do automovel: ");
	scanf("%f", &vl_fabrica);
	
	impostos = vl_fabrica * 0.45;
	revendedor = vl_fabrica * 0.28;
	vl_final = vl_fabrica + impostos + revendedor;
	
	printf("\nO automovel escolhido foi: %s", automovel);
	printf("\nO valor final do automovel R$: %.2f", vl_final);
	
	
}
