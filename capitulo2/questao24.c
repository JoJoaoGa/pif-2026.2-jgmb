#include <stdio.h>

#define CONVERSAO 3.6

int main() {
    double kmh;
    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &kmh);
    
    double ms = kmh / CONVERSAO;
    
    printf("Velocidade correspondente: %.2f m/s\n", ms);
    return 0;
}