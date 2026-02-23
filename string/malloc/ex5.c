#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void imprimeString(char *string){
    while(*string != '\0'){
        printf("%c", *string);
        *(string++);
    }
}

int main(){
    char *str = malloc(4);
    str[0] = 'A';
    str[1] = 'C';
    str[2] = 'F';
    str[3] = '\0';

    imprimeString(str);
}