#include <stdio.h>

/* Para ativar a depuracao, descomente a linha abaixo (ou compile com -DDEBUG):
#define DEBUG
*/

int somaAteN(int n);

int main(void){
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o numero deve ser positivo!\n");
        return 1;
    }

    printf("Soma de 1 ate %d = %d\n", n, somaAteN(n));
    return 0;
}

int somaAteN(int n){
    int soma = 0, i;

    for (i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}

/* Diferenca de comportamento:
   - Sem DEBUG, o bloco dentro de #ifdef nem
     chega a ser compilado; o programa imprime apenas o resultado final.
   - Com DEBUG, o printf passa a fazer parte do codigo e o valor parcial da soma
     e impresso a cada iteracao do laco, alem do resultado final. */