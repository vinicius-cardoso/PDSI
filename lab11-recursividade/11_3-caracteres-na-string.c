#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n(char str[], char chr, int tam){
    if(str[tam] != chr){
        return 0;
    }
    return (n(str[tam - 1], chr, tam) + n(str[tam - 1], chr, tam));
}

int main(){
    char str[50], chr[2];
    int i = 0, tam;

    scanf("%s", &str);
    scanf("%s", &chr);

    tam = strlen(str);

    printf("%d", tam);

    printf("%d", n(str, chr, tam));

    return 0;
}