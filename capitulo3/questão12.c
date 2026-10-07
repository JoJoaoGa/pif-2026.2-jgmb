#include <stdio.h>

int main() {
    printf("%10s | %15s | %10s\n", "Celsius", "Fahrenheit", "Kelvin");
    printf("-------------------------------------------\n");

    for (int c = 0; c <= 100; c += 5) {
        float fahrenheit = (9.0f * c) / 5.0f + 32.0f;
        float kelvin = c + 273.15f;

        printf("%10.2f | %15.2f | %10.2f\n", (float)c, fahrenheit, kelvin);
    }

    return 0;
}