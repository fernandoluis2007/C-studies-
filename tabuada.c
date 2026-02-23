#include <stdio.h>

int main(){
    int numero = 0;
    printf("Digite o numero que deseja ver a tabuada: ");
    scanf("%d", &numero);
    for(int i = 0; i <= 10; i++){
        int resultado = numero * i;
        printf("\n%d x %d = %d", numero, i, resultado);
    }
}