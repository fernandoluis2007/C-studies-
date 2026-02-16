#include <stdio.h>

int main(){
    int a, b, c;
    a = 50;
    b = 50;
    // Declara um ponteiro para int.
    c = a + b;
    
    int *d; // Declarando o ponteiro do tipo int.
    d = &c; // Apontando para o ponteiro o valor que ele deve armazenar.
    // &c --> endereço de c.
    // Então d --> aponta para c.
    // * --> para acessar o valor == *d.


    printf("\nValor do Ponteiro: %d\n", *d);
    printf("Endereco armazenado no ponteiro: %d\n", d);
    printf("Endereco do proprio ponteiro: %d\n", &d);
}