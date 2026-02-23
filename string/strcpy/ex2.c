#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
    char *str = malloc(10);
    strcpy(str, "ACF");

    printf("%s", str);
}