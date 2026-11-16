#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void){
    int n;
    long fi, fr;

    printf("Digite um inteiro nao negativo (ate 12): ");
    scanf("%d", &n);

    if (n < 0 || n > 12) {
        printf("Erro: o numero deve estar entre 0 e 12!\n");
        return 1;
    }

    fi = fatorialIterativo(n);
    fr = fatorialRecursivo(n);

    printf("Fatorial iterativo de %d = %ld\n", n, fi);
    printf("Fatorial recursivo de %d = %ld\n", n, fr);

    if (fi == fr) {
        printf("Os resultados coincidem.\n");
    } else {
        printf("Os resultados sao diferentes.\n");
    }
    return 0;
}

long fatorialIterativo(int n){
    long resultado = 1;
    int i;

    for (i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

long fatorialRecursivo(int n){
    if (n <= 1) {
        return 1;
    }
    return n * fatorialRecursivo(n - 1);
}
