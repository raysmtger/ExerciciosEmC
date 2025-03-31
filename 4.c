#include <stdio.h>
#include <stdlib.h>

void calcularTotalFrete() {
    int quantidade, regiao;
    float total, frete;
    printf("Digite a quantidade de itens (1 a 100): ");
    scanf("%d", &quantidade);
    if (quantidade < 1 || quantidade > 100) return;
    
    printf("Inform a região (1-Norte, 2-Nordeste, 3-Centro-Oeste, 4-Sudeste, 5-Sul): ");
    scanf("%d", &regiao);
    
    total = quantidade * 5.00;
    switch (regiao) {
        case 1: frete = total * 0.10; break;
        case 2: frete = total * 0.08; break;
        case 3: frete = total * 0.12; break;
        case 4: frete = total * 0.15; break;
        case 5: frete = total * 0.11; break;
        default: frete = 0; break;
    }
    printf("Total: %.2f, Frete: %.2f, Total com frete: %.2f\n", total, frete, total + frete);
}