#include <stdio.h>

int main(void) {

    printf("Oi, tudo bem? Tenho 6 anos e programo.\n");
    printf("Valor inteiro: %d.\n", 10); // %d será substituido pelo valor 10
    printf("Valor real: %f.\n", 3.14159265); // %f será substituido pelo valor 3.14159265
    printf("Valor real com apenas duas casas decimais: %.2f.\n", 3.14159265); // %.2f será substituido pelo valor 3.14.
    printf("Dados de texto: %c.\n", 'a'); // %c será substituido pelo caractere 'a'
    printf("Dados de texto: %s.\n", "testando"); // %s será substituido pela string "testando"
    return 0;
}