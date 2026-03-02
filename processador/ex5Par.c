#include <stdio.h>

void parOuImpar(unsigned char *valor){

    if ((*valor) & 1){
        printf("Eh Impar");
    }else{
        printf("Eh Par");
    }

}

int main(){

    unsigned char A = 18;
    unsigned char *valor = &A;

    parOuImpar(valor);
}