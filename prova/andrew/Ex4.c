#include <stdio.h>
#include <math.h>

float hipotenusa = 0;
float cateto1 = 0;
float cateto2 = 0;

float main()
{
	float n = 0;
	/* code main */
	printf("Quantos triângulos estaremos utilizando?\n");
	scanf("%f",&n);
	while (n > 0) {
		printf("Entre com o valor do primeiro cateto.\n");
		scanf("%f",&cateto1);
		printf("Entre com o valor do segundo cateto.\n");
		scanf("%f",&cateto2);
		hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
		printf("Hipotenusa = %f\n",hipotenusa);
		n--;
	}
	return 0;
}