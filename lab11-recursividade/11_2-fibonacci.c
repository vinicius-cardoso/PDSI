#include <stdio.h>
#include <stdlib.h>

int fibonacci(int q){
    if((q == 1) || (q == 2)){
        return 1;
    }
    else{
        return (fibonacci(q - 1) + fibonacci(q - 2));
    }
}

int main(){
    int q;

    scanf("%d", &q);

    printf("%d", fibonacci(q));

    return 0;
}