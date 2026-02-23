#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
    char *palavra = malloc(6); // Reserva memória para Palavra.
    palavra[0] = 'C';
    palavra[1] = 'A';
    palavra[2] = 'R';
    palavra[3] = 'R';
    palavra[4] = 'O';
    palavra[5] = '\0';

    for(int i = 0; i < strlen(palavra); i++){
        printf("%c\n", palavra[i]);
    }

    free(palavra); // Liberando a memória.
    return 0;
}