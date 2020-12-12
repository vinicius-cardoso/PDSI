#include <stdio.h>
#include <stdlib.h>

FILE *arq;

int main(int argc, char *argv[]){
    int i, c = 0;

    arq = fopen(argv[1], "r");

    while((i = fgetc(arq)) != EOF){
        if (i == 'a'){
            c++;
        }
    }

    printf("%d\n", c);
    
    fclose(arq);
}