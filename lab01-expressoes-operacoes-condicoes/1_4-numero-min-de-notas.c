#include <stdlib.h>
#include <stdio.h>

int notas() {
    int valor, c, l, xx, x, v, ii, i;

    printf("\nDigite o valor: ");
    scanf("%i", &valor);

    c = valor / 100;
    l = (valor - (c * 100)) / 50;
    xx = (valor - (c * 100) - (l * 50)) / 20;
    x = (valor - (c * 100) - (l * 50) - (xx * 20)) / 10;
    v = (valor - (c * 100) - (l * 50) - (xx * 20) - (x * 10)) / 5;
    ii = (valor - (c * 100) - (l * 50) - (xx * 20) - (x * 10) - (v * 5)) / 2;
    i = (valor - (c * 100) - (l * 50) - (xx * 20) - (x * 10) - (v * 5) - (ii * 2)) / 1;

    printf("100: %i", c);
    printf("\n50: %i", l);
    printf("\n20: %i", xx);
    printf("\n10: %i", x);
    printf("\n5: %i", v);
    printf("\n2: %i", ii);
    printf("\n1: %i", i);

    return 0;
}

int main() {
    notas();

    return 0;
}
