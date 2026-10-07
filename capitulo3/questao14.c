#include <stdio.h>

int main() {
    long long int soma_quadrados = 0;

    for (int i = 1; i <= 100; i++) {
        long long int quadrado = (long long int)i * i;
        printf("%d -> %lld\n", i, quadrado);
        soma_quadrados += quadrado;
    }

    printf("\nSoma total dos quadrados: %lld\n", soma_quadrados);

    return 0;
}