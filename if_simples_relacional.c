#include <stdio.h>

int main(void) {

    float m;

    printf("Insira a nota:\n");
    scanf("%f", &m);

    if (m >= 4.0 && m < 7.0) {
        printf("Tem direito a exame!\n");
    }

    return 0;
}