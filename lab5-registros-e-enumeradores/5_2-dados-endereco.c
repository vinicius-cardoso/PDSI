#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int i = 0, j = 0, k = 0;
    char acao[8], busca[50];

    char nome[50], rua[50], estado[50];
    int idade, numero;
    float salario;
    
    struct endereco{
        char rua[50];
        unsigned int numero;
        char estado[50];
    };

    struct pessoa{
        char nome[50];
        unsigned int idade;
        float salario;
        struct endereco e;
    };

    struct pessoa p[4];


    while(fgets(acao, 8, stdin) != NULL){
        if(strcmp(acao, "inserir") == 0){
            if(i >= 5){
                printf("Espaco insuficiente\n"); 
            }
            else{
                scanf("%s %d %f %s %d %s", &p[i].nome, &p[i].idade, &p[i].salario, &p[i].e.rua, &p[i].e.numero, &p[i].e.estado);
                printf("Registro %s %d %.2f %s %d %s inserido\n", p[i].nome, p[i].idade, p[i].salario, p[i].e.rua, p[i].e.numero, p[i].e.estado);
                i++;         
            }
        }
        else if(strcmp(acao, "alterar") == 0){
            scanf("%s %d %f %s %d %s", &nome, &idade, &salario, &rua, &numero, &estado);
            for(j = 0;j < 6; j++){
                if(strcmp(nome, p[j].nome) == 0){
                    p[j].idade = idade;
                    p[j].salario = salario;
                    strcpy(p[j].e.rua, rua);
                    p[j].e.numero = numero;
                    strcpy(p[j].e.estado, estado);
                    printf("Registro %s %d %.2f %s %d %s alterado\n", p[j].nome, p[j].idade, p[j].salario, p[j].e.rua, p[j].e.numero, p[j].e.estado);
                    break;
                }
                else{
                    if(j == 4){
                        printf("Registro ausente para alteracao\n");
                    }
                }
            }
        }
        else if(strcmp(acao, "mostrar") == 0){
            scanf("%s", &busca);
            for(j = 0;j < 6; j++){
                if(strcmp(p[j].nome, busca) == 0){
                    printf("Registro %s %d %.2f %s %d %s\n", p[j].nome, p[j].idade, p[j].salario, p[j].e.rua, p[j].e.numero, p[j].e.estado);
                    break;
                }
                else{
                    if(j == 5){
                        printf("Registro ausente\n");
                    }
                }
            }
        }
        else{
            // printf("\nOpcoes: 'inserir', 'mostrar' ou 'alterar'");
        }
    }

    return 0;
}
