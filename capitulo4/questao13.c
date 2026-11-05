#include <stdio.h>
#include <math.h>

int main(void){
    char op;
    double a, b;

    printf("=== CALCULADORA ===\n");
    printf("+ Soma\n- Subtracao\n* Multiplicacao\n/ Divisao\n^ Potenciacao\n");
    printf("Escolha a operacao: ");
    scanf(" %c", &op);

    printf("Digite os dois operandos: ");
    scanf("%lf %lf", &a, &b);

    switch (op){
        case '+': printf("%.2f + %.2f = %.2f\n", a, b, a + b); break;
        case '-': printf("%.2f - %.2f = %.2f\n", a, b, a - b); break;
        case '*': printf("%.2f * %.2f = %.2f\n", a, b, a * b); break;
        case '/':
            if (b == 0) {
                printf("divisao por zero nao pode\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
        case '^': printf("%.2f ^ %.2f = %.2f\n", a, b, pow(a, b)); break;
        default: printf("operação inválida\n");
    }
    return 0;
}
