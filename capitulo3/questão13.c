#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Erro: Fatorial nao e definido para numeros negativos.\n");
    } else {
        long long int fatorial = 1;

        for (int i = 1; i <= N; i++) {
            fatorial *= i;
        }

        printf("%d! = %lld\n", N, fatorial);
    }

    return 0;
}