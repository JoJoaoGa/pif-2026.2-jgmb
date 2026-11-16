#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(void){
    char op;
    float a, b;

    printf("=== CALCULADORA ===\n");
    printf("+ Soma\n- Subtracao\n* Multiplicacao\n/ Divisao\n");
    printf("Escolha a operacao: ");
    scanf(" %c", &op);

    printf("Digite os dois operandos: ");
    scanf("%f %f", &a, &b);

    switch (op){
        case '+': printf("%.2f + %.2f = %.2f\n", a, b, soma(a, b)); break;
        case '-': printf("%.2f - %.2f = %.2f\n", a, b, subtrai(a, b)); break;
        case '*': printf("%.2f * %.2f = %.2f\n", a, b, multiplica(a, b)); break;
        case '/':
            if (b == 0) {
                printf("divisao por zero nao pode\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, divide(a, b));
            }
            break;
        default: printf("operacao invalida\n");
    }
    return 0;
}

float soma(float a, float b){
    return a + b;
}

float subtrai(float a, float b){
    return a - b;
}

float multiplica(float a, float b){
    return a * b;
}

float divide(float a, float b){
    return a / b;
}
