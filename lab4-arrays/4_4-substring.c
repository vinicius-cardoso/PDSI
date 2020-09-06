/*
Faça um programa que verifica se uma string S2 é substring de uma string S1. Em
caso positivo, seu programa deve imprimir “É substring” e, em caso negativo, “Não é
substring”. Observe que a saída deve ser exatamente o que foi solicitado acima, com a
primeira letra maiúscula e acentuação gráfica.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s1[50];
    char s2[50];
    int i, j, ts1, ts2;

    scanf("%s", &s1);
    printf("");

    scanf("%s", &s2);

    if(strstr(s1, s2) != 0){
        printf("É substring");
    }
    else{
        printf("Não é substring");
    }

    return 0;
}