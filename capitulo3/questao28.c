#include <stdio.h>

int main() {
    int opcao;
    float salario, aumento, novo_salario, imposto, salario_liquido;

    do {
        printf("\n=== GERENCIAMENTO DE FOLHA DE PAGAMENTO ===\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n--- REAJUSTE SALARIAL ---\n");
                printf("Digite o salario atual (R$): ");
                scanf("%f", &salario);

                if (salario <= 0) {
                    printf("Invalido, informe um valor positivo.\n");
                    break;
                }

                if (salario <= 2000.00f) {
                    aumento = salario * 0.15f;
                    printf("Percentual de aumento: 15%%\n");
                } else {
                    aumento = salario * 0.10f;
                    printf("Percentual de aumento: 10%%\n");
                }

                novo_salario = salario + aumento;
                printf("Valor do aumento: R$ %.2f\n", aumento);
                printf("Novo salario: R$ %.2f\n", novo_salario);
                break;

            case 2:
                printf("\n--- RETENCAO DE IMPOSTO DE RENDA ---\n");
                printf("Digite o salario bruto: ");
                scanf("%f", &salario);

                if (salario <= 0) {
                    printf("Invalido, informe um valor positivo.\n");
                    break;
                }

                if (salario <= 3000.00f) {
                    imposto = salario * 0.08f;
                    printf("Desconto do Imposto de Renda: 8%%\n");
                } else {
                    imposto = salario * 0.15f;
                    printf("Desconto do Imposto de Renda: 15%%\n");
                }

                salario_liquido = salario - imposto;
                printf("Valor descontado de IR: R$ %.2f\n", imposto);
                printf("Salario liquido: R$ %.2f\n", salario_liquido);
                break;

            case 3:
                printf("\nPrograma encerrado com sucesso!\n");
                break;

            default:
                printf("\nOpcao invalida! Escolha uma das opcoes do menu (1 a 3).\n");
                break;
        }

    } while (opcao != 3);

    return 0;
}