#include <stdio.h>
#include <stdlib.h>

int soma(int vetor[], int tamanho_vetor){
    if(tamanho_vetor <= 0){
        return 0;
    }

    return (soma(vetor, tamanho_vetor - 1) + vetor[tamanho_vetor - 1]);
}

int main(){
    int i, tamanho_vetor;
    
    scanf("%d", &tamanho_vetor);

    int vetor[tamanho_vetor];

    for(i = 0; i < tamanho_vetor; i++){
        scanf("%d", &vetor[i]);
    }

    printf("%d", soma(vetor, tamanho_vetor));

    return 0;
}