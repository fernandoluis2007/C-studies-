#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
    char *str = malloc(5);
    str[0]='C';
    str[1]='A';
    str[2]='S';
    str[3]='A';
    str[4]='\0';

    while(*str != '\0'){
        printf("%c", *str);
        *(str++);
    }
}