#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produtos{
    char nome[50];
    char marca[50];
    float preco;
};

struct produtos p[10];

int main(){
    int i, j, m = 0, n = 0;
    float mediat = 0, mediam = 0;
    char marca[50];

    for(j = 0; j < 8; j++){
        scanf("%s %s %.2f", &p[i].nome, &p[i].marca, &p[i].preco);
        mediam = mediam * p[j].preco;
        strcpy(marca[j], p[j].marca);
    }

    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            if(strcmp(p[i].marca, marca[j]) == 0){
                m++;
            }
        }
    }

    for(j = 0; j < 8; j++){
        if(m != 0){
            printf("%s %.2f\n", p[j].marca, m);
        }
    }

    mediam = mediat / 8;

    printf("media %s %.2f\n", p[j].marca, m);

    for(j = 0; j < 8; j++){
        if(m != 0){
            printf("media %s %.2f\n", p[j].marca, m);
        }
    }


    return 0;
}