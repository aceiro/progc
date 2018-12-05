#include<stdio.h>
#include<math.h>
#define MAX 10

unsigned long to_bin(int n){
	unsigned long val, q, r, e;
	val = e = q = r = 0;
	do{
		q = n/2;
		r = n%2;
		val = val + (r*pow(10, e));
		n = q;
		e++;
	}while(q>=1);

	return val; 
}

void print_vet(int v[], int n){
	if(n==MAX)
		return;
	if(n==0){
	 	printf("v[i]:value -- binary\n");
		printf("-------------------------\n");
	}
	printf("v[%d]:%05d -- %012lu\n", n,v[n], to_bin(v[n]));
	print_vet(v, n+1);
}

void read_vet(int v[], int n){
	if(n==MAX)
		return;
	printf("v[%d]:", n);
	scanf("%d", &v[n]);
	read_vet(v, n+1);
}


int main(){
	int vet[MAX]; /*variável de ponteiro - ref*/
	read_vet(vet,0);
	printf("\n");
	print_vet(vet,0);
	return 1;
}

