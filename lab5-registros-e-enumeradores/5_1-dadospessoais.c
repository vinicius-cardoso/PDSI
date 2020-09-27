#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int i = 0, j = 0;
    char acao[8], busca[50];
    
    struct pessoa{
        char nome[50];
        unsigned int idade;
        float salario;
    };

    struct pessoa p[4];

    while(1){
        printf("\nO que deseja fazer? (inserir/mostrar): ");
        scanf("%s", &acao);

        if(strcmp(acao, "inserir") == 0){
            if(i >= 4){
                printf("\nEspaco insuficiente"); 
            }
            else{
                printf("\nInserir: Nome Idade Salario\n");
                scanf("%s %d %f", &p[i].nome, &p[i].idade, &p[i].salario);
                printf("Registro %s %d %.2f inserido\n", p[i].nome, p[i].idade, p[i].salario);
                i++;         
            }
        }
        if(strcmp(acao, "mostrar") == 0){
            printf("\nMostrar: Nome\n");
            scanf("%s", &busca);
            for(j = 0;j < 5; j++){
                if(strcmp(p[j].nome, busca) == 0){
                    printf("\nRegistro %s %d %.2f\n", p[j].nome, p[j].idade, p[j].salario);
                    break;
                }
                else{
                    if(j == 4){
                        printf("\nRegistro ausente");
                    }
                }
            }
        }
        else{
            printf("\nOpcoes: 'inserir' ou 'mostrar'");
        }
    }

    return 0;
}