/*
    Faça um programa que mostre uma contagem na tela de 233 a 456, só que contando de 3
    em 3 quando estiver entre 300 e 400 e de 5 em 5 quando não estiver. (utilize do{}while())
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int contagem() {
    int i = 233;

    do {
        printf("\n%d", i);

        if(i > 300 && i < 400) {
            i = i + 3;
        }
        else {
            i = i + 5;
        }

        Sleep(100);
    }
    while(i <= 457);

    return 0;
}

int main() {
    contagem();

    return 0;
}
