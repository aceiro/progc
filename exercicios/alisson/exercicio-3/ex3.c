#include <stdio.h>
	int main() {
/* TODO: defina a variável grades */
		int grades[3];
		int average;
		grades[0] = 80;
		grades[1] = 85;

/* TODO: defina o valor 85 para grades para que a média
seja 85 */
		grades[2] = 90;
		average = (grades[0] + grades[1] + grades[2]) / 3;
		printf("\n The average of the 3 grades is: %d \n \n", average);
		return 0;
	}