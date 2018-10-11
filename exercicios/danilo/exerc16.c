#include <stdio.h>

int main (){
	
	int fimplaca;
	
	printf("Controle de Rodízio de trânsito em São Paulo \n\n");
	printf("Informe o último algarismo da placa de seu veículo \n");
	scanf("%d", &fimplaca);
	
	switch (fimplaca){
		
	case 1 : printf("Seu veículo não pode transitar ás Segundas \n");
	break;
	
	case 2 : printf("Seu veículo não pode transitar ás Segundas \n");
	break;
	
	case 3 : printf("Seu veículo não pode transitar ás Terças \n");
	break;
	
	case 4 : printf("Seu veículo não pode transitar ás Terças \n");
	break;
	
	case 5 : printf("Seu veículo não pode transitar ás Quartas \n");
	break;
	
	case 6 : printf("Seu veículo não pode transitar ás Quartas \n");
	break;
	
	case 7 : printf("Seu veículo não pode transitar ás Quintas \n");
	break;
	
	case 8 : printf("Seu veículo não pode transitar ás Quintas \n");
	break;
	
	case 9 : printf("Seu veículo não pode transitar ás Sextas \n");
	break;
	
	case 0 :  printf("Seu veículo não pode transitar ás Sextas \n");
	break;
	
	default :
	printf("Número informado incorreto, por favor insira somente o último algarismo da placa \n");
	}
	return 0;
}
