#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *str = malloc(6);
    str[0] = 'A';
    str[1] = ' ';
    str[2] = 'B';
    str[3] = ' ';
    str[4] = 'C';
    str[5] = '\0';

    for(int i = 0; i < strlen(str); i++){
        printf("\n%c", str[i]);
    }
}