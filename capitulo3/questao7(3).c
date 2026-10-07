#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 100);
    return 0;
}

/*
A estrutura mais adequada é o for.

Porque o limite já é determinados o problema possui um número exato de repetições. O for também é mais compacto e organizado para este código
*/