#include <stdio.h>

#define texto "Entrada e saída de dados."

int main(void) {
    printf("%s\n", texto); // Mostra o texto definido na macro texto.

    int idade = 0;
    float altura = 0.0;
    char nome[50] = ""; //A varivel texto não tem nada dentro dela, mas pode armazenar até 50 caracteres.

    printf("Digite a idade:\n");
    scanf("%d", &idade);

    printf("Digite a altura:\n");
    scanf("%f", &altura);

    printf("Digite o nome:\n");
    scanf("%s", nome);

    printf("Dados informados:\n");
    printf("Idade: %d.\n", idade);
    printf("Altura: %.2f.\n", altura);
    printf("Nome: %s.\n", nome);

    return 0;
}