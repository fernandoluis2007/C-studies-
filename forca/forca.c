#include <stdio.h>
#include <string.h>

void abertura(){
    printf("*****************************\n");
    printf("Bem Vindo ao Jogo da Forca\n!");
    printf("*****************************\n");
}

void chuta(char chutes[26], int* tentativas){
    char chute;
    scanf(" %c", &chute);

    chutes[(*tentativas)] = chute;
    (*tentativas)++;
}

int main(){
    //Palavra Chave - Tipo Char.
    char palavraSecreta[20];
    sprintf(palavraSecreta, "MELANCIA");

    //variavel para controle de loop.
    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    abertura();

    do{ 
        int tamanho = strlen(palavraSecreta);

        for(int i = 0; i < tamanho; i++){
            int achou = 0;

            for(int k = 0; k < tentativas; k++){
                if (chutes[k] == palavraSecreta[i]){
                    achou = 1;
                    break;
                }
            }

            if (achou){
                printf("%c ", palavraSecreta[i]);
            }else {
                printf("_ ");
            }
        }

        chuta(chutes, &tentativas);

    }while(!acertou && !enforcou); //! --> nega, invertando o booleano. Verdadeiro e Verdadeiro.

    return 0;
}