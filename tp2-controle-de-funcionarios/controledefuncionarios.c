#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *arq;

struct data{
    int dia;
    int mes;
    int ano;
};

typedef struct funcionario{
    char nome[70];
    float salario;
    struct data d[1000];
    char departamento[50];
} Funcionario;

Funcionario f[1000];

int ndias(int dia, int mes, int ano){
    int i, ndias, ndd = 0, ndm = 0, nda = 0;

    ndd = 31 - dia;

    for(i = mes; i < 12; i++){
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
            ndm = ndm + 31;
        }
        else if(i == 4 || i == 6 || i == 9 || i == 11){
            ndm = ndm + 30;
        }
        else{    
            ndm = ndm + 28;
        }
    }

    for(i = ano; i < 2019; i++){
        if(i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)){
            nda = nda + 366;
        }
        else{
            nda = nda + 365;
        }
    }

    ndias = (ndd + ndm + nda);

    return ndias;
}

// Função 1
void exportar(Funcionario f[], int qtd, int opc, char *argv[]){
    FILE *saida;

    int i, j, tdia, tmes, tano;
    float tsalario;
    char temp[50], tdep[50], strdia[4], strmes[4], strano[8];
    
    if(opc == 1){
        saida = fopen(argv[3], "w");
    }

    for(i = 0; i < qtd; i++){
        for(j = 0; j < qtd; j++){
            if((strcmp(f[i].nome, f[j].nome)) < 0){
                strcpy(temp, f[i].nome);
                strcpy(f[i].nome, f[j].nome);
                strcpy(f[j].nome, temp);

                tsalario = f[i].salario;
                f[i].salario = f[j].salario;
                f[j].salario = tsalario;

                tdia = f[i].d->dia;
                f[i].d->dia = f[j].d->dia;
                f[j].d->dia = tdia;
                
                tmes = f[i].d->mes;
                f[i].d->mes = f[j].d->mes;
                f[j].d->mes = tmes;
                
                tano = f[i].d->ano;
                f[i].d->ano = f[j].d->ano;
                f[j].d->ano = tano;

                strcpy(tdep, f[i].departamento);
                strcpy(f[i].departamento, f[j].departamento);
                strcpy(f[j].departamento, tdep);
            }
        }
    }

    for(i = 0; i < qtd; i++){
        fprintf(saida, "%s", f[i].nome);
        fprintf(saida, "%.2f\n", f[i].salario);

        if(f[i].d->dia > 9 && f[i].d->mes > 9){
            fprintf(saida, "%d/%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
        }
        else if(f[i].d->dia < 10 && f[i].d->mes > 9){
            fprintf(saida, "0%d/%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
        }
        else if(f[i].d->dia > 9 && f[i].d->mes < 10){
            fprintf(saida, "%d/0%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
        }
        else{
            fprintf(saida, "0%d/0%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
        }

        fprintf(saida, "%s", f[i].departamento);
    }

    fclose(saida);
}

// Função 2
void listar(Funcionario f[], int qtd, char *dep){
    int i, j, tdia, tmes, tano;
    float tsalario;
    char temp[50], tdep[50];

    strcat(dep, "\n");

    for(i = 0; i < qtd; i++){
        for(j = 0; j < qtd; j++){
            if((strcmp(f[i].nome, f[j].nome)) < 0){
                strcpy(temp, f[i].nome);
                strcpy(f[i].nome, f[j].nome);
                strcpy(f[j].nome, temp);

                tsalario = f[i].salario;
                f[i].salario = f[j].salario;
                f[j].salario = tsalario;

                tdia = f[i].d->dia;
                f[i].d->dia = f[j].d->dia;
                f[j].d->dia = tdia;
                
                tmes = f[i].d->mes;
                f[i].d->mes = f[j].d->mes;
                f[j].d->mes = tmes;
                
                tano = f[i].d->ano;
                f[i].d->ano = f[j].d->ano;
                f[j].d->ano = tano;

                strcpy(tdep, f[i].departamento);
                strcpy(f[i].departamento, f[j].departamento);
                strcpy(f[j].departamento, tdep);
            }
        }
    }

    for(i = 0; i < qtd; i++){
        if(strcmp(f[i].departamento, dep) == 0){
            printf("%s", f[i].nome);
            printf("%.2f\n", f[i].salario);

            if(f[i].d->dia > 9 && f[i].d->mes > 9){
                printf("%d/%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
            }
            else if(f[i].d->dia < 10 && f[i].d->mes > 9){
                printf("0%d/%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
            }
            else if(f[i].d->dia > 9 && f[i].d->mes < 10){
                printf("%d/0%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
            }
            else{
                printf("0%d/0%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
            }

            printf("%s", f[i].departamento);
        }
    }
}

// Função 3
void mais_antigo(Funcionario f[], int qtd){
    int i, ref = 0, maior;

    for(i = 0; i < qtd; i++){
        maior = ndias(f[i].d->dia, f[i].d->mes, f[i].d->ano);
        if(maior > ref){
            ref = maior;
        }
    }

    for(i = 0; i < qtd; i++){
        maior = ndias(f[i].d->dia, f[i].d->mes, f[i].d->ano);
        if(ref == maior){
            printf("%s", f[i].nome);
            printf("%.2f\n", f[i].salario);

            if(f[i].d->dia > 9 && f[i].d->mes > 9){
                printf("%d/%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
            }
            else if(f[i].d->dia < 10 && f[i].d->mes > 9){
                printf("0%d/%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
            }
            else if(f[i].d->dia > 9 && f[i].d->mes < 10){
                printf("%d/0%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
            }
            else{
                printf("0%d/0%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
            }
            
            printf("%s", f[i].departamento);
        }
    }
}

// Função 4
void mais_antigodep(Funcionario f[], int qtd, char *dep){
    int i, ref = 0, maior;

    strcat(dep, "\n");

    for(i = 0; i < qtd; i++){
        if(strcmp(f[i].departamento, dep) == 0){
            maior = ndias(f[i].d->dia, f[i].d->mes, f[i].d->ano);
            if(maior > ref){
                ref = maior;
            }
        }
    }

    for(i = 0; i < qtd; i++){
        if(strcmp(f[i].departamento, dep) == 0){
            maior = ndias(f[i].d->dia, f[i].d->mes, f[i].d->ano);
            if(ref == maior){
                printf("%s", f[i].nome);
                printf("%.2f\n", f[i].salario);

                if(f[i].d->dia > 9 && f[i].d->mes > 9){
                    printf("%d/%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
                }
                else if(f[i].d->dia < 10 && f[i].d->mes > 9){
                    printf("0%d/%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
                }
                else if(f[i].d->dia > 9 && f[i].d->mes < 10){
                    printf("%d/0%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
                }
                else{
                    printf("0%d/0%d/%d\n", f[i].d->dia, f[i].d->mes, f[i].d->ano);
                }
                    
                printf("%s", f[i].departamento);
            }
        }
    }
}

// Funcao 5
void media_salarial(Funcionario f[], int qtd){
    int i;
    double soma = 0, media;

    for(i = 0; i < qtd; i++){
        soma += f[i].salario;
    }

    media = (soma / qtd);

    printf("%.2lf\n", media);
}

// Funcao 6
void media_salarialdep(Funcionario f[], int qtd, char *dep){
    int i, nqtd = 0;
    double soma = 0, media;

    strcat(dep, "\n");

    for(i = 0; i < qtd; i++){
        if(strcmp(f[i].departamento, dep) == 0){
            nqtd++;
            soma += f[i].salario;
        }
    }

    media = (soma / nqtd);

    printf("%.2lf\n", media);
}

int main(int argc, char *argv[]){
    // qtd: quantidade de funcionarios, opc: qual funcao o usuario deseja 
    // fnc: funcionario atual, dep: departamento
    int ptr, qtd, opc, fnc;
    char dep[50];

    arq = fopen(argv[1], "r");
    opc = atoi(argv[2]);

    if((opc == 2) || (opc == 4) || (opc == 6)){
        strcpy(dep, argv[3]);
    }

    // Le a quantidade de funcionarios
    ptr = fgetc(arq);
    qtd = ptr;
    qtd = atoi(&qtd);

    // Primeira linha
    while(ptr != '\n'){
        ptr = fgetc(arq);
    }
    
    // Adiciona os dados de cada funcionario do arquivo em um vetor de funcionarios
    for(fnc = 0; fnc < qtd; fnc++){
        fgets(f[fnc].nome, 70, arq);
        fscanf(arq, "%f\n", &f[fnc].salario);       
        fscanf(arq, "%d/%d/%d\n", &f[fnc].d->dia, &f[fnc].d->mes, &f[fnc].d->ano);
        fgets(f[fnc].departamento, 50, arq);
    }

    switch (opc){
    case 1:
        exportar(f, qtd, opc, argv);
        break;

    case 2:
        listar(f, qtd, dep);
        break;
    
    case 3:
        mais_antigo(f, qtd);
        break;

    case 4:
        mais_antigodep(f, qtd, dep);
        break;

    case 5:
        media_salarial(f, qtd);
        break;

    case 6:
        media_salarialdep(f, qtd, dep);
        break;
    
    default:
        break;
    }

    fclose(arq);
}