#include <stdio.h>

int contarBitsAtivos(unsigned char *A){

    int bitsAtivos = 0;

    for(int i = 0; i < 8; i++){
        if(*A & (1 << i)) {
            bitsAtivos++;
        }
    }

    return bitsAtivos;
}

int main(){
    unsigned char A = 18;

    int bitsAtivos = contarBitsAtivos(&A);
    printf("Bits ativos em A --> %d\n", bitsAtivos);
}