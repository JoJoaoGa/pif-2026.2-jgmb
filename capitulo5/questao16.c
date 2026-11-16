#include <stdio.h>

int eBissexto(int ano);

int main(void){
    int ano;

    printf("Digite um ano (inteiro positivo): ");
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("Erro: o ano deve ser um inteiro positivo!\n");
    } else if (eBissexto(ano)) {
        printf("O ano %d e bissexto.\n", ano);
    } else {
        printf("O ano %d nao e bissexto.\n", ano);
    }
    return 0;
}

int eBissexto(int ano){
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }
    return 0;
}
