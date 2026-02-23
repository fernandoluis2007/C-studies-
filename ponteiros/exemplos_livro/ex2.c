#include <stdio.h>

int main(){
    int a = 10;
    int b = 10;

    int *c;
    c = &b; // O ponteiro c passa a conter o endereço de b.

    printf("\nValor do ponteiro --> %d\n", *c);
    printf("Endereco do ponteiro --> %d\n", &c);
}