/*22. Condicional - Leitura de Strings
Faça a leitura de dados de veículos, modelo, ano de fabricação, cor e placa de no máximo 10 carros.
Em seguida processe os dados referentes aos veículos lidos de forma que:
a) Imprima quantos são da cor verde e o percentual em relação ao total.
b) Imprima quantos foram fabricados antes de 1990 e o percentual em relação ao total.
c) Imprima quantos são "GOL" e o percentual em relação ao total.*/

#include <stdio.h>

#define MAX_VEICULOS 10

int main(){
	
	int ano, quantidade_veiculos;
	char veiculo;
	char placa[8];
	int aux = 0;
	int count_veiculo = 0;
	int count_ano = 0;
	int count_placa = 0;
    

	printf("**********************************************\n");
	printf("********** Questionário de veículos **********\n");
	printf("**********************************************\n\n");

	printf("Digite a quantidade de veículos que teremos no Questionário: ");
	scanf("%i", &quantidade_veiculos);
	
	if (quantidade_veiculos > 10){
		printf("Limite máximo de carros atingidos! Máximo de 10 veículos\n");
	    
	} else {

		for(int aux = 1; aux <= quantidade_veiculos; aux++) {
		    printf("Qual o modelo do veículo %i?\n", aux);
		    scanf("%s", &veiculo);
		    count_veiculo++;
		    
		    printf("Qual o ano de fabricação do veículo?\n");
		    scanf("%i", &ano);
		    setbuf(stdin, NULL);
		    count_ano++;
		    
		    printf("Qual é a placa do veículo?\n");
		    fgets(placa, sizeof(placa), stdin);
		    count_placa++;
		}
	}
	
}