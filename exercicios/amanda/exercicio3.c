#include <stdio.h>
#define MAX_LIMIT 3

int main () {
	/*TODO: defina a variavel grades*/
	int average, grades[MAX_LIMIT];

	grades [0] = 80;
	grades [1] = 85;
	grades [2] = 90;

	average = (grades[0] + grades[1] + grades[2]) / 3;
	printf("The average of the 3 grades is %d\n", average );
}