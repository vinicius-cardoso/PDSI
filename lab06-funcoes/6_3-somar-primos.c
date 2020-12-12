#include <stdio.h>
#include <stdlib.h>

long long int Soma_Primos(long long int b, long long int soma){
    soma = soma + b;

    return soma;
}

long long int Primo(long long int n){
    long long int c = 0, i;

    if(n < 2){

        return -1;
    }
    else{
        for(i = 2; i < n ; i++){
            if(n % i == 0){
                c++;

                break;
            }
        }

        if(c == 0){
                
            return 1;
        }
        else{
            
            return 0;
        }
    }
}

int main(){
    long long int n, c, soma, b;

    while(scanf("%lld", &n) != EOF){
        c = 0;
        b = 2;
        soma = 0;

        while(1){
            if(Primo(b) == 1){
                soma = Soma_Primos(b, soma);
                c++;
            }
            b++;
        
            if(c == n){
                printf("%lld\n", soma);

                break;
            }
        }
    }

    return 0;
}