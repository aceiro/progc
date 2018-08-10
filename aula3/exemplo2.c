#include <stdio.h>
/* ***********************************************************
 * Imprime os valores de Fahrenheit-Celsius de 0, 20,..., 300
 * ***********************************************************/

int main(){
	int fahr, celsius;		// declaração de variáveis
	int lower, upper, step;

	lower = 0;			// inicialização com valores padrões
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {		// loop que executa enquanto a condição
					// for verdadeira
					// converte de Fahr para Celsius
					
            celsius = 5 * (fahr-32) / 9;        
	    printf("%d\t%d\n", fahr, celsius);
	    fahr = fahr + step;
	}
	return 0;                       // retorna 0(sem erros) para o SO
}
