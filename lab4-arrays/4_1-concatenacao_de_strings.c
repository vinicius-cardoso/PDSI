/*
Faça um programa que, dadas duas strings S1 e S2, concatena as duas e imprime a
nova string gerada. A entrada consiste de duas string, uma em cada linha, as quais
corresponderão, respectivamente, a S1 e S2.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[32];
    char str2[32]; 

    scanf("%s", &str1);
    printf("");
    scanf("%s", &str2);

    strcat(str1, str2);
    printf("%s", str1);

    return 0;
}