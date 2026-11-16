#include <stdio.h>
#include "areas.h"

int main(void){
    double raio, baseR, altR, baseT, altT;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);
    printf("Digite a base e a altura do retangulo: ");
    scanf("%lf %lf", &baseR, &altR);
    printf("Digite a base e a altura do triangulo: ");
    scanf("%lf %lf", &baseT, &altT);

    printf("Area do circulo = %.2f\n", A_CIRC(raio));
    printf("Area do retangulo = %.2f\n", A_RET(baseR, altR));
    printf("Area do triangulo = %.2f\n", A_TRI(baseT, altT));
    return 0;
}
