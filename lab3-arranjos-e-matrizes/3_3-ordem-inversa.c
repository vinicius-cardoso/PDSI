#include <stdio.h>
#include <stdlib.h>

int ordeminversa() {
    int i, vetor[10];

    for(i = 0; i <= 9; i++){
        scanf("\n%d", &vetor[i]);
    }

    for(i = 9; i >= 0; i--){
        printf("\n%d", vetor[i]);
    }

    return 0;
}

int main() {
    ordeminversa();

    return 0;
}
