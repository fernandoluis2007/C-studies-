#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
    char origem[] = "OLA";
    char destino[10];

    //strcpy --> (destino, origem, tamanho);

    strcpy(destino, origem); //char *strcpy(char *destino, char *origem).
    //O strcpy copia o conteudo da origem para armazenar em outra variavel.
    //No caso seria o Array --> origem(até o \0).
    //Destiono agora tem o valor --> 'O','L','A','\0'.

    printf("%s\n", destino); //Ola.
}