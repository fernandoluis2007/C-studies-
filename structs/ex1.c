#include <stdio.h>

typedef struct{
    char nome[50];
    char sobrenome[70];
    int dataNasc;
    int CPF;
    int dataAdmissao;
    int salario;
} empregados;

int main(){
    empregados listaFuncionarios[10];

    for(int i = 0; i < 3; i++){
        printf("\nNome do Funcionario: \n");
        scanf("%s", listaFuncionarios[i].nome);

        printf("\nSobrenome do Funcionario: \n");
        scanf("%s", listaFuncionarios[i].sobrenome);

        printf("\nData de Nascimento do Funcionario: \n");
        scanf("%s", &listaFuncionarios[i].dataNasc);

        printf("\nCPF do Funcionario: \n");
        scanf("%s", &listaFuncionarios[i].CPF);

        printf("\nData de Admissão do Funcionario: \n");
        scanf("%s", &listaFuncionarios[i].dataAdmissao);
        
        printf("\nSalario do Funcionario: \n");
        scanf("%s", &listaFuncionarios[i].salario);
    }

    for(int i = 0; i < 3; i++){
        printf("\nNome Funcionario: %s\n", listaFuncionarios->nome);
        printf("\nSobrenome Funcionario: %s\n", listaFuncionarios->sobrenome);
    }
}