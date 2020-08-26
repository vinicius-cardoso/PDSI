/*
    Faça um programa para imprimir todos os números primos num intervalo entre A e B, sendo A e B números inteiros positivos e menores que 10000. A e B devem ser fornecidos pelo usuário do seu programa.
    A entrada consiste em dois números inteiros que representam o intervalo A e B.
*/

#include <stdio.h>
#include <stdlib.h>

int primos() {
    int A, B, i, n, p;

    printf("\nInicio do intervalo: ");
    scanf("%d", &A);
    printf("\nFinal do intervalo: ");
    scanf("%d", &B);

    for(i = A; i <= B; i++){
        n = 0;
        for(p = 1; p <= i; p++){ // Numeros entre 1 e A
            if(i % p == 0){
                n++;
            }
        }
        if(n == 2){ // Numeros que só dividiram por 1 e por eles mesmos
            printf("%d\n", i);
        }
    }

    return 0;
}

int main() {
    primos();

    return 0;
}
