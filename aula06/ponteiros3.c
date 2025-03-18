#include <stdio.h>

int main(void) {
    int b = 200;
    int* a = &b; // armazna o endereço de b

    printf("Valor de b: %d\n", b);
    printf("Valor de a: %p\n", a);
    printf("Conteúdo apontado por a: %d", *a); // *a operador de deferencia
    return 0;
}