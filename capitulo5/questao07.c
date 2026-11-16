#include <stdio.h>

int soma(int a, int b);

int main(void){
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Soma de %d + %d = %d\n", a, b, soma(a, b));
    return 0;
}

int soma(int a, int b){
    return a + b;
}
