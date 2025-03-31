#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero; 

    printf("\n Digite um valor:");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d é um número par \n", numero);
    } else {
        printf("%d é um número ímpar \n", numero);
    }

    return 0; 
}