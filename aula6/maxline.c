/**
 * maxline
 *
 * Aula 6 - Exemplo de aula com Arrays de Caracteres (Vetores de Caracteres)
 * Exemplo adaptado do Livro C Programming Language 2nd Edition
 * 
 * para compilar e usar em linha de comando:
 * 
 * $ gcc maxline.c -o maxline
 * $ ./maxline < /proc/cpuinfo
 *
 *
 **/

#include <stdio.h>
#define MAX_LINE 1000   /* define o tamanho máximo do vetores de caractes a sere lido via I/O */

/* declaração das rotinas a serem usadas */
int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* main-loop */
int main(){
     int len;
     int max;
     char line[MAX_LINE];
     char longest[MAX_LINE];

     max = 0;
     while( (len = get_line(line, MAX_LINE)) >0 )
           if (len > max ){
               max  = len;
               copy(longest, line);
           }
     if( max > 0)
         printf("%s", longest);
     return 0;   
}


int get_line(char s[], int lim){
     int c, i=-1;
     for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; i++)
         s[i]=c;
     if (c == '\n'){
           s[i]=c;
           i++;
     }
     s[i]='\0';
     return i;
}

void copy(char to[], char from[]){
      int i;
      i = 0;
      while( (to[i]=from[i]) !='\0' ) i++;
}
