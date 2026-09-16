#include <stdio.h>

int main() {
    double comprimento, largura, preco_metro;
    
    printf("Digite o comprimento do terreno (m): ");
    scanf("%lf", &comprimento);
    printf("Digite a largura do terreno (m): ");
    scanf("%lf", &largura);
    printf("Digite o preco por metro de arame (R$): ");
    scanf("%lf", &preco_metro);
    
    double perimetro = 2 * (comprimento + largura);
    double metros_totais = perimetro * 3;
    double custo_total = metros_totais * preco_metro;
    
    printf("Metros de arame necessarios: %.2f m\n", metros_totais);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);
    return 0;
}