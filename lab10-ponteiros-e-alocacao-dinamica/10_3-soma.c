#include <stdio.h>
#include <stdlib.h>

int soma_vetores(int n, int *v1, int *v2, int *v3){
    int i;

    for(i = 0; i < n; i++){
        scanf("%d", &v1[i]);
    }

    for(i = 0; i < n; i++){
        scanf("%d", &v2[i]);
    }

    for(i = 0; i < n; i++){
        v3[i] = v1[i] + v2[i];
    }
    
    return v3;
}

int main(){
    int i, n, *v1, *v2, *v3;

    scanf("%d", &n);

    v1 = (int *) malloc(n * sizeof(int));
    v2 = (int *) malloc(n * sizeof(int));
    v3 = (int *) malloc(n * sizeof(int));

    soma_vetores(n, v1, v2, v3);

    for(i = 0; i < n; i++){
        printf("%d\n", v3[i]);
    }

    free(v1);
    free(v2);
    free(v3);

    return 0;
}