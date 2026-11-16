#include <stdio.h>

float celsius(float fahr);

int main(void){
    float f;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    printf("%.2f F = %.2f C\n", f, celsius(f));
    return 0;
}

float celsius(float fahr){
    return (fahr - 32) * 5 / 9;
}
