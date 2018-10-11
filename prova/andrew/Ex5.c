#include <stdio.h>
#include <string.h>


char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main()
{
	/* code main */
    char text1[100], text2[100], i;
    printf("Entre com a linha.\n");
    scanf("%s",text1);
    strcpy(text1, text2);
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

