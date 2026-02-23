#include <stdio.h>

// numero --> é um ponteiro para um inteiro.
void calcula(int* numero){ //estamos dizendo para o parâmetro, virá aqui um endereço de memória de um inteiro.
    printf("Endereço de Memoria --> %d\n", numero);
    printf("Entrando no valor do endereco de memoria\n");
    (*numero)++; //Acessar o valor da variável atrave pelo endereço.
    // * significa --> que sabe que é um endereço de memória,
    //  então ele deseja entra no valor de memoria.
    // () --> primeiro acha o valor alocado na memória depois faça ++.
    printf("Valor do endereco de memoria --> %d\n", (*numero));
}

int main(){
    int c = 10;
    // & => significa caracter reservado para pegar o endereço de,
    // memória de uma variável.
    printf("Funcao Main: %d, %d\n", c, &c);// 10
    calcula(&c);
    printf("Funcao Calcula Retorno: %d, %d\n", c, &c);// 10
}