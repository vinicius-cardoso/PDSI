#include <stdio.h>
#include <stdlib.h>

FILE *arq;

int main(){
    int i, j;
    char nome[50];
    int matrizA[7][7], matrizB[7][7], matrizC[7][7];

    scanf("%s", &nome);

    arq = fopen(nome, "rb");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            fscanf(arq, "%ld", &(matrizA[i][j]));
            getchar();
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            fscanf(arq, "%ld", &(matrizB[i][j]));
            getchar();
        }
    }

    fclose(arq);

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%ld ", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}