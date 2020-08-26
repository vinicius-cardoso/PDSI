/*
    Chama-se matriz oposta de A a matriz –A cuja soma com A resulta na matriz nula.
    Exemplo: Dada a matriz:

                    A = [ 2 -3 ]
                        [ -1 4 ]

    A oposta de A será
                    -A = [ -2 3 ]
                         [ 1 -4 ]
    pois:

                [ -2 3 ] + [ 2 -3 ] = [ 0 0 ]
                [ 1 -4 ]   [ -1 4 ]   [ 0 0 ]

    Faça um programa que receba como entrada os valores de uma matriz n x m e imprima sua matriz oposta. O formato de entrada é similar ao exercício anterior.
    Obs: Para a saída, deve se imprimir os valores separados por um espaço simples.
*/

#include <stdio.h>
#include <stdlib.h>

int matrizoposta() {
    int l = 1, c = 1, i, j;

    scanf("%d", &l);
    scanf("%d", &c);

    int matriz[l][c];

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &matriz[i][j]);
            matriz[i][j] = matriz[i][j] * -1;
        }
    }

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int main() {
    matrizoposta();

    return 0;
}

