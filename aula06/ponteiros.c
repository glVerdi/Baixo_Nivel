#include <stdio.h>
// Endereço de uma variavel

int main(void) {
    int b = 200;
    printf("%p\n", &b); // & retorna endereço, %p exibe o valor como um endereço de memória em hexa
    return 0;
}