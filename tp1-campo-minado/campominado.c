#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int jgs, tbl, jgd, zeros = 0;

    // fim: conta se o jogador perdeu, njgs: numero de jogos ja feitos, njgd: numero de jogadas ja feitas, 
    // ft: indica se faltou terminar, (i, j): varrer a matriz, (x, y): coordenadas da jogada.    
    int fim = 0, njgs, njgd, ft = 0, i, j, x, y;
    char sqr[1];

    // Quantidade de jogos (1-10)
    scanf("%d", &jgs);

    for(njgs = 0; njgs < jgs; njgs++){
        // Tamanho do tabuleiro (2-10);
        scanf("%d", &tbl);

        int mtx[tbl][tbl];

        getchar();
        for(i = 0; i < tbl; i++){
            for(j = 0; j < tbl; j++){
                scanf("%s", &sqr);
                getchar();
                if(strcmp(sqr, "x") == 0){
                    mtx[i][j] = 0;
                }
                else if(strcmp(sqr, "b") == 0){
                    mtx[i][j] = 1;
                }
                else{
                    main();
                }
            }
        }
        // Quantidade de jogadas;
        scanf("%d", &jgd);

        for(njgd = 0; njgd < jgd; njgd++){
            scanf("%d %d", &x, &y);
            for(i = 0; i < tbl; i++){
                for(j = 0; j < tbl; j++){
                    if(mtx[i][j] == 1 && x == i && y == j){
                        fim++;
                    }
                    if(mtx[i][j] == 0 && x == i && y == j){
                        mtx[i][j] = 3;
                        if( // Verifica se ha bomba nas casas vizinhas da coordenada dada
                            // Laterais
                            (mtx[i + 1][j] && (i < (tbl - 1))) == 1 ||
                            (mtx[i][j + 1] && (j < (tbl - 1))) == 1 ||
                            (mtx[i - 1][j] && (i > 0)) == 1 ||
                            (mtx[i][j - 1] && (j > 0)) == 1 ||
                            // Diagonais
                            (mtx[i + 1][j + 1] && ((i < (tbl - 1)) && (j < (tbl - 1)))) == 1 ||
                            (mtx[i + 1][j - 1] && ((i < (tbl - 1) && (j > 0)))) == 1 ||
                            (mtx[i - 1][ j + 1] && ((i > 0) && (j < (tbl - 1)))) == 1 ||
                            (mtx[i - 1][ j - 1] && ((i > 0) && (j > 0))) == 1
                            ){ 
                            continue;
                        }
                        else{
                            // Laterais
                            if(i < (tbl - 1)){ // Bloco da direita 
                                if(mtx[i + 1][j] != 1){
                                    mtx[i + 1][j] = 3;
                                }
                            }
                            if(j < (tbl - 1)){ // Bloco de baixo 
                                if(mtx[i][j + 1] != 1){
                                    mtx[i][j + 1] = 3;
                                }
                            }
                            if(i > 0){ // Bloco da esquerda
                                if(mtx[i - 1][j] != 1){
                                    mtx[i - 1][j] = 3;
                                }
                            }
                            if(j > 0){ // Bloco de cima
                                if(mtx[i][j - 1] != 1){
                                    mtx[i][j - 1] = 3;
                                }
                            }
                            
                            // Diagonais
                            if((i < (tbl - 1)) && (j < (tbl - 1))){ // Bloco direito/superior
                                if(mtx[i + 1][j + 1] != 1){
                                    mtx[i + 1][j + 1] = 3;
                                }
                            }

                            if((i < (tbl - 1) && (j > 0))){ // Bloco direito/inferior
                                if(mtx[i + 1][j - 1] != 1){
                                    mtx[i + 1][j - 1] = 3;
                                }
                            }

                            if((i > 0) && (j < (tbl - 1))){ // Bloco esquerdo/superior
                                if(mtx[i - 1][j + 1] != 1){
                                    mtx[i - 1][j + 1] = 3;
                                }
                            }

                            if((i > 0) && (j > 0)){ // Bloco esquerdo/inferior
                                if(mtx[i - 1][j - 1] != 1){
                                    mtx[i - 1][j - 1] = 3;
                                }
                            }   
                        }
                    }
                }
            }
        }
            
        for(i = 0; i < tbl; i++){
            if(ft > 0){
                break;
            }
            for(j = 0; j < tbl; j++){
                if(mtx[i][j] == 0 && fim == 0){
                    zeros++;
                    if(zeros > 1){
                        printf("FALTOU TERMINAR\n");
                        ft = 1;
                        break;
                    }
                }
            }
        }
            
        if(fim == 0 && ft == 0){
            printf("GANHOU\n");
        }
        if(fim >= 1){
            printf("PERDEU\n");
        }
        
        for(i = 0; i < tbl; i++){
            for(j = 0; j < tbl; j++){
                printf("%d ", mtx[i][j]);
            }
            printf("\n");
        }

        // Zera as variávies para a proxima execucao
        fim = 0;
        ft = 0;
        zeros = 0;
    }

    return 0;
}