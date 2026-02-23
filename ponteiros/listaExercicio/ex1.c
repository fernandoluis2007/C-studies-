#include <stdio.h>

int main(){
    int a = 0;
    int *p = &a;

    printf("Valor da variavel --> %d\n", a);
    printf("Endereco da variavel --> %d\n", &a);
    printf("Valor armazenado no ponteiro --> %d\n", &p);
    printf("Valor apontado pelo ponteiro --> %d\n", *p);
}