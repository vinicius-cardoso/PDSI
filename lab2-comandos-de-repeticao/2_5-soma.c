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
