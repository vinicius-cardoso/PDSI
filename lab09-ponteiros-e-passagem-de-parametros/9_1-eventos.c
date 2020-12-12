#include <stdio.h>
#include <stdlib.h>

enum mes{
    janeiro = 1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro
} mes;

typedef struct data{
    int dia;
    enum mes mes;
    int ano;
} Data;

typedef struct evento{
    char nome[100];
    char local[100];
    struct data d[1000];
} Evento;

Evento agenda[1000];
Data d;

void cadastrar_eventos(Evento agenda[], int n){
    int i;

    for(i = 0; i < n; i++){
        scanf("%s %s %d %d %d", &agenda[i].nome, &agenda[i].local, &agenda[i].d->dia, &agenda[i].d->mes, &agenda[i].d->ano);
    }
}

void imprimir_eventos(Evento agenda[], Data d, int n){
    int j, cont = 0;

    for(j = 0; j < n; j++){
        if((d.dia == agenda[j].d->dia) && (d.mes == agenda[j].d->mes) && (d.ano == agenda[j].d->ano)){
            printf("%s %s\n", agenda[j].nome, agenda[j].local);
            cont++;
        }
    }

    if(cont == 0){
        printf("Nenhum evento encontrado!");
    }
}

int main(){
    int n;

    scanf("%d", &n);
    
    cadastrar_eventos(agenda, n);

    scanf("%d %d %d", &d.dia, &d.mes, &d.ano);

    imprimir_eventos(agenda, d, n);

    return 0;
}