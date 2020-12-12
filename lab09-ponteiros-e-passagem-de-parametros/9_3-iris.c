#include <stdio.h>
#include <stdlib.h>

typedef struct iris{
    float cs; // Comprimento da sépala
    float ls; // Largura da sépala
    float cp; // Comprimento da pétala
    float lp; // Largura da pétala
    char tipo[50];
} Iris;

Iris ri[200]; // Registros identificados
Iris ni; // Não identificada

void classificar(Iris ni, Iris ri[], int n){
    int j;
    float menor, ref = 100;

    for(j = 0; j < n; j++){
        menor = (ri[j].cs - ni.cs)*(ri[j].cs - ni.cs) + (ri[j].ls - ni.ls)*(ri[j].ls - ni.ls) + (ri[j].cp - ni.cp)*(ri[j].cp - ni.cp) + (ri[j].lp - ni.lp)*(ri[j].lp - ni.lp);
        if(menor < ref){
            ref = menor;
        }
    }

    for(j = 0; j < n; j++){
        menor = (ri[j].cs - ni.cs)*(ri[j].cs - ni.cs) + (ri[j].ls - ni.ls)*(ri[j].ls - ni.ls) + (ri[j].cp - ni.cp)*(ri[j].cp - ni.cp) + (ri[j].lp - ni.lp)*(ri[j].lp - ni.lp);
        if(ref == menor){
            printf("%s", ri[j].tipo);
        }
    }
}

int main(){
    int i, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%f %f %f %f %s", &ri[i].cs, &ri[i].ls, &ri[i].cp, &ri[i].lp, &ri[i].tipo);
    }

    scanf("%f %f %f %f", &ni.cs, &ni.ls, &ni.cp, &ni.lp);

    classificar(ni, ri, n);

    return 0;
}