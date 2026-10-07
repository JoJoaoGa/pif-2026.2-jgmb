#include <stdio.h>

int main() {
    float nota;
    float soma = 0.0f;
    float maior = 0.0f;
    float menor = 0.0f;
    int total = 0;

    while (1) {
        printf("Digite a nota do aluno (0.0 a 10.0 ou -1.0 para sair): ");
        scanf("%f", &nota);

        if (nota == -1.0f) {
            break;
        }

        if (nota < 0.0f || nota > 10.0f) {
            printf("Nota invalida! Digite um valor entre 0.0 e 10.0 (ou -1.0 para sair).\n\n");
            continue;
        }

        if (total == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }

        soma += nota;
        total++;
    }

    printf("\n--- RESULTADOS DA TURMA ---\n");
    if (total > 0) {
        printf("a) Total de alunos avaliados: %d\n", total);
        printf("b) Maior nota da turma: %.2f\n", maior);
        printf("c) Menor nota da turma: %.2f\n", menor);
        printf("d) Media geral da turma: %.2f\n", soma / total);
    } else {
        printf("Nenhum aluno foi avaliado.\n");
    }

    return 0;
}