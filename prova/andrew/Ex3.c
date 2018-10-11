#include <stdio.h>
int main()
{
	int a = 0;
	/* code main */
    printf("Digita 1 número entre 1 a 12 correspondente a um mes.\n");
    scanf("%d",&a);
    if (a == 1)
    {
    	/* code if 1 */
    	printf("Janeiro\n");
    }
    else if (a == 2)
    {
    	/* code if 2 */
    	printf("Fevereiro\n");
    }
    else if (a == 3)
    {
    	/* code if 3 */
    	printf("Março\n");
    }
    else if (a == 4)
    {
    	/* code if 4 */
    	printf("Abril\n");
    }
    else if (a == 5)
    {
    	/* code if 5 */
    	printf("Maio\n");
    }
    else if (a == 6)
    {
    	/* code if 6 */
    	printf("Junho\n");
    }
    else if (a == 7)
    {
    	/* code if 7 */
    	printf("Julho\n");
    }
    else if (a == 8)
    {
    	/* code if 8 */
    	printf("Agosto\n");
    }
    else if (a == 9)
    {
    	/* code if 9 */
    	printf("Setembro\n");
    }
    else if (a == 10)
    {
    	/* code if 10 */
    	printf("Outubro\n");
    }
    else if (a == 11)
    {
    	/* code if 11 */
    	printf("Novembro\n");
    }
    else if (a == 12)
    {
    	/* code if 12 */
    	printf("Dezembro\n");
    }
    else
    	/* code else (invalid) */
    	printf("Mês inválido.\n");
	return 0;
}