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

void contagemCrescente(int n){
    if (n == 0) {
        return;
    }
    contagemCrescente(n - 1);
    printf("%d\n", n);
}
