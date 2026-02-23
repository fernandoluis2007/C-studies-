#include <stdio.h>
#include <string.h>

void vogaisString(char *palavra, int tamanho, char *caracteres){
    for(int i = 0; i < tamanho; i++){
        char c = palavra[i];
        if(c == 'a', c || c == 'e'|| c == 'i' || c == 'o' || c == 'u'){
            caracteres[i] = c;
        }

        caracteres[i] = '\0';
    }
    
}

int main(){
    char palavra[] = "Chefe";
    int tamanho_lista = sizeof(palavra) / sizeof(palavra[0]);
    char caracteres[10];

    printf("vogais --> %s\n", caracteres);

    vogaisString(palavra, tamanho_lista, caracteres);
}