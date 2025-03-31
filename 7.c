#include <stdio.h>
#include <stdlib.h>

void metadeEMedia() {
    float num, soma = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%f", &num);
        printf("Metade: %.2f\n", num / 2);
        soma += num;
    }
    printf("Média: %.2f\n", soma / 10);
}
