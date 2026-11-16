#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main(void){
    printf("Macro DOBRO(2+3) = %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3) = %d\n", dobro(2+3));

    /* a macro faz apenas substituicao de texto, sem avaliar
       o argumento. DOBRO(2+3) vira 2+3*2, e como * tem precedencia sobre +,
       o resultado e 2+6 = 8. Ja a funcao recebe o valor ja calculado (5) e
       retorna 5*2 = 10. */

    /* Correcao: parenteses de protecao no argumento e na expressao inteira */
#undef DOBRO
#define DOBRO(x) ((x) * 2)

    printf("Macro corrigida DOBRO(2+3) = %d\n", DOBRO(2+3));
    return 0;
}

int dobro(int x){
    return x * 2;
}
