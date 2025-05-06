#include <stdio.h>
#include "bibfunc.h"

int main()
{
    int n;
    int r;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    printf("Digite um valor para r: ");
    scanf("%d", &r);

    float fn = fatorial(n);
    float fnr = fatorial(n - r);

    printf("Arranjos (n, r): %.0f\n", fatorial(n) / fatorial(n - r));
    printf("Combinação Simples: %.0f\n", fn / (fatorial(r) * fnr));
    return 0;
}
