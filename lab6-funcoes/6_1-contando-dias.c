#include <stdio.h>
#include <stdlib.h>

int ndiasano(int ano){
    int i, nda = 0;

    for(i = ano; i < 2019; i++){
        if(i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)){
            nda = nda + 366;
        }
        else{
            nda = nda + 365;
        }
    }

    return nda;
}

int ndiasmes(int mes){
    int i, ndm = 0;
    
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

    return ndm;
}

int ndiasdias(int dia){
    int ndd = 0;
    
    ndd = 31 - dia;

    return ndd;
}


int main(){
    int dia, mes, ano, ndias;

    while(scanf("%d %d %d", &dia, &mes, &ano) != EOF){
        ndias = ndiasdias(dia) + ndiasmes(mes) + ndiasano(ano);
        
        if(ano < 2020){
            ndias = ndias + 262;
        }
        else{
            ndias = ndias - 104;
        }
        printf("\n%d", ndias);
    }   

    return 0;
}