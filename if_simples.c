#include <stdio.h>

int main(void) {

    float m;

    printf("Insira a nota:\n");
    scanf("%f", &m);

    if (m >= 7.0) {
        printf("Aprovado(a)!\n");
    }

    return 0;
}