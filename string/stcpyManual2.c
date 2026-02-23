#include <stdio.h>

void stcpyManual(char *destino, char const *origem){
    int i = 0;
    while(origem[i] != '\0'){
        destino[i] = origem[i];
        printf("\nLetras sendo copiados para o destino --> %c\n", destino[i]);
        i++;
    }

    destino[i] = '\0';

}


int main(){
    char const *str = "ACF"; //Cosnt --> não pode ser modificada.
    char destino[10];
    stcpyManual(destino, str);

    printf("\nPalavra copiada --> %s\n", destino);
}