#include <stdio.h>

int main() {
    int num;
    int encontrou = 0;

    printf("Digite um numero inteiro positivo (num): ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Por favor, informe um numero maior que zero.\n");
        return 1;
    }

    printf("\nMultiplos de 3 e 5 entre 1 e %d:\n", num);

    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero no intervalo satisfaz a condicao.");
    }

    printf("\n");

    return 0;
}