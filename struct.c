#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAm 50

struct tipo_pessoa {
    int idade;
    float peso;
    char nome[TAm];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(void) {

    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    // Criando e inicializando
    tipo_pessoa pessoa = {0, 0.0, "Teste"};

    printf("Início\n");
    printf("pesooa.idade: %d\n", pessoa.idade);
    printf("pessoa.peso: %.2f\n", pessoa.peso);
    printf("pessoa.nome: %s\n", pessoa.nome);

    // Atribuindo valores aos campos
    pessoa.idade = 10;
    pessoa.peso = 99.99;
    strcpy(pessoa.nome, "Texto");

    printf("\nAlterando os campos via código\n");
    printf("pesooa.idade: %d\n", pessoa.idade);
    printf("pessoa.peso: %.2f\n", pessoa.peso);
    printf("pessoa.nome: %s\n", pessoa.nome);

    // Solicitando inserções via teclado
    printf("\nInsira um número inteiro:\n");
    scanf("%d", &pessoa.idade);
    printf("Insira um número real:\n");
    scanf("%f", &pessoa.peso);
    fflush(stdin); // Limpa o buffer de entrada
    printf("Insira uma palavra:\n");
    scanf("%s", &pessoa.nome);

    printf("\nAlteraando com dados do usuário:\n");
    printf("pessoa.idade: %d\n", pessoa.idade);
    printf("pessoa.peso: %.2f\n", pessoa.peso);
    printf("pessoa.nome: %s\n", pessoa.nome);

    return 0;
}