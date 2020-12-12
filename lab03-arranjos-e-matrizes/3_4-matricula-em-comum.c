#include <stdio.h>
#include <stdlib.h>

int matricula() {
    int i, j, m = 1, n = 1;
    int aeds[m], calc[n];

    // printf("\nDigite o numero de alunos de AEDS 1: ");
    scanf("%d", &m);

    for(i = 0; i < m; i++){
        scanf("\n%d", &aeds[i]);
    }

    // printf("\nDigite o numero de alunos de Calculo 1: ");
    scanf("%d", &n);

    for(j = 0; j < n; j++){
        scanf("\n%d", &calc[j]);
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(aeds[i] == calc[j]){
                printf("\n%d", calc[j]);
            }
        }
    }

    return 0;
}

int main() {
    matricula();

    return 0;
}
