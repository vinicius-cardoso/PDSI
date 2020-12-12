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
