#include <stdio.h>

int main() {
    int valor;

    printf("Digite o valor do saque (R$): ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido! Por favor, informe um numero inteiro positivo.\n");
        return 1;
    }

    int original = valor;
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int total_cedulas = sizeof(cedulas) / sizeof(cedulas[0]);

    printf("\n--- DISTRIBUICAO DE CEDULAS PARA R$ %d ---\n", original);

    for (int i = 0; i < total_cedulas; i++) {
        int qtd = 0;

        while (valor >= cedulas[i]) {
            valor -= cedulas[i];
            qtd++;
        }

        if (qtd > 0) {
            printf("%d cedula(s) de R$ %d\n", qtd, cedulas[i]);
        }
    }

    if (valor > 0) {
        printf("\nAtencao: Valor residual de R$ %d nao pode ser fornecido com as cedulas disponiveis.\n", valor);
    }

    return 0;
}