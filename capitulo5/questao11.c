#include <stdio.h>

int ehPar(int n);

int main(void){
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (ehPar(n)) {
        printf("O numero %d e par.\n", n);
    } else {
        printf("O numero %d e impar.\n", n);
    }
    return 0;
}

int ePar(int n){
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}
