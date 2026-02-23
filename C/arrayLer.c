#include <stdio.h>

int main(){
    
    int a[5] = {10, 20, 30, 40, 50};
    int tamanhoArray = sizeof(a) / sizeof(a[0]);
    
    for(int i = 0; i < tamanhoArray; i++){
        printf("\nArray posicao --> %d : %d", i, a[i]);
    }
}