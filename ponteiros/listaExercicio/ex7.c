#include <stdio.h>
#include <string.h>

void percorrerArray(int *array, int tamanhoArray){
    for(int i = 0; i < tamanhoArray; i ++){
        printf("\n%d\n", array[i]);
    }
}

int main(){
    int a[4] = {10, 20, 30, 40};

    int tamanhoArray = sizeof(a) / sizeof(a[0]);

    percorrerArray(a, tamanhoArray);
}