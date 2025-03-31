#include <stdio.h>
#include <stdlib.h>

void maiorNumero() {
    int n, num, maior = 0;
    printf("Quantos números deseja fornecer? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        if (i == 0 || num > maior) {
            maior = num;
        }
    }
    printf("O maior número é %d\n", maior);
}
