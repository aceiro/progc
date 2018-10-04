#include <stdio.h>
#include <string.h>
int main() {
 /* define first_name */
 /* define last_name */
	
char name[100];

char first_name[]={"John"};
char last_name[]={"Boe"};

/*
char first_name[5]; //John
char last_name[4];  //Boe

first_name[0]='J';
first_name[1]='o';
first_name[2]='h';
first_name[3]='n';
//first_name[4]='\0';

last_name[0] = 'B';
last_name[1] = 'o';
last_name[2] = 'e';
last_name[4] = '\0';
*/

sprintf(name, "%s -- %s", first_name, last_name);
printf("name = %s\n", name );
if (strncmp(name, "John -- Boe", 100) == 0) {
     printf("As strings sao iguais!\n");
}

name[0]='\0';  // JohnBoe
strncat(name,first_name,2);
strncat(name,last_name,20);
printf("%s\n",name);
return 0;
}
