#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    char s1[N] = {"Lógica de"};
    char s2[N] = {" Programação"};

    printf("Antes do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);

    strcat(s1, s2);

    printf("Depois deo strcat:\n");
    puts(s1);

    return 0;
}