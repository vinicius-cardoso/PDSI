/*
    Faça um programa que encontre o maior elemento de uma matriz.
    Inicialmente é fornecido o número de linhas e colunas da matriz.
    Em seguida, os valores de cada posição da matriz são informados em uma linha separada por espaços simples.
    Dica: Para ler a primeira linha desse exemplo, basta executar o comando de leitura com seguinte formato: “scanf(“%d %d %d %d, a,b,c,d);”, onde os valores de cada posição serão armazenados nas variáveis: a,b,c e d.
*/

#include <stdio.h>
#include <stdlib.h>

int maiordamatriz() {
    int l, c, i, j, maior = 0;

    scanf("%d", &l); // Numero de linhas
    scanf("%d", &c); // Numero de colunas

    int matriz[l][c];

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] >= maior){
                maior = matriz[i][j];
            }
        }
        printf("\n");
    }

    printf("%d", maior);

    return 0;
}

int main() {
    maiordamatriz();

    return 0;
}
