#include <stdio.h>

#define PI 3.141593

int main() {
    double raio;
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);
    
    double area = 4.0 * PI * raio * raio;
    double volume = (4.0 / 3.0) * PI * raio * raio * raio;
    
    printf("Area da superficie: %.4f\n", area);
    printf("Volume: %.4f\n", volume);
    return 0;
}