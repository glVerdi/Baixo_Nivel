#include <stdio.h>

int main (void)
{
  printf("Hello World!\n");
  return 0;
}

// ggc -E hello.c > hello.pre-processamento - gera o pré-processamento (pré-processamento)
// gcc -S hello.c - gera o assembler (compilação)