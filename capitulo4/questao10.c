#include <stdio.h>

int main(void){
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0){
        printf("O numero e par.\n");
    } else {
        printf("O numero e impar.\n");
    }

    if (n > 0) {
        printf("O numero e positivo.\n");
    } else if (n < 0) {
        printf("O numero e negativo.\n");
    } else {
        printf("O numero e zero.\n");
    }
    return 0;
}
