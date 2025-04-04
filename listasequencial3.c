#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100  

typedef struct {
    char nome[50];
    int conta;
    float saldo;
} Cliente;

typedef struct {
    Cliente dados[MAX];
    int tamanho;
} ListaSequencial;

void inicializar(ListaSequencial *lista) {
    lista->tamanho = 0;
}

int numeroElementos(ListaSequencial *lista) {
    return lista->tamanho;
}

void imprimir(ListaSequencial *lista) {
    if (lista->tamanho == 0) {
        printf("Lista vazia.\n");
        return;
    }
    for (int i = 0; i < lista->tamanho; i++) {
        printf("Conta: %d | Nome: %s | Saldo: %.2f\n", 
               lista->dados[i].conta, lista->dados[i].nome, lista->dados[i].saldo);
    }
}

int buscar(ListaSequencial *lista, int conta, char *nome) {
    for (int i = 0; i < lista->tamanho; i++) {
        if (lista->dados[i].conta == conta) {
            return i;
        }
    }
    for (int i = 0; i < lista->tamanho; i++) {
        if (strcmp(lista->dados[i].nome, nome) == 0) {
            return i;
        }
    }
    return -1;
}

int inserir(ListaSequencial *lista, char *nome, int conta, float saldo) {
    if (lista->tamanho == MAX) {
        printf("Erro: Lista cheia.\n");
        return 0;
    }
    lista->dados[lista->tamanho].conta = conta;
    strcpy(lista->dados[lista->tamanho].nome, nome);
    lista->dados[lista->tamanho].saldo = saldo;
    lista->tamanho++;
    return 1;
}

int excluir(ListaSequencial *lista, int conta) {
    int posicao = buscar(lista, conta, "");
    if (posicao == -1) {
        printf("Conta nao encontrada.\n");
        return 0;
    }
    
    for (int i = posicao; i < lista->tamanho - 1; i++) {
        lista->dados[i] = lista->dados[i + 1];
    }
    lista->tamanho--;
    return 1;
}

void reinicializar(ListaSequencial *lista) {
    lista->tamanho = 0;
}

int main() {
    ListaSequencial lista;
    inicializar(&lista);

    inserir(&lista, "Ana", 123, 1000.50);
    inserir(&lista, "Carlos", 456, 250.75);
    inserir(&lista, "Bruna", 789, 300.20);

    printf("Lista inicial:\n");
    imprimir(&lista);

    printf("\nBuscando conta 456:\n");
    int pos = buscar(&lista, 456, "");
    if (pos != -1)
        printf("Encontrado: %s com saldo %.2f\n", lista.dados[pos].nome, lista.dados[pos].saldo);
    else
        printf("Conta nao encontrada.\n");

    printf("\nExcluindo conta 123:\n");
    excluir(&lista, 123);
    imprimir(&lista);

    printf("\nReinicializando lista...\n");
    reinicializar(&lista);
    imprimir(&lista);

    return 0;
}
