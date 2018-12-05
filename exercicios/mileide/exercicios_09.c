#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
 /* define first_name */
 /* define last_name */
	
char name[100];
char first_name[]={"John"};
char last_name[]={"Boe"};

sprintf(name, "%s -- %s", first_name, last_name);
printf("Name = %s\n", name );
if (strncmp(name, "John -- Boe", 100) == 0) {
     printf("As strings são iguais!\n");
}
else{
	printf("As strings são diferentes!\n");
}

name[0]='\0';  // JohnBoe
strncat(name,first_name,2);
strncat(name,last_name,20);
printf("%s\n",name);
return 0;
}
