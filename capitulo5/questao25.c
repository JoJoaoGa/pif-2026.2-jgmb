#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main(void){
    int a, b;

    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Erro: os numeros devem ser positivos!\n");
        return 1;
    }

    printf("MDC de %d e %d = %d\n", a, b, mdc(a, b));
    simplifica(a, b);
    return 0;
}

int mdc(int a, int b){
    /* Caso base: quando b e 0, o MDC e a */
    if (b == 0) {
        return a;
    }
    /* Passo recursivo: Euclides, mdc(a, b) = mdc(b, a % b) */
    return mdc(b, a % b);
}

void simplifica(int num, int den){
    int d = mdc(num, den);

    printf("Fracao original: %d/%d\n", num, den);
    printf("Fracao simplificada: %d/%d\n", num / d, den / d);
}
