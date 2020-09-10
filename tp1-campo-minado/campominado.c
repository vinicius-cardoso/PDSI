#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int jgs, tbl, i, j;
    int mtx[4][4];
    char k[2] = "x";

    printf("Digite a quantidade de jogos (1-10): ");
    scanf("%d", &jgs);

    printf("Digite o tamanho do tabuleiro (2-10): ");
    scanf("%d", &tbl);

    for(i = 0; i < tbl; i++){
        for(j = 0; j < tbl; j++){
            //fgets(k, 2, stdin);
            scanf("%s", &k);
            if(k == "x"){
                mtx[i][j] = 0;
            }
            if(k == "b"){
                mtx[i][j] = 1;
            }
            else{
                main();
            }
        }
        printf("\n");
    }

    for(i = 0; i < tbl; i++){
        for(j = 0; j < tbl; j++){
            printf("%d", mtx[i][j]);
        }
        printf("\n");
    }

    return 0;
}