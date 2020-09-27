#include <stdio.h>
#include <stdlib.h>

int contagem() {
    int i = 233;

    do {
        printf("\n%d", i);

        if(i > 300 && i < 400) {
            i = i + 3;
        }
        else {
            i = i + 5;
        }
    }
    while(i <= 457);

    return 0;
}

int main() {
    contagem();

    return 0;
}
