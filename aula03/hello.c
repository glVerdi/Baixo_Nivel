#include <stdio.h>

int main (void)
{
  printf("Hello World!\n");
  return 0;
}

// ggc -E hello.c > hello.pre-processamento - gera o pré-processamento (pré-processamento), está no hello.pre-processamento
// gcc -S hello.c - gera o assembler (compilação), está no hello.s
// gcc -c hello.c - não faz ligações com nenhuma biblioteca, está no hello.c