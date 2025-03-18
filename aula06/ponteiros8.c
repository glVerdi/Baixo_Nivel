#include <stdio.h>
// Considere o seguinte código, que exibe o conteúdo do array junto ao endereço de memória de cada elemento:
// Você consegue alterar o código, fazendo que ele exiba o conteúdo de cada byte do array?
int main()
{
    int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* ptr = nums;
    int i, bytes;
    for(i=0, bytes=0; i<10; i++, bytes+=4)
        printf("%d: %p + %d bytes = %p ==> %d\n",
            i, ptr, bytes, (ptr+i), *(ptr+i));
    return 0;
}