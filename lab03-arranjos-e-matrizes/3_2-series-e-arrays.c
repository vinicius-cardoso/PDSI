#include <stdio.h>
#include <stdlib.h>

int fibonacci() {
    int i, n;
    int fib[1000] = { 0, 1, 1 };

    printf("\nDigite o termo desejado: ");
    scanf("%d", &n);

    for(i = 2; i <= 1000; i++){
        fib[i] = fib[i - 1] + fib[i - 2];

        if(i == n){
            printf("\n%d", fib[n]);
            fibonacci();
        }
        if(i > 1000 || i == -1){
            break;
        }
    }

    return 0;
}

int main() {
    fibonacci();

    return 0;
}
