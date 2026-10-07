#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Informe uma nota (entre 0.0 e 10.0): ");
        scanf("%f", &nota);

        if (nota < 0.0f || nota > 10.0f) {
            printf("Valor invalido! A nota deve estar no intervalo de 0.0 a 10.0.\n\n");
        }
    } while (nota < 0.0f || nota > 10.0f);

    printf("Nota registrada com sucesso!\n");

    return 0;
}