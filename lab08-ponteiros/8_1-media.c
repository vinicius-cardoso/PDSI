#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int media(double vet[], int n, int *i){
    int j;
    double media, soma = 0;

    for(j = 0; j < n; j++){
        soma = (soma + vet[j]);
    }

    media = (soma / n);

    return media;
}

int main(){
    int n, *i, j;
    double m, dif, ref = 1000;

    scanf("%d\n", &n);
    
    double vet[n];

    for(j = 0; j < n; j++){
        scanf("%lf", &vet[j]);
    }

    m = media(vet, n, *i);

    for(j = 0; j < n; j++){
        dif = abs(m - vet[j]);
        
        if(dif < ref){
            ref = dif;
        }
    }

    for(j = 0; j < n; j++){
        if(abs(m - vet[j]) == ref){
            *i = j;
            printf("%d\n", *i);
            
            return 0;
        }
    }
}