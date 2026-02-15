#include <stdio.h>

void percorrendoVetor(int v[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("\n%d", v[i]);
    }
}

int main(){

    //Declaração de um Array -->
    int arrayNumero[5];

    //Inicilizando uma Array -->
    int a[5] = {10, 20, 30, 40, 50};

    //Ou deixando o compilador contar automáticamente -->
    int b[] = {50, 100, 150, 200};

    int tamanhoArray = sizeof(a) / sizeof(a[0]);

    //acessando elementos -->
    printf("%d\n", a[0]); // primeiro elemento.
    printf("%d\n", a[4]); //ultimo elemento.

    percorrendoVetor(a, 5);
    printf("\n%d", tamanhoArray);

    return 0;
}