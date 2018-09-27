#include<stdio.h>

#define MAX_NOME 50

void get_line(char *line, int limit){
     int  i = 0;
     char c = '\0';

     while( (i < limit-1) && (c = getchar()) && (c!=EOF) && (c!='\n') ) /* evita problemas de Buffer Overflow pois limita a qtd de chars*/
	     line[i++] = c;

     line[i] = '\0';
}


int main(){


    // Para resolver o exercício 8 é preciso fazer a leitura de dados via teclado
    // para isso algumas formas são apresentadas abaixo
    //

    	
    char nome[MAX_NOME]; /* declaração do vetor de caracteres para representar um tipo i.e., nome como "Richard Feynman" */
    char lixo[100];
    size_t len = 0;
    char *ptr_nome;


    

    // 1) Essa primeira forma usa o comando scanf()
    // com o comando scanf() não é possível ler espaços
    // para o vetor. Esse efeito é próprio do scanf do C	
    printf("Digite seu nome:");
    scanf("%s", nome);         /* sem o & pois é um endereço */
    printf("Exemplo com scanf() -- Nome: %s", nome);

    // 2) Usando o comando gets()
    // A função gets é perigosa e pode causionar problemas Buffer Overflow. Em geral, 
    // esse problema de Buffer Overflow deve ser contornado por outras funções
    // Veja a mensagem de Warning
    // ex8.c:(.text+0x66): warning: the `gets' function is dangerous and should not be used.

    gets(lixo);
    puts("Digite seu nome:");
    gets(nome);
    puts("Exemplo com gets() -- Nome:");
    puts(nome);

    // 3) Usando a função fgets()
    // fgets(buffer, sizeof(buffer), stdin)
    //
    printf("Digite seu nome:");
    fgets(nome, sizeof(nome), stdin);
    printf("Exemplo com fgets() -- Nome:%s", nome);


    // 4) Usando a função getline
    // getline(&line, &len, fp)

    printf("Digite seu nome:");
    getline(&ptr_nome, &len, stdin);
    printf("Exemplo com getline() -- Nome:%s", ptr_nome);


    // 5) Implementando uma função manulamente - get_line()
    printf("Digite o nome: ");
    get_line(nome, MAX_NOME);
    printf("Exemplo com função própria -- Nome: %s", nome);

    return 0;

}
