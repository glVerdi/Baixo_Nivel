#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main (void) {
    double raio;
    double x;
    double area;
    printf("Endereço da variável area: %p\n", &area);
    printf("Endereço da variável raio: %p\n", &raio);
    printf("Endereço da variável x: %p\n", &x);
    scanf("%lf", &area);
    area = PI * pow(raio, 2);
    printf("A=%.4f\n", area);
    return 0;
}