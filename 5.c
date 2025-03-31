#include <stdio.h>
#include <stdlib.h>

void situacaoCivil() {
    int opcao;
    printf("Informe sua situação civil (1-Solteiro, 2-Casado, 3-Divorciado, 4-Viúvo): ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1: {
            int idade;
            printf("Informe sua idade: ");
            scanf("%d", &idade);
            printf("Idade informada: %d\n", idade);
            break;
        }
        case 2: {
            char sexo, conjuge[50];
            printf("Informe seu sexo (M/F): ");
            scanf(" %c", &sexo);
            printf("Informe o nome do cônjuge: ");
            scanf(" %49s", conjuge);
            printf("Sexo: %c, Cônjuge: %s\n", sexo, conjuge);
            break;
        }
        case 3: {
            int filhos, idade;
            printf("Informe a quantidade de filhos: ");
            scanf("%d", &filhos);
            if (filhos > 0) {
                printf("Idade do mais velho: ");
                scanf("%d", &idade);
            }
            printf("Filhos: %d, Idade do mais velho: %d\n", filhos, filhos > 0 ? idade : 0);
            break;
        }
        case 4: {
            char cidade[50];
            float salario;
            printf("Informe a cidade onde vive: ");
            scanf(" %49s", cidade);
            printf("Informe seu salário atual: ");
            scanf("%f", &salario);
            printf("Cidade: %s, Salário: %.2f\n", cidade, salario);
            break;
        }
        default:
            printf("Opção inválida!\n");
    }
}