#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

struct tipo_pessoa {
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int  main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    tipo_pessoa lista[TAM]; // Declaração de um vetor de tamanho 3 do tipo tipo_pessoa, para cada posição tem os 3 campos de uma pessoa
    int i;

    for (i = 0; i < TAM; i++ ) {
        printf("Insira os dados (%d):\n", i + 1);
        puts("Nome: ");
        scanf("%50[^\n]s", &lista[i].nome); // Lê uma string com espaços, até o máximo de 50 caracteres
        fflush(stdin); // Limpa o buffer de entrada

        puts("Idade: ");
        scanf("%d", &lista[i].idade); // Lê um número inteiro
        fflush(stdin); // Limpa o buffer de entrada

        puts("Peso: ");
        scanf("%f", &lista[i].peso); // Lê um número real
        fflush(stdin); // Limpa o buffer de entrada
    }
    system("cls"); // Limpa a tela do console

    puts("Seus dados:\n");
    for (i = 0; i < TAM; i++) {
        printf("------------ Pessoa %d ------------\n", i + 1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %.2f\n", lista[i].peso);
    }
    printf("-----------------------------------\n");

    return 0;
}