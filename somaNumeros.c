#include <stdio.h>

int main(){
    int numero = 0;
    for(int i = 0; i <= 100; i++){
        numero += i;
        printf("\n%d", numero);
    }
    return 0;
}