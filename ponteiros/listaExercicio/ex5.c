#include <stdio.h>

void parOuImpar(int *ponteiro){
    if((*ponteiro) % 2 == 0){
        printf("Numero e Par --> %d", *ponteiro);
    }else{
        printf("Numero e Impar --> %d", *ponteiro);
    }
}

int main(){
    int x = 10;
    parOuImpar(&x);
}