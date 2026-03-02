#include <stdio.h>

void trasnformarBits(unsigned char x, unsigned char *Alto, unsigned char *Baixo){
    *Alto = x >> 4;
    *Baixo = x & 0x0F;

    
}


int main(){
    unsigned char x = 0xF2;
    unsigned char xAlto;
    unsigned char xBaixo;

    trasnformarBits(x, &xAlto, &xBaixo);

    printf("High nibble: 0x%d\n", xAlto);
    printf("Low nibble: 0x%d\n", xBaixo); 

    return 0;

}