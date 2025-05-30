#include <stdio.h>

int main(void) {

    int i = 1; // Inicializa a variável i com 1

    do {
        printf("%d ", i); // Imprime o valor atual de i
        i++; // Incrementa i em 1 a cada iteração
    } while (i <= 10); // O loop do-while continuará executando enquanto i for menor ou igual a 10

    return 0;
}
