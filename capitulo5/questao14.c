#include <stdio.h>

int somaDigitos(int n);

int main(void){
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o numero deve ser positivo!\n");
        return 1;
    }

    printf("Soma dos digitos de %d = %d\n", n, somaDigitos(n));
    return 0;
}

int somaDigitos(int n){
    if (n < 10) {
        return n;
    }
    return (n % 10) + somaDigitos(n / 10);
}
