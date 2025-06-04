#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    char origem[N] = {"Olá, mundo!"};
    char destino[N];

    printf("Antes do strcpy\n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem); // Copia a string de origem para destino

    printf("Depois do strcpy\n");
    puts(origem);
    puts(destino);

    return 0;
}