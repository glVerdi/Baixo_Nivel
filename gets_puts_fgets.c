#include <stdio.h>

int main (void) {

    char s[10];

    printf("Digite algo (leitura pelo gets):\n");
    gets(s);
    fflush(stdin); // Limpa o buffer de entrada, embora gets não seja recomendado

    puts("Resultado:");
    puts(s); // Exibe a string lida
    puts(""); 

    printf("Digite algo (leitura pelo fgets):\n");
    fgets(s, 10, stdin); // Lê até 9 caracteres e adiciona o terminador nulo
    fflush(stdin); // Limpa o buffer de entrada

    puts("Resultado:");
    puts(s); // Exibe a string lida com fgets

    return 0;
}