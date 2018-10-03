#include <stdio.h>

int main()
{
	float average;
	int grades [3] = {80, 85, 90};
		
	average = (grades[0] + grades[1] + grades[2])/3;
	printf("A média entre as três grades é de: %f\n", average);
}