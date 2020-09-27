#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    char c1;
    char c2;
    int i, tam;

    scanf("%[^\n]s", &str);
    printf("");

    scanf("%s", &c1);
    printf("");

    scanf("%s", &c2);

    tam = strlen(str);

    for(i = 0; i < tam; i++){
        if(str[i] == c1){
            str[i] = c2;
            break;
        }
    }

    printf("%s", str);

    return 0;
}
