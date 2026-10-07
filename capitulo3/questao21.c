#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    char secreta = (rand() % 26) + 'a';
    char palpite;
    int tentativas = 0;

    printf("=== JOGO DA ADIVINHACAO DE LETRAS ===\n");
    printf("Tente adivinhar a letra secreta entre 'a' e 'z'!\n\n");

    do {
        printf("Digite o seu palpite: ");
        scanf(" %c", &palpite);

        tentativas++;

        if (palpite < secreta) {
            printf("Errou! A letra secreta vem DEPOIS de '%c' no alfabeto.\n\n", palpite);
        } else if (palpite > secreta) {
            printf("Errou! A letra secreta vem ANTES de '%c' no alfabeto.\n\n", palpite);
        } else {
            printf("\nParabens! Voce acertou a letra secreta '%c'!\n", secreta);
            printf("Total de tentativas utilizadas: %d\n", tentativas);
        }
    } while (palpite != secreta);

    return 0;
}