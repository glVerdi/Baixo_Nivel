#include <stdio.h>

double ftoc(double f)
{
    double c;
    c = 5.0 / 9.0 * (f - 32);
    return c;
}

int main(void)
{
    printf("%lf F = %lf C\n", 451.0, ftoc(451.0));
}