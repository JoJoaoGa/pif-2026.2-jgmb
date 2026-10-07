#include <stdio.h>

int main() {
    int A, B;

    do {
        printf("Digite o valor de A (inteiro positivo): ");
        scanf("%d", &A);
        printf("Digite o valor de B (inteiro positivo, maior que A): ");
        scanf("%d", &B);

        if (A <= 0 || B <= 0 || A >= B) {
            printf("Invalido, certifique-se de que A > 0, B > 0 e A < B.\n\n");
        }
    } while (A <= 0 || B <= 0 || A >= B);

    long long int soma_primos = 0;
    int total_primos = 0;

    printf("\nNumeros primos no intervalo [%d, %d]:\n", A, B);

    for (int num = A; num <= B; num++) {
        if (num < 2) {
            continue;
        }

        int e_primo = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                e_primo = 0;
                break;
            }
        }

        if (e_primo) {
            printf("%d ", num);
            soma_primos += num;
            total_primos++;
        }
    }

    if (total_primos == 0) {
        printf("Nenhum numero primo foi encontrado neste intervalo.");
    }

    printf("\n\nSoma total dos numeros primos: %lld\n", soma_primos);

    return 0;
}