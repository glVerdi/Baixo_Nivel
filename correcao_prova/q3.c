#include <stdio.h>

void dobro(double *n)
{
    *n = *n * 2;
}

int mains(void)
{
    double a = 7.0;
    dobro(&a);
    printf("A=%.0f\n", a);
    return 0;
}