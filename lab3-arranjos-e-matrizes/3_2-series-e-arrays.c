/*
    A sequência de Fibonacci pode ser definida como:

    fib(0) = 1
    fib(1) = 1
    fib(n) = fib(n-1) + fib(n-2), para n>2

    Implemente um programa que calcule a série de Fibonacci para um determinado n fornecido pelo usuário. Você deve armazenar em um vetor cada elemento da série, de forma que a posição 0 armazene o termo 0, a posição 1 o termo 1, e assim por diante.
    Seu programa deve receber do usuário um número entre 0 e 1000 e imprimir o termo correspondente ao número recebido. O usuário deve ser capaz de entrar com vários números interativamente em uma mesma execução.
    O programa termina quando o usuário entrar com um número negativo ou maior que 1000.

*/

#include <stdio.h>
#include <stdlib.h>

int fibonacci() {
    int i, n;
    int fib[1000] = { 0, 1, 1 };

    printf("\nDigite o termo desejado: ");
    scanf("%d", &n);

    for(i = 2; i <= 1000; i++){
        fib[i] = fib[i - 1] + fib[i - 2];

        if(i == n){
            printf("\n%d", fib[n]);
            fibonacci();
        }
        if(i > 1000 || i == -1){
            break;
        }
    }

    return 0;
}

int main() {
    fibonacci();

    return 0;
}
