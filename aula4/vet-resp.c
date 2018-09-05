#include <stdio.h>

int dec2digit(int c){
	switch(c){
		case 48: return 0;
		case 49: return 1;
		case 50: return 2;
		case 51: return 3;
		case 52: return 4;
		case 53: return 5;
		case 54: return 6;
		case 55: return 7;
		case 56: return 8;
		case 57: return 9;
		default:
			return -1;			
	}

}

int is_digit(int c){
	if(dec2digit(c)!=-1)
		return 1;
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
