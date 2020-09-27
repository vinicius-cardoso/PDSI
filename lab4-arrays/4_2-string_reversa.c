#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, j = 0, tam;
    char str[1000];

    fgets(str, 1000, stdin);
    tam = strlen(str);

    for(i = tam; i>=0; i--){
        printf("%c", str[i]); 
    }

    return 0;
}