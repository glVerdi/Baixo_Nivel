#include <stdio.h>

int main(void) {

    int v[5]; // Declara um vetor de inteiros com 5 elementos

    float m;

    v[0] = 50; // Atribui o valor 50 ao primeiro elemento do vetor
    v[1] = 40; // Atribui o valor 40 ao segundo elemento do vetor
    v[2] = 30; // Atribui o valor 30 ao terceiro elemento do vetor
    v[3] = 20; // Atribui o valor 20 ao quarto elemento do vetor
    v[4] = 10; // Atribui o valor 10 ao quinto elemento do vetor

    m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5.0; // Calcula a média dos valores do vetor

    printf("Resultado: %.2f\n", m);

    return 0;
}