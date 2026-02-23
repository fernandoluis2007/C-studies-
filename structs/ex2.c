#include <stdio.h>

typedef struct{
    int num; 
    int den;
}racionais;

racionais registroDeDados(void){

    racionais a;

    printf("\nDigite um numerador: \n");
    scanf("%d", &a.num);

    printf("\nDigite um denominador: \n");
    scanf("%d", &a.den);

    return a;

}

int vereficacaoPonteiro(racionais a){
    if(&a.num < 0 || &a.den < 0){
        printf("Entrada Invalida");
        return 1;
    }

    return 0;
}

int mdc(racionais *a){
    while(a->den != 0){
        int resultado = (a->num % a->den);
        (a->num) = (a->den);
        (a->den) = resultado;
    }
    return (a->num);
}

int reduz(racionais *a){
    if(vereficacaoPonteiro(*a)){
        return 1;
    }
    else{
        int respMDC = mdc(a);
        int mmc = (a->num * a-> den) / respMDC;
        
        return mmc;
    }
    
}


racionais soma(void){
    racionais c = registroDeDados();
    racionais d = registroDeDados();

    racionais resultado;

    resultado.num = (c.num * c.den) + (d.num * d.num); 
    resultado.den = c.den * c.num;

    return resultado;
}


int main(){

    racionais a;

    a = registroDeDados();

    reduz(&a);

    printf("Fracao reduzida: %d/%d\n", a.num, a.den);

    racionais resultado = soma();
    printf("%d | %d", resultado.num, resultado.den);

    return 0;
}