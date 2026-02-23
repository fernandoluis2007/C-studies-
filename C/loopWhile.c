#include <stdio.h>

void contagemRegressiva(){
    int numeroR = 10;
    while(numeroR > 1){
        numeroR -= 1;
        printf("\n%d", numeroR);
    }
}

void contagemAteDez(){
    int numero = 0;
    while(numero <= 9){
        numero += 1;
        printf("\n%d", numero);
    }
}

int main(){
    contagemRegressiva();
    contagemAteDez();
    return 0;
}