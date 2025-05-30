#include <stdio.h>

int main(void) {

    int i; // Declara a variável i que será usada no loop

    for(i = 1; i <= 10; i++) { // Inicializa a variável i com 1 e continua até 10
        // O loop for continuará executando enquanto i for menor ou igual a 10
        printf("%d ", i); // Imprime o valor atual de i
    }

    return 0;
}