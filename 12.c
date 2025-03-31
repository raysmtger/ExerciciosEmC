#include <stdio.h>
#include <stdlib.h>

void maquinaDeChocolates() {
    int quantidade, pagamento, troco;
    printf("Quantos chocolates deseja comprar? ");
    scanf("%d", &quantidade);
    int total = quantidade * 5;
    printf("Total: R$%d. Insira uma cédula (2, 5, 10, 20, 50): ", total);
    scanf("%d", &pagamento);
    if (pagamento < total) {
        printf("Pagamento insuficiente!\n");
        return;
    }
    troco = pagamento - total;
    printf("Troco: R$%d\n", troco);
}