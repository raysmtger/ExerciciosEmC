#include <stdio.h>
#include <stdlib.h>

void tabelaConversao() {
    int inicio, fim;
    printf("Informe o intervalo (início e fim): ");
    scanf("%d %d", &inicio, &fim);
    for (int i = inicio; i <= fim; i++) {
        printf("%d polegada(s) = %.2f cm\n", i, i * 2.54);
    }
}