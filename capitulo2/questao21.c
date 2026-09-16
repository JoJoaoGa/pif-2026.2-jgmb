#include <stdio.h>

int main() {
    char c;
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    
    /* O número exibido é código decimal correspondente do caractere na Tabela ASCII,
     * que armazena os símbolos como inteiros de 1 byte (0 a 127/255).*/
    printf("O caractere '%c' possui o codigo ASCII inteiramente igual a: %d\n", c, (int)c);
    return 0;
}