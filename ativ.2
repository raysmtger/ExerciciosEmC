#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS_POR_DISCIPLINA 3

typedef struct Disciplina {
    char nome[50];
    char codigo[10];
    char docente[50];
    int qtdAlunos; // total de alunos matriculados
    struct Disciplina *prox;
} Disciplina;

typedef struct DisciplinaAluno {
    Disciplina *disciplina;
    struct DisciplinaAluno *prox;
} DisciplinaAluno;

typedef struct Aluno {
    char nome[50];
    int matricula;
    DisciplinaAluno *disciplinas;
    struct Aluno *prox;
} Aluno;


Disciplina *listaDisciplinas = NULL;
Aluno *listaAlunos = NULL;

Disciplina *criarDisciplina(char nome[], char codigo[], char docente[]) {
    Disciplina *nova = (Disciplina *)malloc(sizeof(Disciplina));
    strcpy(nova->nome, nome);
    strcpy(nova->codigo, codigo);
    strcpy(nova->docente, docente);
    nova->qtdAlunos = 0;
    nova->prox = listaDisciplinas;
    listaDisciplinas = nova;
    return nova;
}

Disciplina *buscarDisciplina(char nome[]) {
    Disciplina *temp = listaDisciplinas;
    while (temp != NULL) {
        if (strcmp(temp->nome, nome) == 0) return temp;
        temp = temp->prox;
    }
    return NULL;
}

void adicionarAluno(char nome[], int matricula) {
    Aluno *novo = (Aluno *)malloc(sizeof(Aluno));
    strcpy(novo->nome, nome);
    novo->matricula = matricula;
    novo->disciplinas = NULL;
    novo->prox = listaAlunos;
    listaAlunos = novo;
}

void matricularAluno(int matricula, char nomeDisciplina[]) {
    Aluno *aluno = listaAlunos;
    while (aluno != NULL && aluno->matricula != matricula)
        aluno = aluno->prox;

    if (aluno == NULL) {
        printf("Aluno nao encontrado!\n");
        return;
    }

    Disciplina *disciplina = buscarDisciplina(nomeDisciplina);
    if (disciplina == NULL) {
        printf("Disciplina nao encontrada!\n");
        return;
    }

    if (disciplina->qtdAlunos >= MAX_ALUNOS_POR_DISCIPLINA) {
        printf("Turma cheia! Nao foi possivel matricular.\n");
        return;
    }

    DisciplinaAluno *nova = (DisciplinaAluno *)malloc(sizeof(DisciplinaAluno));
    nova->disciplina = disciplina;
    nova->prox = aluno->disciplinas;
    aluno->disciplinas = nova;

    disciplina->qtdAlunos++;
}

void buscarAlunosPorDisciplina(char nomeDisciplina[]) {
    Disciplina *disciplina = buscarDisciplina(nomeDisciplina);
    if (!disciplina) {
        printf("Disciplina nao encontrada!\n");
        return;
    }

    printf("Alunos matriculados em %s:\n", nomeDisciplina);
    Aluno *temp = listaAlunos;
    while (temp) {
        DisciplinaAluno *da = temp->disciplinas;
        while (da) {
            if (strcmp(da->disciplina->nome, nomeDisciplina) == 0) {
                printf(" - %s (Matricula: %d)\n", temp->nome, temp->matricula);
                break;
            }
            da = da->prox;
        }
        temp = temp->prox;
    }
}

void imprimirAluno(Aluno *aluno) {
    printf("Aluno: %s | Matricula: %d\n", aluno->nome, aluno->matricula);
    printf("Disciplinas:\n");
    DisciplinaAluno *da = aluno->disciplinas;
    while (da) {
        printf(" - %s (%s) | Docente: %s\n", da->disciplina->nome, da->disciplina->codigo, da->disciplina->docente);
        da = da->prox;
    }
    printf("\n");
}

void imprimirTodosAlunos() {
    Aluno *temp = listaAlunos;
    while (temp) {
        imprimirAluno(temp);
        temp = temp->prox;
    }
}

void buscarAlunoPorNome(char nome[]) {
    Aluno *temp = listaAlunos;
    while (temp) {
        if (strcmp(temp->nome, nome) == 0) {
            imprimirAluno(temp);
            return;
        }
        temp = temp->prox;
    }
    printf("Aluno nao encontrado.\n");
}

void buscarAlunoPorMatricula(int matricula) {
    Aluno *temp = listaAlunos;
    while (temp) {
        if (temp->matricula == matricula) {
            imprimirAluno(temp);
            return;
        }
        temp = temp->prox;
    }
    printf("Aluno nao encontrado.\n");
}

int main() {
    // Criar disciplinas
    criarDisciplina("Calculo", "MAT101", "Prof. João");
    criarDisciplina("Estrutura de Dados", "INF202", "Profa. Maria");

    adicionarAluno("Rayssa", 101);
    adicionarAluno("Carlos", 102);
    adicionarAluno("Ana", 103);

    matricularAluno(101, "Calculo");
    matricularAluno(101, "Estrutura de Dados");
    matricularAluno(102, "Calculo");
    matricularAluno(103, "Calculo");

    printf("\n--- Buscar Alunos em Calculo ---\n");
    buscarAlunosPorDisciplina("Calculo");

    printf("\n--- Todos os Alunos ---\n");
    imprimirTodosAlunos();

    printf("\n--- Buscar por Aluno (matrícula 101) ---\n");
    buscarAlunoPorMatricula(101);

    return 0;
}
