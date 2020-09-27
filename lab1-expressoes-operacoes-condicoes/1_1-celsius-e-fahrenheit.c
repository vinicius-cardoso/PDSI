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
