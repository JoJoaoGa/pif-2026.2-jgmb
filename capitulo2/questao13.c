#include <stdio.h>

int main() {
    double lado, base, altura;
    
    printf("Digite o lado do quadrado: ");
    scanf("%lf", &lado);
    printf("Digite a base e a altura (separados por espaco): ");
    scanf("%lf %lf", &base, &altura);
    
    double area_quadrado = lado * lado;
    double area_retangulo = base * altura;
    double area_triangulo = (base * altura) / 2.0;
    
    printf("\nArea do Quadrado: %.2f\n", area_quadrado);
    printf("Area do Retangulo: %.2f\n", area_retangulo);
    printf("Area do Triangulo Retangulo: %.2f\n", area_triangulo);
    return 0;
}