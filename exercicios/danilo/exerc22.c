#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float pverde (int nverde, int ncar){
    float pv = (nverde * 100)/ncar;
    return pv;
}
float pantes90 (int before90, int ncar){
    float p90 = (before90 * 100)/ncar;
    return p90;
}
float pgol (int ngol, int ncar){
    float pg = (ngol * 100)/ncar;
    return pg;
}

int main (){

int ncar;
int nverde;
int ngol;
int before90;
char modelo [] = "";
int ano;
char cor [] = "";
char placa [9];
float pv;
float p90;
float pg;

printf("Dados do Veículo\n");

for (ncar=0; ncar <= 9; ncar++){

printf("Entre com o nome do veículo\n");
fgets(modelo, sizeof(modelo), stdin);
setbuf(stdin, NULL);

if (strcmp(modelo, "Gol")){
    ngol++;
}

printf("\nEntre com o ano de fabricação de seu veículo\n");
fgets(ano, sizeof(ano), stdin);
setbuf(stdin, NULL);

if (ano < 1990){
    before90++;
}

printf("\nInforme a cor de seu veículo\n");
fgets(cor, sizeof(cor), stdin);
setbuf(stdin, NULL);

if (strcmp(cor, "Verde")){
    nverde++;
}

printf("\nInforme a placa do seu veículo\n");
fgets(placa, sizeof(placa), stdin);
setbuf(stdin, NULL);
}

pv = pverde(nverde, ncar);
p90 = pantes90(before90, ncar);
pg = pgol(ngol, ncar);

printf("\n\t%d veículos são da cor verde!\nRepresentando %.2f% do total\n", nverde, pv);
printf("\n\t%d veículos foram fabricados antes de 1990!\nRepresentando %.2f% do total\n", before90, p90);
printf("\n\t%d veículos são do modelo Gol!\nRepresentando %.2f% do total\n", ngol, pg);

return 0;
}
