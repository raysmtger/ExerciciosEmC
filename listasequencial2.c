#include <stdio.h>

int buscaBinaria(int vetor[], int qtd, int elemento) {
    int esquerda = 0, direita = qtd - 1;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;

        if (vetor[meio] == elemento)
            return meio;
        
        if (vetor[meio] < elemento)
            direita = meio - 1;
        else
            esquerda = meio + 1; 
    }
    return -1; 
}

void inserirOrdenado(int vetor[], int *qtd, int max, int elemento) {
    if (*qtd >= max) {
        printf("Lista cheia! Não é possível inserir mais elementos.\n");
        return;
    }

    int i = *qtd - 1;

    while (i >= 0 && vetor[i] < elemento) {
        vetor[i + 1] = vetor[i];
        i--;
    }

    vetor[i + 1] = elemento;
    (*qtd)++;
    printf("Elemento %d inserido com sucesso!\n", elemento);
}

void removerElemento(int vetor[], int *qtd, int elemento) {
    int pos = buscaBinaria(vetor, *qtd, elemento);

    if (pos == -1) {
        printf("Elemento %d não encontrado na lista.\n", elemento);
        return;
    }

    for (int i = pos; i < (*qtd) - 1; i++) {
        vetor[i] = vetor[i + 1];
    }

    (*qtd)--;
    printf("Elemento %d removido com sucesso!\n", elemento);
}

void percorrer(int vetor[], int qtd) {
    printf("Lista: ");
    for (int i = 0; i < qtd; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int lista[10];  
    int qtd = 0;   
    int opcao, valor;

    do {
        printf("\n----- lista -----\n");
        printf("1 - Inserir elemento\n");
        printf("2 - Remover elemento\n");
        printf("3 - Buscar elemento\n");
        printf("4 - Percorrer lista\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                inserirOrdenado(lista, &qtd, 10, valor);
                break;
            case 2:
                printf("Digite o valor a ser removido: ");
                scanf("%d", &valor);
                removerElemento(lista, &qtd, valor);
                break;
            case 3:
                printf("Digite o valor a ser buscado: ");
                scanf("%d", &valor);
                if (buscaBinaria(lista, qtd, valor) != -1)
                    printf("Elemento %d encontrado!\n", valor);
                else
                    printf("Elemento %d não encontrado.\n", valor);
                break;
            case 4:
                percorrer(lista, qtd);
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
