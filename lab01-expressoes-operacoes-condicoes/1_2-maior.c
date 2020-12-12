#include <stdio.h>
#include <stdlib.h>

int maior() {
    int n1, n2, n3, m;

    printf("\nDigite o primeiro numero: ");
    scanf("%i", &n1);

    printf("Digite o segundo numero: ");
    scanf("%i", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%i", &n3);

    if(n1 >= n2 && n1 >= n3) {
        m = n1;
    }
    else if(n2 >= n1 && n2 >= n3){
        m = n2;
    }
    else {
        m = n3;
    }

    printf("%i", m);

    return 0;
}

int main() {
    maior();

    return 0;
}
