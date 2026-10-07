#include <stdio.h>

int main() {
    int numero, original;
    int invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, informe um numero inteiro positivo (maior que zero).\n");
        return 1;
    }

    original = numero;

    while (numero > 0) {
        int digito = numero % 10;
        invertido = (invertido * 10) + digito;
        numero = numero / 10;
    }

    printf("Numero original: %d\n", original);
    printf("Numero invertido: %d\n", invertido);

    return 0;
}