#questão 1
a. O valor será 2
b. Pois o valor inserido é float, mas o tipo int não aceita números decimais, apenas inteiros. Portanto ele é "arredondado" para armazenar apenas o inteiro.
c. Ele declara a variável como float ou double, que recebem o número decimal com precisão.

#questao 2
a. Falta de padronização da <conio.h> que não faz parte do padrão ANSI/ISO C. Ela é uma biblioteca específica de compiladores legados para MS-DOS e Windows. Os sistemas operacionais como Linux e macOS não possuem essa biblioteca por padrão.

b. Funções equivalentes são stdin e stdout

Entrada de Caractere:

getchar(): Lê um único caractere da entrada padrão (stdin).

fgetc(stdin): Equivalente a getchar(), mas permite especificar o stream (neste caso, stdin).

Saída de Caractere:

putchar(c): Escreve um único caractere na saída padrão (stdout).

fputc(c, stdout): Equivalente a putchar(), direcionando o caractere explicitamente para o stream desejado.

Diferença de comportamento: As funções da <stdio.h> são buffered (com buffer de linha). Isso significa que a leitura só é processada pelo programa após o usuário pressionar [ENTER], diferente do comportamento unbuffered do getch().

c) Código em C Padrão para Leitura Robusta de Caractere
Ao ler caracteres com scanf ou getchar(), a tecla [ENTER] pressionada em entradas anteriores deixa um caractere de nova linha ('\n') residual no buffer do teclado, o que pode fazer com que leituras subsequentes sejam ignoradas.