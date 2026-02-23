#include <stdio.h>

int main(){
    int numero;
    int numeroMaior;
    int numeroMenor;
    for(int i = 0; i <= 4; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(i==0){
            numeroMaior = numero;
            numeroMenor = numero;
        }else{
            if (numero > numeroMaior){
                numeroMaior = numero;
            }if(numero < numeroMenor){
                numeroMenor = numero;
            }
        }
        
    }
        printf("\nMaior Numero é %d", numeroMaior);
        printf("\nMenor Numero é %d", numeroMenor);
    return 0;
}