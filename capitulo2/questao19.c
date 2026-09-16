#include <stdio.h>

int main() {
    int dias_trabalhados;
    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);
    
    double valor_bruto = dias_trabalhados * 30.0;
    double valor_liquido = valor_bruto * (1.0 - 0.08);
    
    printf("Valor Bruto: R$ %.2f\n", valor_bruto);
    printf("Valor Liquido: R$ %.2f\n", valor_liquido);
    return 0;
}