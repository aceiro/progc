#define MAX 10

int dectobin(int num){
	int r;
	int q;
	int num;

	do{
		q = num/2;
		r = num%2;
	}
	while(q>=2);
}
void prnt_vet(int vet[], int num){
	if (num == MAX)
		return;
	printf("vet[%d]:%d\n", num, vet[num]);
	prnt_vet(vet, num+1);
} 
void r_vet (int vet[], int num){
	if (num == MAX)
		return;
	printf("vet[%d]", num);
	scanf("%d", &vet[num]);
	r_vet(vet, num+1);
}
int main(){

	int vet[MAX];
	r_vet(vet,0);
	prnt_vet(vet,0);
	return 0;
}