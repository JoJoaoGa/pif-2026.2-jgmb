#include <stdio.h>

#define PI 3.141593

int main() {
    double graus;
    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);
    
    double radianos = graus * (PI / 180.0);
    printf("Angulo em radianos: %.4f rad\n", radianos);
    return 0;
}