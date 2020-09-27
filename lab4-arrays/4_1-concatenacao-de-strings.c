#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[32];
    char str2[32];
    char res[64];

    fgets(str1, 32, stdin);

    str1[strcspn(str1, "\n")] = 0; //remove a quebra de linha de str1

    fgets(str2, 32, stdin);

    strcat(str1, str2);

    printf("%s", str1);

    return 0;
}