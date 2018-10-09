#include <stdio.h>
#include <string.h>
int main (){
	/* define first name */
	/* define last name */
	char name[100];

	char first_name[] = {"Jonh"};
	char last_name[] = {"Boe"};

	/*
	
	char first_name[5]; // Jonh
	char last_name[4]; // Boe

	first_name[0] = 'J';
	first_name[1] = 'O';
	first_name[2] = 'N';
	first_name[3] = 'H';
	first_name[4] = '/0';

	last_name[1] = 'B';
	last_name[2] = 'O';
	last_name[3] = 'E';
	last_name[4] = '/0';

	*/
	
	sprintf(name, "%s -- %s", first_name, last_name);
	if (strncmp(name, "Jonh -- Boe", 100) == 0) {
		printf("Done!\n");
	}
	name[0] = '\0'; //JonhBoe
	strncat(name,first_name,4);
	strncat(name,last_name,20);
	printf("%s\n", name);
	return 0;
}