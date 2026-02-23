#include <stdio.h>

void soma(int a, int b, int* ponteiro){
    printf("Ponteiro --> %d\n", *ponteiro);
    printf("Localizacao na Memoria --> %d\n", ponteiro);

    int num = (*ponteiro) + a + b; //ou --> *ponteiro = a + b;
    printf("Calculo da Soma do Ponteiro --> %d\n", num);
}

int main(){
    int num = 10;
    int a = 50;
    int b = 100;
    soma(a, b, &num);
}