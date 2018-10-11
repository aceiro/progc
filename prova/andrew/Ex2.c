#include <stdio.h>

int main()
{
int opt = 0; 
	printf("Qual opção você gostaria de utilizar?\n");
		printf("(1) – Laço For; (2) Laço While; (3) Laço Do-While\n");
    scanf("%d",&opt);
    if (opt == 1)
    {
    	/* code for */
    	int i = 200;
   /* for loop exe */
   for( i = 200; i > 0; i-- ){
      printf("%d\n", i);
   }
    }    else if (opt == 2)
    {
    	/* code while */
    	int i = 200;
    	while (i > 0) {
    		printf("%d\n",i );
    		i--;

    	}
    }    else if (opt == 3)
    {
    	/* code do-while*/
    	int i = 200;
    	do
    	{
    		/* code do */
    		printf("%d\n",i );
    		i--;
    	} while (i > 0);
    }    else
    printf("Algo deu errado.\n");
	return 0;
}