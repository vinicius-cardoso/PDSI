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

