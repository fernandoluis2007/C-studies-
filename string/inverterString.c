#include <stdio.h>

int tamanhoString(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }

    return i;
}

void inverterString(const char *str, char *destino, int tamanho){
    for(int i = 0; i < tamanho; i++){
        destino[i] = str[tamanho - 1 - i];
    }
    destino[tamanho] = '\0';
}

/*char limparEspacosVazios(char *string){
    int i = 0;

    while(string[i] != '\0'){
        if(string[i] == ' '){
            string[i] = '\0';
        }

        i++;g

    }

    return string;
}
*/
int main(){
    char str[] = "ACF";

    int tamanhoStr = tamanhoString(str);

    char stringInvertida[tamanhoStr + 1];
    
    inverterString(str, stringInvertida, tamanhoStr);

    printf("Palavra Invertida --> %s", stringInvertida);
}