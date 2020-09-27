#include <stdio.h>
#include <stdlib.h>

int primo(unsigned long num){
    int i, n = 0, res;

    if(num < 2){
        res = -1;
    }
    else{
        for(i = 2; i < num; i++){
            if(num % i == 0){
                n++;
                if(n == 1){
                    res = 0;
                    break;
                }
            }
        }

        if(n == 0){
            res = 1;
        }
    }

    return res;
}

int main(){
    unsigned long num;
    int res;

    while(scanf("%ld", &num) != EOF){
        res = primo(num);
        printf("%d\n", res);
    }

    return 0;
}