#include <stdio.h>

int main(){
    int segundos, horas, minutos, segundos_final;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos_final = segundos % 60;

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, segundos_final);

    return 0;
}