#include <stdio.h>

long potencia(int base, int expoente);

int main(void){
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente (inteiro nao negativo): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente nao pode ser negativo!\n");
        return 1;
    }

    printf("%d ^ %d = %ld\n", base, expoente, potencia(base, expoente));
    return 0;
}

long potencia(int base, int expoente){
    /* Caso base: qualquer numero elevado a 0 e igual a 1 */
    if (expoente == 0) {
        return 1;
    }
    /* Passo recursivo: base^expoente = base * base^(expoente - 1) */
    return base * potencia(base, expoente - 1);
}
