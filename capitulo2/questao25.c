#include <stdio.h>

int main() {
    double salario_base;
    printf("Digite o salario-base do funcionario: ");
    scanf("%lf", &salario_base);

    /* Salario Liquido = Salario Base + (Salario Base * 0.05) - (Salario Base * 0.07)
     * Fator comum: Salario Base * (1 + 0.05 - 0.07) = Salario Base * 0.98 */
    
    double gratificacao = salario_base * 0.05;
    double imposto = salario_base * 0.07;
    double salario_liquido = salario_base + gratificacao - imposto;
    
    printf("Salario Liquido a receber: R$ %.2f\n", salario_liquido);
    return 0;
}