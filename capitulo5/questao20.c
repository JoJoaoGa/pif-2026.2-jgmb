#include <stdio.h>

int ePrimo(int n);

int main(void){
    int n, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (ePrimo(n)) {
        printf("O numero %d e primo.\n", n);
    } else {
        printf("O numero %d nao e primo.\n", n);
    }

    printf("Primos de 1 ate 50:\n");
    for (i = 1; i <= 50; i++) {
        if (ePrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

int ePrimo(int n){
    int i;

    if (n < 2) {
        return 0;
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
