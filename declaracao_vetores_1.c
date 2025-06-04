#include <stdio.h>

int main(void) {

    int v[5] = {10, 20, 30, 40, 50}; // Declara e inicializa um vetor de inteiros com 5 elementos
    int i;
    float soma = 0.0; // Variável para armazenar a soma dos elementos do vetor

    for (i = 0; i < 5; i++) { // Loop para percorrer cada elemento do vetor
        soma += v[i]; // Soma cada elemento do vetor à variável s
    }

    printf("Resultado: %.2f\n", soma / 5.0); // Calcula e exibe a média dos elementos do vetor

    return 0;
}