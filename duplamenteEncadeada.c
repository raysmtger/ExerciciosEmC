#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DISC 5

typedef struct Disciplina {
    char nome[100];
    int codigo;
} Disciplina;

typedef struct Aluno {
    char nome[100];
    int matricula;
    Disciplina disciplinas[MAX_DISC];
    int qtd_disciplinas;
    struct Aluno* ant;
    struct Aluno* prox;
} Aluno;

Aluno* inicializarLista() {
    return NULL;
}

Aluno* inserirNoFim(Aluno* head, char* nome, int matricula) {
    Aluno* novo = (Aluno*)malloc(sizeof(Aluno));
    strcpy(novo->nome, nome);
    novo->matricula = matricula;
    novo->qtd_disciplinas = 0;
    novo->prox = NULL;
    novo->ant = NULL;

    if (!head) {
        return novo;
    }

    Aluno* temp = head;
    while (temp->prox) temp = temp->prox;
    temp->prox = novo;
    novo->ant = temp;
    return head;
}

void adicionarDisciplina(Aluno* aluno, char* nome, int codigo) {
    if (aluno->qtd_disciplinas >= MAX_DISC) return;
    strcpy(aluno->disciplinas[aluno->qtd_disciplinas].nome, nome);
    aluno->disciplinas[aluno->qtd_disciplinas].codigo = codigo;
    aluno->qtd_disciplinas++;
}

void imprimirLista(Aluno* head) {
    while (head) {
        printf("Nome: %s | Matrícula: %d\n", head->nome, head->matricula);
        for (int i = 0; i < head->qtd_disciplinas; i++) {
            printf("  Disciplina: %s (Código: %d)\n", head->disciplinas[i].nome, head->disciplinas[i].codigo);
        }
        head = head->prox;
    }
}

Aluno* buscarPorMatricula(Aluno* head, int matricula) {
    while (head) {
        if (head->matricula == matricula)
            return head;
        head = head->prox;
    }
    return NULL;
}

void imprimirPorDisciplina(Aluno* head, char* nomeDisc) {
    while (head) {
        for (int i = 0; i < head->qtd_disciplinas; i++) {
            if (strcmp(head->disciplinas[i].nome, nomeDisc) == 0) {
                printf("Nome: %s | Matrícula: %d\n", head->nome, head->matricula);
                break;
            }
        }
        head = head->prox;
    }
}

int main() {
    Aluno* lista = inicializarLista();

    lista = inserirNoFim(lista, "Ana", 123);
    adicionarDisciplina(lista, "Cálculo", 101);
    adicionarDisciplina(lista, "Física", 102);

    lista = inserirNoFim(lista, "Bruno", 456);
    adicionarDisciplina(lista->prox, "Cálculo", 101);
    adicionarDisciplina(lista->prox, "Química", 103);

    printf("Todos os alunos:\n");
    imprimirLista(lista);

    printf("\nAlunos matriculados em Cálculo:\n");
    imprimirPorDisciplina(lista, "Cálculo");

    printf("\nBusca por matrícula 456:\n");
    Aluno* a = buscarPorMatricula(lista, 456);
    if (a) imprimirLista(a);

    return 0;
}
