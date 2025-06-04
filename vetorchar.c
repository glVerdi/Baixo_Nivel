#include <stdio.h>

int main(void) {

    char s[10];

    printf("Digite algo (scanf convencional):\n");
    scanf("%s", s); // Não lê a string com espaços
    fflush(stdin); // Colocar quando se tem o scanf

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (scanf aprimorado):\n");
    scanf("%9[^\n]", s); // Consegue ler a string com espaço e vai até n-1 caracteres, o ultimo caracter fica reservado para o \0
    fflush(stdin);

    printf("Resultado> %s\n\n", s);

    return 0;
}