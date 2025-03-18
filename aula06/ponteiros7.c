#include <stdio.h>
//incremnta de 1 em 1

int main()
{
    int vet[] = { 4, 9, 12 };
    int i, *ptr;
    ptr = vet;
    for(i =0; i<3; i++)
        printf("%d ", (*ptr)++); // mostra valor atual e depois aumenta
    printf("\n");

    ptr = vet;
    for(i =0; i<3; i++)
    printf("%d ", *ptr++); // ptr anda na memória,
    printf("\n");
    return 1;
}