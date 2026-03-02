#include <stdio.h>

int main(){
    unsigned char A = 8;

    if(A & (1 << 3)){
        printf("Bit 3 esta ligado\n");
    }else{
        printf("Bit 3 esta desligado\n");
    }
}