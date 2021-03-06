#include <stdio.h>
#include <string.h>
 
#define bufSize 1024 // 1Mbytes ~ 1 byte - 8 bits
 
int main(int argc, char *argv[]){
  FILE* fp;
  char buf[bufSize];
  int linha;
  if (argc != 2)  {
    fprintf(stderr, "Usage: %s <soure-file>\n", argv[0]);
    return 1;
  }
  
  if ((fp = fopen(argv[1], "r")) == NULL)
  { /* Open source file. */perror("fopen source-file");
    return 1;
  }
 
  while (fgets(buf, sizeof(buf), fp) != NULL)
  {
    linha++;
    buf[strlen(buf) - 1] = '\0'; // eat the newline fgets() stores
    printf("%i %s\n", linha, buf);
  }

  printf("Quantidade de linhas: %i\n", linha);

  fclose(fp);
  return 0;
}