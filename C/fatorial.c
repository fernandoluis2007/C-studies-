#include <stdio.h>

int fatorialNumero(numero){
    int fatorial = 1;
    for(int i = numero; i >= 1; i--){
        fatorial *= i;
    }
    printf("Numero Fatorial: %d \n Fatorado --> %d", numero, fatorial);
    return fatorial;
}

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    fatorialNumero(numero);

    return 0;
}