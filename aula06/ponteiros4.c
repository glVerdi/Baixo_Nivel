#include <stdio.h>
//Erro

int main(void) {
    int a = 200;
    int* b;
    printf("Conteudo apontado por b: %d\n", *b); // Ira gerar segmentation fault
    return 0;
}