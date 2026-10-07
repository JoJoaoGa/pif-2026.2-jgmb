#include <stdio.h>

int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("\nSequencia de numeros:\n");

    if (A <= B) {
        for (int i = A; i <= B; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = A; i >= B; i--) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}