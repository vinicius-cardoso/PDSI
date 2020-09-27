#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contato{
    char nome[50];
    unsigned int idade;
    char telefone[20];
};

struct contato c[100];

int main(){
    FILE *a;

    int cont = 0, i = 0, j = 0;
    char acao[8], arquivo[50], busca[50];

    char nome[50], telefone[50];
    int idade;

    scanf("%s", &arquivo);

    a = fopen(arquivo, "a+b");

    while(cont < 101){
        scanf("%s", &acao);

        if(strcmp(acao, "Inserir") == 0){
            scanf("%s %d %s", &c[cont].nome, &c[cont].idade, &c[cont].telefone);

            fputs(c[cont].nome, stdout);
            fputs(c[cont].idade, stdout);
            fputs(c[cont].telefone, stdout);

            printf("Registro %s %d %s inserido", c[cont].nome, c[cont].idade, c[cont].telefone);

            cont++;
        }

        else if(strcmp(acao, "Alterar") == 0){
            scanf("%s %d %s", &nome, &idade, &telefone);
            for(i = 0; i < 101; i++){
                if(strcmp(nome, c[i].nome) == 0){
                    strcpy(c[i].nome, nome);
                    c[i].idade = idade;
                    strcpy(c[i].telefone, telefone);
                    
                    printf("Registro %s %d %s alterado\n", c[i].nome, c[i].idade, c[i].telefone);
                    break;
                }
                else{
                    if(j == 101){
                        printf("Registro ausente para alteracao\n");
                    }
                }
            }
        }

        else if(strcmp(acao, "Excluir") == 0){
            scanf("%s", &busca);
            for(i = 0; i < 101; i++){
                if(strcmp(c[cont].nome, busca) == 0){
                    printf("Registro %s %d %s excluido\n", c[cont].nome, c[cont].idade, c[cont].telefone);

                    strcpy(c[cont].nome, "");
                    c[i].idade = NULL;
                    strcpy(c[i].telefone, "");
                    
                    break;
                }
                else{
                    if(j == 101){
                        printf("Registro ausente\n");
                    }
                }
            }
            cont--;
        }

        else if(strcmp(acao, "Exibir") == 0){
            scanf("%s", &busca);
            for(i = 0; i < 101; i++){
                if(strcmp(c[cont].nome, busca) == 0){
                    printf("Registro %s %d %s\n exibido", c[cont].nome, c[cont].idade, c[cont].telefone);
                    break;
                }
                else{
                    if(j == 101){
                        printf("Registro ausente\n");
                    }
                }
            }
        }

        else{
            printf("ERRO");
        }
    }

    fclose(a);
}