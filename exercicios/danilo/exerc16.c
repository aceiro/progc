#include <stdio.h>

int main (){
	
	int fimplaca;
	
	printf("Controle de Rod�zio de tr�nsito em S�o Paulo \n\n");
	printf("Informe o �ltimo algarismo da placa de seu ve�culo \n");
	scanf("%d", &fimplaca);
	
	switch (fimplaca){
		
	case 1 : printf("Seu ve�culo n�o pode transitar �s Segundas \n");
	break;
	
	case 2 : printf("Seu ve�culo n�o pode transitar �s Segundas \n");
	break;
	
	case 3 : printf("Seu ve�culo n�o pode transitar �s Ter�as \n");
	break;
	
	case 4 : printf("Seu ve�culo n�o pode transitar �s Ter�as \n");
	break;
	
	case 5 : printf("Seu ve�culo n�o pode transitar �s Quartas \n");
	break;
	
	case 6 : printf("Seu ve�culo n�o pode transitar �s Quartas \n");
	break;
	
	case 7 : printf("Seu ve�culo n�o pode transitar �s Quintas \n");
	break;
	
	case 8 : printf("Seu ve�culo n�o pode transitar �s Quintas \n");
	break;
	
	case 9 : printf("Seu ve�culo n�o pode transitar �s Sextas \n");
	break;
	
	case 0 :  printf("Seu ve�culo n�o pode transitar �s Sextas \n");
	break;
	
	default :
	printf("N�mero informado incorreto, por favor insira somente o �ltimo algarismo da placa \n");
	}
	return 0;
}
