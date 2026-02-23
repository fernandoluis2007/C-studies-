#include <stdio.h>

void dobrar(int *ponteiro){
    (*ponteiro) *= 2;
    printf("Valor do ponteiro dobrado --> %d", *ponteiro);
}

int main(){
    int x = 5;
    dobrar(&x);
}