#include <stdio.h>

void stcpyManual(char *destino, char *origem){
    int i = 0;
    while(origem[i] != '\0'){
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0';
}

int main(){
    char *palavra1 = "ACF";
    char destino[10];
    stcpyManual(destino, palavra1);

    printf("Palavra destino copiada --> %s", destino);

}