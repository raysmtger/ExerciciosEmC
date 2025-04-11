#include <stdio.h>

#define QNT_EMPRESAS 3  

typedef struct {
    char nomeDaCompania[50];
    char areaDeAtuacao[50];
    double valorAtual;
    double valorAnterior;
    double variacao;
} BolsaDeValores;

void inserir(BolsaDeValores *x) {
    printf("\nDigite o nome da companhia: ");
    scanf(" %[^\n]", x->nomeDaCompania);
    printf("Digite a área de atuação: ");
    scanf(" %[^\n]", x->areaDeAtuacao);
    printf("Digite o valor atual: ");
    scanf("%lf", &x->valorAtual);
    printf("Digite o valor anterior: ");
    scanf("%lf", &x->valorAnterior); 

    x->variacao = ((x->valorAtual - x->valorAnterior) / x->valorAnterior) * 100;
}

void mostrar(BolsaDeValores *x) {
    printf("\nNome da Companhia: %s\n", x->nomeDaCompania);
    printf("Área de Atuação: %s\n", x->areaDeAtuacao);
    printf("Valor Atual: R$ %.2f\n", x->valorAtual);
    printf("Valor Anterior: R$ %.2f\n", x->valorAnterior);
    printf("Variação: %.2f%%\n", x->variacao);
}

void preencherVetor(BolsaDeValores *empresas, int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("\n--- Empresa %d ---\n", i + 1);
        inserir(&empresas[i]);
    }
}

void mostrarVetor(BolsaDeValores *empresas, int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("\n=== Dados da Empresa %d ===", i + 1);
        mostrar(&empresas[i]);
    }
}

int main() {
    BolsaDeValores empresas[QNT_EMPRESAS]; 
    preencherVetor(empresas, QNT_EMPRESAS);
    mostrarVetor(empresas, QNT_EMPRESAS);
}