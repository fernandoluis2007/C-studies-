#include <stdio.h>

int contarVogais(const char *str){
    int i = 0;
    while(str[i] != '\0'){
        if((str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'E') || (str[i] == 'O')|| (str[i] == 'U')){
            printf("Ta aqui!");
            i++;
        }
        i++;
    }

    return i;
} 


int main(){
    char const *str = "PALAVRABAO";
    int quantidadeVogais = contarVogais(str);
    printf("Palavra --> %s\n Vogais --> %d", str, quantidadeVogais);
}