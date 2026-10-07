#include <stdio.h>

int main() {
    int N;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, informe um numero inteiro positivo maior que zero.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisores++;
        }
    }

    printf("\nQuantidade de divisores encontrados: %d\n", divisores);

    if (divisores == 2) {
        printf("O numero %d E PRIMO!\n", N);
    } else {
        printf("O numero %d NAO E PRIMO.\n", N);
    }

    return 0;
}