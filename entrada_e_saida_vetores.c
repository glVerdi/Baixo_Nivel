#include <stdio.H>

int main(void) {
    
    int v[5]; // Declara um vetor de inteiros com 5 elementos 
    int i;

    for (i = 0; i < 5; i++) {
        printf("Insirfa um dado:\n"); 
        scanf("%d", &v[i]); 
    } 

    printf("Dados inseridos:\n"); 
    for (i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }
    
    return 0;
}