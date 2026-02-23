#include <stdio.h>

int strlenManual(char *str){
    int tamanhoStr = 0;
    int i = 0;
    while(str[i] != '\0'){
        i++;
        tamanhoStr += 1;
    }
    return tamanhoStr;
}

int main(){
    char *palavra = "ACF";
    int resp = strlenManual(palavra);
    printf("Tamanho da palavvra --> %d", resp);
}