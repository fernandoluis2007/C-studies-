#include <stdio.h>

void swap(int *a, int *b){
    *a = *b;
    *b = *a;

    printf("Valor do primeiro ponteiro na funcao Swap --> %d\n", *a);
    printf("Valor do primeiro segundo na funcao Swap --> %d\n", *b);
}

int main(){
    int a = 10;
    int b = 20;

    printf("Valor do segundo ponteiro na funcao Main --> %d\n", a);
    printf("Valor do segundo ponteiro na funcao Main --> %d\n", b);

    swap(&a, &b);

}