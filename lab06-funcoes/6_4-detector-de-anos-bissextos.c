#include <stdio.h>
#include <stdlib.h>

int bissexto(int ano){
    int saida;

    if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
        saida = 1;
    }            
    else{
        saida = 0;
    }

    return saida;
}

int main(){
    int ano, saida;

    while(scanf("%d", &ano) != EOF){
        saida = bissexto(ano);
        printf("%d\n", saida);
    }

    return 0;
}