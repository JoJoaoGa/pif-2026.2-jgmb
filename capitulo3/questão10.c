#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        printf("%d\t", i * 3);

        // A cada 10 numeros, quebra a linha
        if (i % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}