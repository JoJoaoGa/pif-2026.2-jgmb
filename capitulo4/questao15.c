#include <stdio.h>

int main(void){
    int idade, tempo;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de serviço em anos: ");
    scanf("%d", &tempo);

    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)) {
        printf("O trabalhador pode se aposentar.\n");
    } else {
        printf("O trabalhador nao pode se aposentar.\n");
    }
    return 0;
}
