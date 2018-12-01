/*22. Condicional - Leitura de Strings
Faça a leitura de dados de veículos, modelo, ano de fabricação, cor e placa de no máximo 10 carros.
Em seguida processe os dados referentes aos veículos lidos de forma que:
a) Imprima quantos são da cor verde e o percentual em relação ao total.
b) Imprima quantos foram fabricados antes de 1990 e o percentual em relação ao total.
c) Imprima quantos são "GOL" e o percentual em relação ao total.*/

#include <stdio.h>
#include <string.h>

#define MAX_VEICULOS 10

int main(){
	
	int ano, quantidade_veiculos, total;
	char veiculo[15];
	char placa[10];
	char cor[15];
	int aux = 0;
	char cor_verde[] = "verde";
	char carro_gol[] = "gol";
	float count_verde, count_ano_anterior, count_gol = 0;
	float total_veiculos_verdes;	

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
		    	if(strcmp(veiculo, carro_gol) == 0){
		    		count_gol++;
		    	}

		    printf("Qual é a cor do veículo %i?\n", aux);
		    scanf("%[^\n]s", cor);
		    setbuf(stdin, NULL);
		    	if(strcmp(cor, cor_verde) == 0){
		    		count_verde++;
				}
		    
		    printf("Qual o ano de fabricação do veículo %i?\n", aux);
		    scanf("%i", &ano);
		    setbuf(stdin, NULL);
		    	if(ano <= 1990){
		    		count_ano_anterior++;
		    	}
		    
		    
		    printf("Qual é a placa do veículo %i?\n", aux);
		    fgets(placa, sizeof(placa), stdin);
		    setbuf(stdin, NULL);
		    printf("\n");
		    
		}
	}

	printf("%.2f%% dos veículos são verdes. \n", ((count_verde/quantidade_veiculos)*100));
	printf("%.2f%% dos veículos foram fabricados antes de 1990. \n", ((count_ano_anterior/quantidade_veiculos)*100));
	printf("%.2f%% dos veículos são do modelo Gol. \n", ((count_gol/quantidade_veiculos)*100));
	
}