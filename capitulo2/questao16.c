#include <stdio.h>
#include <math.h>

int main() {
    double degrau_cm, altura_desejada_m;
    printf("Digite a altura do degrau (cm): ");
    scanf("%lf", &degrau_cm);
    printf("Digite a altura total desejada (m): ");
    scanf("%lf", &altura_desejada_m);
    
    double altura_desejada_cm = altura_desejada_m * 100.0;
    
    double total_degraus = ceil(altura_desejada_cm / degrau_cm);
    
    printf("Numero minimo de degraus: %.0f\n", total_degraus);
    return 0;
}