/*
    Aproxime o valor de Pi empregando a série infinita de Gregory-Leibniz:

    Pi = 4 - 4/3 + 4/5 - 4/7 + ...

    A sua função deve retornar quantas iterações são necessárias para encontrar um valor
    que seja diferente de M_PI (uma constante da biblioteca math.h) por no máximo um valor X.
    Dado o valor referente a X, deve-se imprimir o número de iterações necessárias.
*/

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
