#include <stdio.h>

int main(){
    int num1, num2, num3;
    double media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    media = (double)(num1 + num2 + num3) / 3.0;

    printf("A media aritmetica dos valores e: %.2f\n", media);

    return 0;
}