#include <stdio.h>
#include <stdlib.h>

typedef struct A
{
    int value;
    struct A *next;
} Node;

Node *add(Node *n, int v);
void print(Node *n);

Node *add(Node *n, int v)
{
    if (n == NULL)
    {
        Node *p = (Node *)malloc(sizeof(Node));
        p->value = v;
        p->next = NULL;
        return p;
    }
    else
    {
        n->next = add(n->next, v);
    }
    return n;
}

void print(Node *n)
{
    if (n == NULL)
    {
        printf("#\n");
    }
    else
    {
        printf("%d\t", n->value);
        print(n->next);
    }
}

int main(void)
{
    Node *list1 = NULL;
    printf("LISTAS!\n");
    printf(list1);
    list1 = add(list1, 42);
    print(list1);
    list1 = add(list1, 37);
    print(list1);
    free(list1); // MEMORY LEAK
    return 0;
}