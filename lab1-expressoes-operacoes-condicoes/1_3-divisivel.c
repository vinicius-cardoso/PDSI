#include <stdlib.h>
#include <stdio.h>

int divisivel() {
    int x, y, z;

    printf("\nDigite o primeiro numero: ");
    scanf("%i", &x);

    printf("\nDigite o segundo numero: ");
    scanf("%i", &y);

    printf("\nDigite o terceiro numero: ");
    scanf("%i", &z);

    if(x % y == 0 && x % z == 0) {
        printf("O número é divisível");
    }
    else {
        printf("O número não é divisível");
    }
}

int main() {
    divisivel();

    return 0;
}
