#include<stdio.h>

long fat(long n){
	if(n<0)
	  return -1;
	if(n==0 || n==1)
	  return 1;
	return n*fat(n-1);
}

int main(){
	int i;
	printf("Calculo do fatorial\n");
	printf(" i -- fat(i)\n");
	printf(" -----------------------\n");
	for(i=0; i<100; i++){
		printf("%2d -- %11ld \n",i, fat(i) );	
	}

	return 1;
}

