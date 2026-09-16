#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    
    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);

    double divisao = (a != 0 && b != 0) ? ((double)a / b) : 0.0;
       /* O operador ternario evita divisao por zero, mostrando apenas o 0.0 caso ele insira 0 para a ou b */
    printf("Divisao real: %.2f\n", divisao);
    
    return 0;
}