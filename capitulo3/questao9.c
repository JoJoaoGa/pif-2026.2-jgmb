#include <stdio.h>

int main() {
    float valor;
    float soma = 0.0f;
    int quantidade = 0;

    do {
        printf("Digite um valor real positivo (ou um valor negativo para sair): ");
        scanf("%f", &valor);

        if (valor >= 0.0f) {
            soma += valor;
            quantidade++;
        }
    } while (valor >= 0.0f);

    printf("\n--- RESULTADOS ---\n");
    printf("Quantidade de valores validos digitados: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);

    if (quantidade > 0) {
        printf("Media aritmetica: %.2f\n", soma / quantidade);
    } else {
        printf("Media aritmetica: Nao aplicavel (nenhum valor valido foi digitado).\n");
    }

    return 0;
}