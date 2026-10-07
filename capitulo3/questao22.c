#include <stdio.h>

int main() {
    int N;
    int numero = 1;

    printf("Digite o numero de linhas (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, informe um numero inteiro positivo.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", numero);
            if (j < i) {
                printf(" ");
            }
            numero++;
        }
        printf("\n");
    }

    return 0;
}