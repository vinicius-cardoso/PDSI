#include <stdio.h>
#include <stdlib.h>

void imprime(int vetor[], int n){
    int j;

    for(j = 0; j < n; j++){
        printf("%d ", vetor[j]);
    }

    printf("\n");
}

void multiplica(int vetor[], int n, double v){
    int k;

    for(k = 0; k < n; k++){
        vetor[k] = vetor[k] * v;
    }

    imprime(vetor, n);
}

int main(){
    int i, n;
    double v;

    scanf("%d", &n);

    int vetor[n];

    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    scanf("%lf", &v);

    imprime(vetor, n);
    multiplica(vetor, n, v);
    multiplica(vetor, n, 1/v);

    return 0;
}