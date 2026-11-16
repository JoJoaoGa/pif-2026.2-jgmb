#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main(void){
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o numero deve ser positivo!\n");
        return 1;
    }

    printf("Versao 1 (n ate 1):\n");
    contagem(n);

    printf("Versao 2 (1 ate n):\n");
    contagemCrescente(n);
    printf("Fogo!\n");
    return 0;
}

void contagem(int n){
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}