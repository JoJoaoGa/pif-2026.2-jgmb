#include <stdio.h>

int main(void){
    int a, b, c;

    printf("Digite os tres angulos internos (inteiros): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180) {
        printf("Os angulos nao formam um triângulo (a soma deve ser 180).\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Triangulo Retangulo\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triangulo Obtusangulo\n");
    } else {
        printf("Triangulo Acutangulo\n");
    }
    return 0;
}
