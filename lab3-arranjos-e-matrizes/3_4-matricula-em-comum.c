/*
    Faça um programa que leia dois vetores de inteiros representando o número de matrícula de alunos matriculados respectivamente em AEDS 1 e Cálculo 1.
    Em seguida, o programa deverá imprimir o número de matrícula dos alunos que estão matriculados simultaneamente nestas duas disciplinas (ou seja, calcular a interseção dos dois vetores).
    O primeiro valor se refere à quantidade de alunos na disciplina de AEDS 1.
    Em seguida, são informadas as matrículas de cada aluno na disciplina.
    A mesma sequência é fornecida para a disciplina de Cálculo 1.
    Por fim, deve-se imprimir a matrícula dos alunos que estão matriculados em ambas disciplinas.
*/

#include <stdio.h>
#include <stdlib.h>

int matricula() {
    int i, j, m = 1, n = 1;
    int aeds[m], calc[n];

    // printf("\nDigite o numero de alunos de AEDS 1: ");
    scanf("%d", &m);

    for(i = 0; i < m; i++){
        scanf("\n%d", &aeds[i]);
    }

    // printf("\nDigite o numero de alunos de Calculo 1: ");
    scanf("%d", &n);

    for(j = 0; j < n; j++){
        scanf("\n%d", &calc[j]);
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(aeds[i] == calc[j]){
                printf("\n%d", calc[j]);
            }
        }
    }

    return 0;
}

int main() {
    matricula();

    return 0;
}
