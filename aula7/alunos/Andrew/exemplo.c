#include <stdio.h>
#include <string.h>

#define bufSize 1024
#define MAX_LINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char *argv[])
{
  int len;
  int max;
  char line[MAX_LINE];
  char longest[MAX_LINE];
  int line = 0;
  max = 0;
  FILE* fp;
  char buf[bufSize];
  if (argc != 2)
  {
    fprintf(stderr,
            "Usage: %s <soure-file>\n", argv[0]);
    return 1;
  }
  if ((fp = fopen(argv[1], "r")) == NULL)
  { /* Open source file. */
    perror("fopen source-file");
    return 1;
  }

  while (fgets(buf, sizeof(buf), fp) != NULL)
  {
    buf[strlen(buf) - 1] = '\0'; // eat the newline fgets() stores
    printf("%s\n", buf);
    line++;
  }
  fclose(fp);
  printf("I read a total of %d lines.\n",line);
  return 0;
}
