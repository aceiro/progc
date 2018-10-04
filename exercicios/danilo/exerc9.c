#include <stdio.h>
#include <string.h>

int main()
{ 
	char first_name [10] = "Danilo";
  	char last_name [10] = "Alves";
  	char name[100];

  	first_name[0] = 'D';
  	first_name[1] = 'a';
  	first_name[2] = 'n';
  	first_name[3] = 'i';
  	first_name[4] = 'l';
  	first_name[5] = 'o';

  	last_name[0] = 'A';
  	last_name[1] = 'l';
  	last_name[2] = 'v';
  	last_name[3] = 'e';
  	last_name[4] = 's';

  	sprintf(name, "%s %s", first_name, last_name);
  	if (strncmp(name, "Danilo Alves", 100) == 0){	/*strncmp serve para comparar duas strings*/
  		printf("Done!\n");
  	}
  	name[0]='\0';
  	strncat(name, first_name, 7);	/*strncat serve para concatenar ou copiar strings, colocando a quantidade limite na frente*/
  	strncat(name, last_name, 20);
  	printf("%s \n", name);
	
	return 0;
}