#include <stdio.h>

float calcPrecoImposto(float precoF){
	float imp = precoF * 0.45;
	return imp;
}	

float porcRevendedor(float precoF){
	float rev = precoF * 0.28;
	return rev;
}

float calcPrecoTotal (float precoF, float imp, float rev){
	float precoT = precoF + imp + rev;
	return precoT;
}

int main (){
	
	float precoT;
	float precoF;
	float imp;
	float rev;
	char nomeAuto[30];
			
	printf("Informe o pre�o de f�brica do autom�vel: \n");
	scanf("%f", &precoF);
	fflush(stdin);
	
	printf("\n Informe o nome do ve�culo: \n");
	fgets(nomeAuto, sizeof(nomeAuto), stdin);
	
	imp = calcPrecoImposto(precoF);
	rev = porcRevendedor(precoF);
	precoT = calcPrecoTotal(precoF, imp, rev);
	
	printf("Nome do Autom�vel: %s \n", nomeAuto);
	printf("Valor a pagar pelo Autom�vel R$: %.2f", precoT);
	return 0;
}
