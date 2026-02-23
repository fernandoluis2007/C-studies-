#include <stdio.h>


int main(){
    int nota;
    float media;

    do{
        int notaResp;
        int quantidadesNota;
        printf("\nDigite a nota: ");
        scanf("%d", &notaResp);

        nota += notaResp;
        quantidadesNota += 1;

        if (notaResp < 0){
            media = nota / quantidadesNota;
            break;
        }

    }while(nota > 0);

     printf("\n Media Final --> %.2f", media);

    return 0;
}