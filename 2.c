#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero; 

    printf("\n Digite um valor:");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("%d é um número positivo", numero); 
    } else if (numero < 0) {
        printf("%d é um número negativo", numero);
    } else {
        printf("%d é zero", numero);
    }

    return 0;
}