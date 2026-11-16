#include <stdio.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main(void){
    float lab, semestral, final, media;

    printf("Nota do Trabalho de Laboratorio, peso 2: ");
    scanf("%f", &lab);
    printf("Nota da Avaliacao Semestral, peso 3: ");
    scanf("%f", &semestral);
    printf("Nota do Exame Final, peso 5: ");
    scanf("%f", &final);

    media = mediaPonderada(lab, semestral, final);
    printf("Media ponderada: %.2f\n", media);
    exibeSituacao(media);
    return 0;
}

float mediaPonderada(float n1, float n2, float n3){
    return (n1 * 2 + n2 * 3 + n3 * 5) / 10;
}

void exibeSituacao(float media){
    if (media >= 5.0) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 3.0) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }
}
