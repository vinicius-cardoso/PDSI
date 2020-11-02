#include <stdio.h>
#include <string.h>
 
void removechar(char *str, char chr){
	char ult = str[strlen(str)];
    
    if(str[0] == ult){
        return 0;
    }

    if(str[0] == chr){
        
    }
}
 
int main(){
    char str[50], chr;

    scanf("%s", &str);
    scanf(" %c", &chr);

    removechar(str, chr);

    printf("%s", str);
 
	return 0;    
}