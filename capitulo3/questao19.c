#include <stdio.h>

int main() {
    int N;

    printf("Digite o numero do termo desejado (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, informe um numero inteiro positivo maior que zero.\n");
        return 1;
    }

    long long int t1 = 1, t2 = 1, proximo;

    printf("\nSequencia de Fibonacci ate o %dº termo:\n", N);

    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%lld", t1);
        } else if (i == 2) {
            printf(", %lld", t2);
        } else {
            proximo = t1 + t2;
            printf(", %lld", proximo);
            t1 = t2;
            t2 = proximo;
        }
    }

    long long int termo_N = (N == 1) ? 1 : t2;
    printf("\n\nO %dº termo da sequencia de Fibonacci e: %lld\n", N, termo_N);

    return 0;
}