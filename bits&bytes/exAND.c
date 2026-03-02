#include <stdio.h>

int main(){
    int a = 5; // 00000101.
    int b = 3; // 00000011.

    int c = a & b;
    printf("%d", c); //Porque 1 & 1 = 1 e 1 & 0 = 0;
}