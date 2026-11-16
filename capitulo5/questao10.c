#include <stdio.h>

#define PI 3.14159f

float area(float r);

int main(void){
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    if (raio < 0) {
        printf("Erro: o raio nao pode ser negativo!\n");
        return 1;
    }

    printf("Area da esfera de raio %.2f = %.2f\n", raio, area(raio));
    return 0;
}

float area(float r){
    return 4 * PI * r * r;
}
