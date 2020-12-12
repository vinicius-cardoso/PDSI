#include <stdio.h>
#include <stdlib.h>

FILE *arq;

int main(){
    int i, c = 0;
    char entrada[50];

    scanf("%s", &entrada);

    arq = fopen(entrada, "rb");

    while((i = fgetc(arq)) != EOF){
        if (i == 'a'){
            c++;
        }
    }

    printf("%d\n", c);

    fclose(arq);
}