#include <stdio.h>

void somaArray(int *array, int tamanhoArray){
    int somaPonteiros = 0;
    for(int i = 0; i < tamanhoArray; i++){
        somaPonteiros += array[i]; // *(array + 1);
    }
    printf("Soma dos ponteiros dentro do array --> %d\n", somaPonteiros);
}

int main(){
    int a[4] = {10,20,30,40};
    int *p = a;

    int tamanhoArray = sizeof(a) / sizeof(a[0]);

    somaArray(p, tamanhoArray);
}

/*

void somaArray(int *array, int tamanhoArray){
    int soma = 0;
    int *fim = array + tamanhoArray;

    while(array < fim){
        soma += *array;
        array++;
    }

    printf("Soma --> %d\n", soma);
}

*/