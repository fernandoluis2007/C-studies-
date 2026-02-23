#include <stdio.h>

int main(){
    float a = 2.2;
    
    float *p;

    p = &a;
    printf("\nEndereço da memoria da primeira variavel --> %d\n", &a);
    printf("Valor do endereço de memoria --> %d\n", *p);

    (*p) += 10;

    printf("\nEndereço da memoria da primeira variavel --> %d\n", &p);
    printf("Valor do endereço de memoria --> %d\n", *p);
}