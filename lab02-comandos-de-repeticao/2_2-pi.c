#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pi() {
    double vmin, pi = 4.0, n = 3, dif = pi - M_PI;

    printf("\nValor minimo: ");
    scanf("%lf", &vmin);
    int i;

    for(i = 1; dif > vmin; i++){
        if(i % 2 == 0){
            pi = pi + (4.0/(n));
        }
        else {
            pi = pi - (4.0/(n));
        }

        dif = pi - M_PI;

        if(dif < 0){
            dif = dif * (-1);
        }

        n = n + 2;
    }

    printf("%d\n", i);

    return 0;
}

int main() {
    pi();

    return 0;
}
