#include <stdio.h>
#include <string.h>

float reajSal (float salb){
	float reaj = salb * 0.38;
	return reaj;
}

float gratificacao (float salb, float reaj){
	float grat = (salb + reaj) * 0.2;
	return grat;
}

float calcSalTot (float salb, float grat, float reaj){
	float salt = (salb + reaj + grat) - (salb + reaj + grat)*0.15;
	return salt;
}

int main (){

	char nome[20];
	int idade;
	char cargo[20];
	float salb;
	float salt;
	float reaj;
	float grat;

	printf("\n\tReajuste salarial de funcionários\n");
	printf("\nInforme o nome do funcionário\n");
	fgets(nome, sizeof(nome), stdin);

	printf("\nInforme a idade do funcionário\n");
	scanf("%d", &idade);
	fflush(stdin);

	printf("\nInforme o cargo do funcionário\n");
	fgets(cargo, sizeof(cargo), stdin);
	fflush(stdin);

	printf("\nInforme o salário bruto desse funcionário\n");
	scanf("%f", &salb);
	fflush(stdin);

	reaj = reajSal(salb);
	grat = gratificacao(salb, reaj);
	salt = calcSalTot(salb, grat, reaj);

	printf("\nFuncionário: %s\n");
	printf("\nCargo: %s\n");
	printf("\nIdade: %d\n");
	printf("\nSalário bruto do funcionário: %.2f\n");
	printf("\nSalário total do funcionário: %.2f\n");

	return 0;

}
