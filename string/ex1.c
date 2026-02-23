#include <stdio.h>
#include <string.h>

int main(){
    //Percorrendo um Array String -->

    char palavra[] = "BobChaton";
    int tamanhoPalavra = strlen(palavra);


    for(int i = 0; i < tamanhoPalavra; i++){
        printf("\n%c\n", palavra[i]);
    }

}