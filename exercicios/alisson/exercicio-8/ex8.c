#include <stdio.h>
#define MAX_CHAR 50

int main(){
//nome, endereço, cep, telefone, idade, numero de filhos, cidade e salário.

    

        
    char nome[MAX_CHAR]; /* declaração do vetor de caracteres para representar um tipo i.e., nome como "Richard Feynman" */
    char endereco[MAX_CHAR];
    char cep[MAX_CHAR];
    char telefone[MAX_CHAR];
    char idade[MAX_CHAR];
    char filhos[MAX_CHAR];
    char cidade[MAX_CHAR];
    char salario[MAX_CHAR];


    printf("\nDigite seu nome:\n");
    fgets(nome, sizeof(nome), stdin);
    
     printf("\nDigite seu endereco:\n");
    fgets(endereco, sizeof(endereco), stdin);

     printf("\nDigite seu cep:\n");
    fgets(cep, sizeof(cep), stdin);

     printf("\nDigite seu telefone:\n");
    fgets(telefone, sizeof(telefone), stdin);

     printf("\nDigite sua idade:\n");
    fgets(idade, sizeof(idade), stdin);
    
     printf("\nDigite o numero de filhos:\n");
    fgets(filhos, sizeof(filhos), stdin);

     printf("\nDigite sua cidade:\n");
    fgets(cidade, sizeof(cidade), stdin);



     printf("\nDigite seu salario:\n");
    fgets(salario, sizeof(salario), stdin);

    printf("__________________________\n");
    
    printf("\nNome:%s\n", nome);
    printf("Endereço:%s\n", endereco);
    printf("Cep:%s\n", cep);
    printf("Nome:%s\n", nome);
    printf("Telefone:%s\n", telefone);
    printf("Eidade:%s\n", idade);
    printf("Filhos:%s\n", filhos);
    printf("Cidade:%s\n", cidade);

    return 0;

}
