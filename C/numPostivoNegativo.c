#include <stdio.h>

int main(){

    int numero = 0;
    int numero_positivo = 0;
    int numero_negativo = 0;

    for(int i = 0; i <= 10; i++){
        printf("\nDigite um numero positivo ou negativo: ");
        scanf("%d", &numero);

        if(numero > 0){
            numero_positivo += 1;
        }else{
            numero_negativo += 1;
        }
    }

    printf("Quantidade de numeros positivos --> %d", numero_positivo);
    printf("Quantidade de numeros negativo --> %d", numero_negativo);
}