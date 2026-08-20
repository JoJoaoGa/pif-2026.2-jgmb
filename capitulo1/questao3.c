/* questao3.c 
Este programa demonstra a declaração de 3 variáveis e a utilização delas no printf*/
#include <stdio.h> // Para printf()
#include <stdlib.h> // Para system()

int main(){ // Inicio da função
    int a=1, b=2, c=3; // Declaração de 3 inteiros e atribuições de valores
    printf("0s números são: %d, %d, %d\n", a, b, c); // chama a função printf()
    system("PAUSE"); // chama a função system()
    return 0; // Retorna 0 para finalizar a função com êxito
} // Fim da função