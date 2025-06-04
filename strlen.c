#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    char s[N];
    int i;

    printf("Digite um texto\n");
    gets(s);
    i = strlen(s);
    printf("\nTamanho do texto: %d\n\n", i);

    printf("Impressão de posição a posição\n");
    for (i = 0; i < strlen(s); i++) {
        printf("%c", s[i]);
    }

    return 0;
}