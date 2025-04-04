#include <stdio.h>

int buscarSequencial(int vetor[], int qtd, int elemento) {
    for (int i = 0; i < qtd; i++) {
        if (vetor[i] == elemento) {
            return 1; 
        }
    }
    return 0; 
}

void inserirSemRepetir(int vetor[], int elemento, int qtd, int max) {
    if (qtd >= max) {
        printf("Lista cheia. Não é possível inserir mais elementos.\n");
        return;
    }

    if (!buscarSequencial(vetor, qtd, elemento)) {
        vetor[qtd] = elemento;
        printf("Elemento %d inserido com sucesso.\n", elemento);
    } else {
        printf("Elemento %d já existe na lista. Não será inserido.\n", elemento);
    }
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
    int valor;

    printf("Digite valores inteiros distintos (digite -1 para parar):\n");

    while (1) {
        printf("Valor: ");
        scanf("%d", &valor);

        if (valor == -1) {
            break;
        }

        if (!buscarSequencial(lista, qtd, valor)) {
            inserirSemRepetir(lista, valor, qtd, 10);
            qtd++; 
        } else {
            inserirSemRepetir(lista, valor, qtd, 10);
        }
    }

    percorrer(lista, qtd);

    return 0;
}
