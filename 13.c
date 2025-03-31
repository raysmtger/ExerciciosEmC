#include <stdio.h>
#include <stdlib.h>

void registroCompras() {
    float valor, total = 0;
    int itens = 0;
    do {
        printf("Digite o valor do item (0 para finalizar): ");
        scanf("%f", &valor);
        if (valor > 0) {
            total += valor;
            itens++;
        }
    } while (valor > 0);
    printf("Itens comprados: %d, Total: R$%.2f\n", itens, total);
}