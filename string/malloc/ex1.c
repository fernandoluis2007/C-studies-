#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *str = malloc(5);
    str[0] = 'B';
    str[1] = 'C';
    str[2] = 'D';
    str[3] = 'F';
    str[4] = '\0';

    int tamanhoString = strlen(str);

    for(int i = 0; i < tamanhoString; i++){
        printf("%c\n", str[i]);
    }

    free(str);
    return 0;
}