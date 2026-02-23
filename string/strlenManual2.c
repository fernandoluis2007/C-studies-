#include <stdio.h>

int strlenManual(char *palavra){
    int i = 0;
    while(palavra[i] != '\0'){
        printf("Letra --> %c\n", palavra[i]);
        i++;
    }

    return i;
}

int main(){
    char *str = "ACF";
    int tamanhoStr = strlenManual(str);

    printf("Tamanho da palavra --> %d\n", tamanhoStr);

}