/*
    1) Celsius e Fahrenheit

    Faca um programa que leia uma temperatura em graus Celsius e a converta para
    graus Fahrenheit. Fórmula: F = (1.8 * C + 32).
    O programa deve imprimir o valor (arredondando os valores) em Fahrenheit.
    OBS: utilize printf("%.0f ", valor); para arredondar.
*/

#include <stdio.h>
#include <stdlib.h>

int converter() {
    float c, f;

    printf("\nCelsius: ");
    scanf("%f", &c);

    f = (1.8 * c + 32);

    printf("%0.f", f);

    return 0;
}

int main() {
    converter();

    return 0;
}
