#include <stdio.h>

void incArray(int v[]) { // array sempre passado por referencia, armazenado como um ponteiro para o seu primeiro elemento, os demais são armazenados contiguamente v{} tamanho do array, array já é o endereço não precisando do *
    int c;
    for(c=0; c<10; c++)
      v[c]++; //valor inicial
  }
  
  int main() {
    int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    incArray(data);
  }