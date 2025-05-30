// Guarda valores informados pelo usuário
#include <stdio.h>

int main(void) {

    int idade = 0;
    float peso = 0.0;
    printf("Valor inicial da idade: %d.\n", idade); // Mostra o valor inicial da idade, que é 0.
    printf("Digite uma idade:\n");
    scanf("%d", &idade); // Lê um valor inteiro do usuário e armazena na variável idade.
    printf("Digite um peso:\n");
    scanf("%f", &peso); // Lê um valor real do usuário e armazena na variável peso.
    printf("Idade informada: %d.\n", idade);
    printf("Peso informado: %.2f.\n", peso);
    return 0;
}