#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;

    int *p;

    p = &a;
    printf("\nEndereço da memoria da primeira variavel --> %d\n", &p);
    printf("Valor do endereço de memoria --> %d\n", *p);

    p = &b;
    printf("Endereço da memoria da segunda variavel --> %d\n", &p);
    printf("Valor do endereço de memoria --> %d\n", *p);
}