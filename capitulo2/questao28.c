#include <stdio.h>

int main() {
    double horas_normais, horas_extras;
    
    printf("Digite o total de horas normais no ano: ");
    scanf("%lf", &horas_normais);
    printf("Digite o total de horas extras no ano: ");
    scanf("%lf", &horas_extras);
    
    double salario_bruto = (horas_normais * 10.00) + (horas_extras * 15.00);
    
    double excedente = salario_bruto - 12000.00;
    double imposto = (excedente > 0) ? (excedente * 0.10) : 0.0;
    
    printf("Salario Anual Bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto Devido: R$ %.2f\n", imposto);
    printf("Salario Liquido Anual: R$ %.2f\n", salario_bruto - imposto);
    
    return 0;
}