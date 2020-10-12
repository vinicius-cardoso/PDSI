#include <stdio.h>
#include <stdlib.h>

void primos(int m, int *p1, int *p2){
    int m2 = m, n, ref, cont = 0;
    int m3, i, p = 0, fim = 0;

    // primo inferior

    n = m - 1;
    ref = m - 1;

    for(m2 = ref; m2 >= 2; m2--){
        for(n = m2; n >= 2; n--){
            if(m2 % n == 0){
                cont++;
            }
        }
        if(cont == 1){
            *p1 = m2;
            break;
        }

        cont = 0;
    }    

    cont = 0;

    // primo superior

    m3 = m + 1;

    while(fim == 0){
        for(i = 2; i <= m3; i++){
            if(m3 % i == 0){
                cont++;
            }
        }

        if(cont == 1){
            *p2 = m3;
            fim = 1;
            break;
        }

        cont = 0;

        m3++;
    }

    printf("%d\n", *p1);
    printf("%d", *p2);
}

int main(){
    int m, p1, p2;

    scanf("%d", &m);

    p2 = m + 1;

    primos(m, &p1, &p2);

    return 0;
}