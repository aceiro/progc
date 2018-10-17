#include <stdio.h>

int validaMes(int mes){
	if ((mes == 0) && (mes > 12)){
		printf("\nN�mero %d n�o corresponde a nenhum m�s", mes);
		}
	else{
		return (mes);
	}
}

int main (){
	
	int mes;
	
	printf("\n\tVerfica��o de meses por seu respectivo n�mero\n");
	printf("\nInsira um n�mero no intervalo de 1 a 12: ");
	scanf("%d", &mes);
	
	mes = validaMes(mes);
	
	switch(mes){
		
	case 1 : printf("Janeiro\n");
	break;
	
	case 2 : printf("Fevereiro\n");
	break;
	
	case 3 : printf("Mar�o\n");
	break;
	
	case 4 : printf("Abril\n");
	break;
	
	case 5 : printf("Maio\n");
	break;
	
	case 6 : printf("Junho\n");
	break;
	
	case 7 : printf("Julho\n");
	break;
	
	case 8 : printf("Agosto\n");
	break;
	
	case 9 : printf("Setembro\n");
	break;
	
	case 10 : printf("Outubro\n");
	break;
	
	case 11 : printf("Novembro\n");
	break;
	
	case 12 : printf("Dezembro\n");
	break;
	
	default : printf(mes);
	break;
	}
	return 0;
}

