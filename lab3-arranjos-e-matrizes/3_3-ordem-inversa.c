/*
    Faça um programa para ler um vetor X de 10 elementos e gerar um outro vetor com esses 10 elementos em ordem inversa.
    Exemplo: Se X= {3, 5, 2, 8, 4}, deverá ser gerado um vetor Y= {4, 8, 2, 5, 3}.
    O valor de n é lido pelo teclado.
    Cada posição do vetor deve ser impressa em uma linha através do “\n”.
*/

#include <stdio.h>
#include <stdlib.h>

int ordeminversa() {
    int i, vetor[10];

    for(i = 0; i <= 9; i++){
        scanf("\n%d", &vetor[i]);
    }

    for(i = 9; i >= 0; i--){
        printf("\n%d", vetor[i]);
    }

    return 0;
}

int main() {
    ordeminversa();

    return 0;
}
