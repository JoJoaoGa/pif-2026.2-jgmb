/* questao3.c 
Este programa produz a quantidade de resultados aleatórios desejados entre 1 e 20 */
#include <stdio.h> /* Para printf() e scanf()*/
#include <stdlib.h>/* Para rand() */

int main(){
    int dados;
    int i;

    printf("Escolha quantos dados de 20 (d20) deseja jogar:\n");
    scanf("%d", &dados);

    printf("Gerando %d valores aleatórios", dados);

    for (i = 0; i < dados; i++){
        /* gerando valores aleatórios entre 1 e 20 */
    printf("%d ", rand() % 20);
    
    return 0;
    }
}