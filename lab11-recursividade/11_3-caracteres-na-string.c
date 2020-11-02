#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int chrcount(char* str, char chr){
    int count = 0;
    char ultimo = str[strlen(str)];

    if(str[0] == ultimo){
        return 0;
    }

    if(str[0] == chr){
        count++;
    }

    return count + chrcount(&str[1], chr);
}

int main(){
    char str[50], chr;

    scanf("%s", &str);
    scanf(" %c", &chr);

    printf("%d", chrcount(str, chr));

    return 0;
}