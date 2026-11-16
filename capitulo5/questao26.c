#include <stdio.h>

long fibonacci(int n);

int main(void){
    int n, i;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: a quantidade deve ser positiva!\n");
        return 1;
    }

    printf("Sequencia de Fibonacci:\n");
    for (i = 0; i < n; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

/* A versao recursiva fica lenta para n grande porque recalcula os mesmos
   termos varias vezes: fibonacci(n) chama fibonacci(n-1) e fibonacci(n-2),
   e cada uma delas se ramifica novamente. O numero de chamadas cresce de
   forma exponencial (aprox. 2^n), enquanto uma versao iterativa faria
   apenas n passos. */
long fibonacci(int n){
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
