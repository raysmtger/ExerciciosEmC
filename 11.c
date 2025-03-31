#include <stdio.h>
#include <stdlib.h>

void crescimentoPopulacao() {
    int anos = 0;
    float cidadeA = 90000, cidadeB = 50000;
    while (cidadeB <= cidadeA) {
        cidadeA *= 1.009;
        cidadeB *= 1.015;
        anos++;
    }
    printf("Serão necessários %d anos para a cidade B ultrapassar a cidade A.\n", anos);
}

int main() {
    int opcao;
    do {
        printf("Selecione o exercício (3 a 8, 11, 0 para sair): ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 3: verificarLetra(); break;
            case 4: calcularTotalFrete(); break;
            case 6: multiplosDe5(); break;
            case 7: metadeEMedia(); break;
            case 8: tabelaConversao(); break;
            case 11: crescimentoPopulacao(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 0);
    
    return 0;
}