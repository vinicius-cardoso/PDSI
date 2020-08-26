/*
    Faça um programa que compute quantos são os múltiplos de 2, de 3 e de 5 entre 1 e X;
    compute também quantos são os números múltiplos de 2, 3 e 5 ao mesmo tempo.
    (utilize while())
    É fornecido o valor de X onde deve ser impresso a quantidade de múltiplos conforme abaixo.
*/

#include <stdio.h>
#include <stdlib.h>

int multiplos() {
    int n, i = 1, m2 = 0, m3 = 0, m5 = 0, mt = 0;

    printf("\nDigite um numero: ");
    scanf("%d", &n);

    while(i <= n) {
        if(i % 2 == 0) {
            m2++;
        }
        if(i % 3 == 0) {
            m3++;
        }
        if(i % 5 == 0) {
            m5++;
        }
        if(i % 2 == 0 && i % 3 == 0 && i % 5 == 0) {
            mt++;
        }

        i++;
    }

    printf("\nMúltiplos de 2: %d", m2);
    printf("\nMúltiplos de 3: %d", m3);
    printf("\nMúltiplos de 5: %d", m5);
    printf("\nMúltiplos de todos: %d", mt);

    return 0;
}

int main() {
    multiplos();

    return 0;
}
