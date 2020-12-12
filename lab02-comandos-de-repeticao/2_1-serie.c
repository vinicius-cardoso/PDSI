#include <stdio.h>
#include <stdlib.h>

int serie() {
    int n, x0, x1, xn, i;

    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de x0: ");
    scanf("%d", &x0);

    printf("Digite o valor de x1: ");
    scanf("%d", &x1);

    printf("X0: %d\n", x0);
    printf("X1: %d\n", x1);

    for(i = 2; i <= n; i++) {
        xn = 4*(x1) - 2*(x0);
        x0 = x1;
        x1 = xn;

        printf("X%d: %d\n", i, xn);
    }

    return 0;
}

int main() {
    serie();

    return 0;
}
