#include <stdio.h>
#include <locale.h> //biblioteca de idiomas - corrige problemas de acentuação


	int main(){
		setlocale(LC_ALL,"Portuguese");
 	/* TODO: defina a variÃ¡vel grades */
 		int average;
 		
		int grades[2];
 		grades[0] = 80;
 	/* TODO: defina o valor 85 para grades para que a média seja 85 */
 		grades[1] = 85;
 		grades[2] = 90;
 		average = (grades[0] + grades[1] + grades[2]) / 3;
		printf("A média dos 3 é: %d", average);
}
