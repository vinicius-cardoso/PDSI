/*
Faça um programa para imprimir uma string ao contrário. A entrada será uma única
string e seu programa deve imprimir ela invertida.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, j = 0, tam;
    char str[1000];

    scanf("%s", &str);
    tam = strlen(str);

    for(i = tam; i>=0; i--){
        printf("%c", str[i]); 
    }

    return 0;
}