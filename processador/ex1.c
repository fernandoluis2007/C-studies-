#include <stdio.h>

void execute(unsigned char opcode, unsigned char *A){
    switch(opcode){
        case 1:
            (*A)++;
            break;
        case 2:
            (*A)--;
            break;
        case 3:
            *A = ~(*A);
            break;
        case 4:
            *A = 0;
            break;
    }
}

int main(){
    unsigned char A = 5;

    unsigned char programa[] = {1, 1, 3, 2};

    for(int i = 0; i < 4; i++){
        execute(programa[i], &A);
    }

    printf("Valor final de A: %u\n", A);

    return 0;
}