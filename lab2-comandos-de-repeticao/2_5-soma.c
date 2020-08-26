/*
    Faça um programa que pegue um número do teclado e calcule a soma de todos os números de 1 até ele (use laço for()).
    Ex.: o usuário entra 7, o programa vai mostrar 28, pois 1+2+3+4+5+6+7=28.
*/

#include <stdio.h>
#include <stdlib.h>

int soma() {
    int n, i = 0, soma = 0;

    printf("\nDigite um numero: ");
    scanf("%d", &n);

    while(i <= n) {
        soma = soma + i;
        i++;
    }
    printf("\n%d", soma);

    return 0;
}

int main() {
    soma();

    return 0;
}
