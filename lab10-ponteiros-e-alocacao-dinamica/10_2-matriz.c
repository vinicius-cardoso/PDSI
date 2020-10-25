#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, nl, nc;
    int **matriz;

    scanf("%d", &nl);
    scanf("%d", &nc);

    matriz = malloc(nl * sizeof(int*));

    for(i = 0; i < nl; i++){
        matriz[i] = malloc(nc * sizeof(int));
    }

    getchar();
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            scanf("%d ", &matriz[i][j]);
            getchar();
        }
        printf("\n");
    }

    for(i = 0; i < nl; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}