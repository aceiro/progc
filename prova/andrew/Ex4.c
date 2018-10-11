#include <stdio.h>

int hipotenusa = 0;
int cateto1 = 0;
int cateto2 = 0;

int main()
{
	int n = 0;
	/* code main */
	printf("Quantos triângulos estaremos utilizando?\n");
	scanf("%d",&n);
	while (n > 0) {
		printf("Entre com o valor do primeiro cateto.\n");
		scanf("%d",&cateto1);
		cateto1 = cateto1 * cateto1;
		printf("Entre com o valor do segundo cateto.\n");
		scanf("%d",&cateto2);
		cateto2 = cateto2 * cateto2;
		hipotenusa = cateto1 + cateto2;
		printf("Hipotenusa² = %d\n",hipotenusa);
		n--;
	}
	return 0;
}