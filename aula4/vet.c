#include <stdio.h>

int dec2digit(int c){
	return -1;
}

int is_digit(int c){
	return 0;
}

int main(){
	int c,i, nwhite, nother;
	int ndigit[10];
	int digit;
	digit =	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF){
		digit = c;

		if (is_digit(digit)){
			++ndigit[dec2digit(digit)];
		}
		else if (c == '\0' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;	
	}
	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);

	printf(", white space = %d, other = %d\n", nwhite, nother);

	return 0;
}
