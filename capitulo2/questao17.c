#include <stdio.h>

#define PI 3.141593

int main() {
    double raio;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);
    
    double area = PI * raio * raio;
    double circunferencia = 2 * PI * raio;
    
    printf("Area: %.4f\n", area);
    printf("Circunferencia: %.4f\n", circunferencia);
    return 0;
}