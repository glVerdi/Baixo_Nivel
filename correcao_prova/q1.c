#include <stdio.h>

int contar(char *s, char c);

int contarFor(char *s, char c)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    return count;
}

int contarWhile(char *s, char c)
{
    int count = 0;
    while (*s != '\0')
    {
        if (*s == c)
        {
            count++;
        }
        s++;
    }
    return count;
}

int main(void)
{
    int c = contar("Hello Worls", '0');
    printf("C = %d\n", c);
    return 0;
}