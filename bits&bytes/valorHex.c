#include <stdio.h>

int main(){
    unsigned char x = 0xF2; //usigned --> somente valores positivis e zero.

    printf("Decimal: %d\n", x);
    printf("Hex: 0x%X\n", x);
    printf("Binario: %u\n", x);

    return 0;
}