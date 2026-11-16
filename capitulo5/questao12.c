#include <stdio.h>

void exibeMenu(void);

int main(void){
    int opcao;

    exibeMenu();
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: printf("Opcao escolhida: Cadastrar\n"); break;
        case 2: printf("Opcao escolhida: Listar\n"); break;
        case 3: printf("Opcao escolhida: Remover\n"); break;
        case 0: printf("Saindo do programa...\n"); break;
        default: printf("Erro: Opcao Invalida!\n");
    }
    return 0;
}

void exibeMenu(void){
    printf("=== MENU ===\n");
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
}
