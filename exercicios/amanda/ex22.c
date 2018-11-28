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
	char veiculo[15];
	char placa[8];
	char cor[15];
	int aux = 0;
	int count_veiculo = 0;
	int count_ano = 0;
	int count_placa = 0;
	int count_cor = 0;
    

	printf("**********************************************\n");
	printf("********** Questionário de veículos **********\n");
	printf("**********************************************\n\n");

	printf("Digite a quantidade de veículos que teremos no Questionário: ");
	scanf("%i", &quantidade_veiculos);
	setbuf(stdin, NULL);
	
	if (quantidade_veiculos > 10){
		printf("Limite máximo de carros atingidos! Máximo de 10 veículos\n");
	    
	} else {

		for(aux = 1; aux <= quantidade_veiculos; aux++) {
		    printf("Qual o modelo do veículo %i?\n", aux);
		    scanf("%[^\n]s", veiculo);
		    setbuf(stdin, NULL);
		    count_veiculo++;

		    printf("Qual é a cor do veículo %i?\n", aux);
		    scanf("%[^\n]s", cor);
		    setbuf(stdin, NULL);
		    	if(strcmp(cor, "Verde")){
		    		count_cor++;
				}
		    
		    printf("Qual o ano de fabricação do veículo %i?\n", aux);
		    scanf("%i", &ano);
		    setbuf(stdin, NULL);
		    count_ano++;
		    
		    printf("Qual é a placa do veículo %i?\n", aux);
		    fgets(placa, sizeof(placa), stdin);
		    printf("\n");
		    count_placa++;
		}
	}

	printf("Quantidade de verdes: %i\n", count_cor);


	
}