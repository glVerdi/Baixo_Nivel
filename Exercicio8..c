#include <stdio.h>

// copia cada caractere da string origem para o vetor destino
// Quando chega no final (\0), ela adiciona um * no lugar de \0, como se fosse um final personalizado da string.
void copiaTXT(char destino[], const char origem[]) {
    int i = 0;
    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '*'; // final do texto com marcador especial
}

// Quantos caracteres tem a string, até o caractere especial *
int tamanhoTXT(char texto[]) {
    int i = 0;
    while (texto[i] != '*') {
        i++;
    }
    return i;
}

// Inicializa o vetor resultado[10] com zeros — cada posição vai contar quantas palavras têm 1, 2, ..., 10 letra.
// Percorre o vetor texto caractere por caractere até encontrar o *.
void contaPalavrasPorTamanho(char texto[], int resultado[]) {
    for (int i = 0; i < 10; i++) {
        resultado[i] = 0;
    }

    int i = 0;
    int tamanhoPalavra = 0;

    // Se o caractere não for espaço (' '), é parte de uma palavra. Então aumenta o tamanhoPalavra.
    // Se encontrar um espaço e já tinha lido uma palavra (tamanhoPalavra > 0):
    // Atualiza o vetor resultado na posição tamanhoPalavra - 1 (porque o índice começa em 0).
    // Zera tamanhoPalavra para começar a próxima palavra.
    while (texto[i] != '*') {
        if (texto[i] != ' ') {
            tamanhoPalavra++;
        } else if (tamanhoPalavra > 0) {
            if (tamanhoPalavra >= 1 && tamanhoPalavra <= 10) {
                resultado[tamanhoPalavra - 1]++;
            }
            tamanhoPalavra = 0;
        }
        i++;
    }
// Pode ser que o texto termine com uma palavra (sem espaço no final), então ele trata esse último caso também.
    if (tamanhoPalavra > 0 && tamanhoPalavra <= 10) {
        resultado[tamanhoPalavra - 1]++;
    }
}

// Cria o vetor S1 para armazenar o texto.
// Usa copiaTXT para colocar o texto no vetor S1.
// Chama contaPalavrasPorTamanho para preencher o vetor contagem[] com a quantidade de palavras por tamanho.-
// Imprime o resultado: cada linha indica quantas palavras têm 1, 2, ..., 10 letras.
    int main() {
        char S1[300];
        int contagem[10];
    
        copiaTXT(S1, "Como a aurora precursora do farol da divindade foi o vinte de setembro o precursor da liberdade");
    
        contaPalavrasPorTamanho(S1, contagem);
    
        for (int i = 0; i < 10; i++) {
            printf("%d\n", contagem[i]);
        }
    
        return 0;
    }
