#include <stdio.h>

int main() {
    printf("%-8s | %-11s | %s\n", "Decimal", "Hexadecimal", "Caractere");
    printf("----------------------------------\n");

    for (int i = 32; i <= 126; i++) {
        printf("%-8d | %-11X | %c\n", i, i, (char)i);
    }

    return 0;
}