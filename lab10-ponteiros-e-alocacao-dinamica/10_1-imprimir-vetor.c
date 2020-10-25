#include <stdio.h>
#include <stdlib.h>

int ler_vetor(int n, int *v){
    int i;

    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    return v;
}

int main(){
    int n, i, *v;

    scanf("%d", &n);

    v = (int *) malloc(n*sizeof(int));

    ler_vetor(n, v);

    for(i = 0; i < n; i++){
        printf("%d\n", v[i]);
    }

    free(v);

    return 0;
}