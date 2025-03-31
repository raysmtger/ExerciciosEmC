#include <stdio.h>
#include <stdlib.h>

void homensMais21() {
    for (int i = 0; i < 20; i++) {
        char nome[50], sexo;
        int idade;
        printf("Digite o nome: ");
        scanf(" %s", nome);
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if (sexo == 'M' && idade > 21) {
            printf("Nome: %s\n", nome);
        }
    }
}