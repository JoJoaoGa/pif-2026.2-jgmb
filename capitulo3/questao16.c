#include <stdio.h>

int main() {
    const int SENHA_SECRETA = 2026;
    const int MAX_TENTATIVAS = 3;
    int senha;
    int tentativas = 0;
    int acesso_concedido = 0;

    while (tentativas < MAX_TENTATIVAS) {
        printf("Informe a senha de acesso: ");
        scanf("%d", &senha);
        tentativas++;

        if (senha == SENHA_SECRETA) {
            acesso_concedido = 1;
            break;
        } else if (tentativas < MAX_TENTATIVAS) {
            printf("Senha incorreta! Tentativas restantes: %d\n\n", MAX_TENTATIVAS - tentativas);
        }
    }

    if (acesso_concedido) {
        printf("\nAcesso Concedido!\nTentativas utilizadas: %d\n", tentativas);
    } else {
        printf("\nConta Bloqueada por Segurança!\n");
    }

    return 0;
}