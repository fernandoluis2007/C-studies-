#include <stdio.h>

int main(){
    unsigned char A = 13;
    A = A & 1;
    unsigned char B = 8;
    B = B >> 1;
    unsigned char C = 0;
    C = ~C;
    unsigned char D = 10;
    D = A & 0x0F;

    printf("Valor final --> %u\n", A);
    printf("Valor final --> %u\n", B);
    printf("Valor final --> %u\n", C);
    printf("Valor final --> %u\n", D);
}