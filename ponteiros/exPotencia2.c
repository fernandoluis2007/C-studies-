#include <stdio.h>

int pontencia(int num, int* resultado){
    *resultado = 1;

    for(int i = num; i >= 1; i--){
        (*resultado) *= i;
    }
    return (*resultado);
}

int main(){
    int num = 0;
    int resultado = 0;
    printf("Digite um numero para calcular a potência: \n");
    scanf("%d", &num);
    pontencia(num, &resultado);
    printf("Potencia do %d --> %d", num, resultado);
}