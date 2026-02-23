#include <stdio.h>

int main(){
    int nota[5] = {1,2,3,4,5};
    int tamanhoArray = sizeof(nota) / sizeof(nota[0]);

    for(int i = 0; i < tamanhoArray; i++){
        printf("\nPosicao: %d, Valor: %d", i, nota[i]);
    }
}