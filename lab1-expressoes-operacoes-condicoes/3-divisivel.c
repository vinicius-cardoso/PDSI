/*
    3) Divisível

    Faça um programa que lê 3 valores inteiros x, y e z e testa se x é divisível por y e por
    z. Caso seja divisível, imprima: “O número é divisível”, caso contrário: “O número
    não é divisível”.
    Os valores devem ser lidos na seguinte ordem: x, y, z. Observe que a saída do
    programa deve estar no formato solicitado, com a primeira letra maiúscula e com
    acentuação gráfica.
*/

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
