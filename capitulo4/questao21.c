#include <stdio.h>

int main(void){
    float salario, percentual, aumento;
    int cargo;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);
    printf("Digite seu o numero do seu cargo (1 = Tecnico | 2 = Gerente | 3 = Demais): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            percentual = (salario <= 3000) ? 15 : 10;
            break;
        case 2:
            percentual = (salario <= 5000) ? 10 : 5;
            break;
        case 3:
            percentual = 8;
            break;
        default:
            printf("Erro: código de cargo invalido\n");
            return 1;
    }

    aumento = salario * percentual / 100;
    printf("Aumento (%.0f%%): R$ %.2f\n", percentual, aumento);
    printf("Novo salario: R$ %.2f\n", salario + aumento);
    return 0;
}
