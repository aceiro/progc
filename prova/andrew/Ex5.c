#include <stdio.h>
#include <string.h>

int main()
{
	/* code main */
    char text1[100], text2[100], i;
    printf("Entre com a linha.\n");
    scanf("%s",text1);

    text2[100] = text1[100];
    strrev(text2);
    if (strcmp(text1, text2) == 0)
    {
    /* code if */
    printf("A linha é palindroma.\n");
    }
    else
    	printf("A linha não é palindroma.\n");
    return 0;
}