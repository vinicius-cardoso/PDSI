#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct filhos{
    char filhos[10][50];
};

typedef struct pessoa{
    char nome[50];
    int idade;
    struct filhos f[10];
    int numFilhos;
} Pessoa;

Pessoa p[10];

int main(){
    int n, i;
    char ancestral[50], ascendente[50];

    scanf("%d", &n);

    scanf("%s %d %s", &p[0].nome, &p[0].idade, &ancestral);
    strcpy(ancestral, p[0].nome);

    p[0].numFilhos = 0;
    
    for(i = 1; i < n; i++){
        scanf("%s %d %s", &p[i].nome, &p[i].idade, &ascendente);

        if(strcmp(ascendente, ancestral) == 0){
            p[0].f[(p[0].numFilhos)] == p[i].nome;
            p[0].numFilhos++;
        }
    }

    for(i = 0; i < p[0].numFilhos; i++){
        printf("teste\n");
        printf("%s\n", p[0].f);
    }

    return 0;
}