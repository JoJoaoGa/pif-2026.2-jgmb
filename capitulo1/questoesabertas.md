#Questão 5  
Falta da biblioteca <stdio.h> para a função printf, e a <stdlib.h> para a função system().
De acordo com os padrões modernos de C, é obrigatório declarar o tipo do retorno, usando "int" em "main()". E no mesmo sentido está faltando o "return 0;" no final, que depende da declaração do tipo da função, e mostraria que a função terminou sem erros.

#Questão 7  
a. printf("\n\tBom dia! Shirley.");
    Bom dia! Shirley.

b. printf("Você já tomou café? \n");
Você já tomou café?


c. printf("\n\nA solução não existe!\nNão insista.");


A solução não existe!
Não insista.

d. printf("Duas\tlinhas\tde\tsaída\nou\tuma?");
Duas	linhas	de	saída
ou	uma?

e. printf("%s\n%s\n%s\n", "um", "dois", "três");
um
dois
três


#Questão 8  
O código imprime uma mensagem na tela.
Pula uma linha, faz uma tabulação horizontal (tab), escreve "Primeiro programa", e aguarda o pressionar de uma tecla para encerrar
Saída: "Primeiro programa"Pressione qualquer tecla para continuar. . .

#Questão 9  
Saída: "Primeiro programa|Pressione qualquer tecla para continuar. . .
Os compiladores C não armazenam o caractere como texto no código; ele substitui imediatamente pelo seu valor ASCII numérico do tipo inteiro
\n significa quebra de linha, valor inteiro 10
\t é uma tabulação horizontal, ou tab, valor inteiro 9
\" aspas duplas como caractere, valor inteiro 34
Quando o printf lê a string e encontra o modificador %c, ela pega o valor inteiro correspondente e o traduz para o caractere equivalente em ASCII quando envia a saída para o terminal.

#Questão 10  
A Linguagem C é conhecida por ser sensível a caixa alta e baixa (case sensitive). Explique
o significado prático desse conceito. Identificadores como 'peso', 'Peso' e 'PESO' representam a mesma
variável na memória? Assinale a alternativa correta e complemente com sua justificativa:

b. Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).
No case sensitive o compilador irá fazer distinção das letras maiúsculas e minúsculas. Na tabela ASCII, por exemplo, o caractere 'A' ocupa o valor 65, e o 'a' ocupa o valor 95.
'peso', 'Peso' e 'PESO' Não vão representar a mesma variável na memória.

#Questão 11
| Constante | Classificação (Tipo de Constante) | Tipo Base em C |
| :--- | :--- | :--- |
| `\r` | Sequência de escape | `char` |
| `2130` | Constante inteira decimal | `int` |
| `-123` | Constante inteira decimal | `int` |
| `33.28` | Constante de ponto flutuante | `float` |
| `0XFA` | Constante inteira hexadecimal | `int` |
| `0101` | Constante inteira octal | `int` |
| `2.0e30` | Constante de ponto flutuante | `float` |
| `\xDC` | Sequência de escape | `char` |
| `'\"'` | Constante de caractere | `int` |
| `'\\'` | Constante de caractere | `int` |
| `'F'` | Constante de caractere | `int` |
| `0` | Constante inteira decimal | `int` |
| `'\0'` | Constante de caractere | `int` |
| `"F"` | Constante de string | `char[]` (ou `char *`) |
| `-4567.89` | Constante de ponto flutuante | `float` |

#Questão 12
| Instrução | Status | Justificativa Teórica |
| :--- | :--- | :--- |
| `a. int a;` | Correto | |
| `b. float b;` | Correto | |
| `c. double float c;` | Incorreto | Declarou dois tipos exclusivos para uma mesma variável. |
| `d. unsigned char d;` | Correto | |
| `e. unsigned e;` | Correto | |
| `f. long float f;` | Incorreto | O modificador `long` não se aplica ao `float`. O correto seria `double` ou `long double`. |
| `g. long g;` | Correto | |
| `h. long double h;` | Correto | |

#Questão 13  
No desenvolvimento de programas em C, o que são conceitualmente os arquivos de inclusão (headers com extensão .h)?
c. São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e
tipos.

#Questão 14  
Qual é o papel e o objetivo principal do programador ao incluir arquivos de cabeçalho (como <stdio.h>)?
a. Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o
código-fonte.

#Questão 15  
A diretiva #include, amplamente utilizada no topo dos arquivos C, é classificada como:
c. Uma diretiva especial para o pré-processador C, executada antes da compilação.

#Questão 16  
As diretivas de pré-processador em C (todas iniciadas com o caractere #) são lidas e
interpretadas pelo:
c. Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).

#Questão 17  
Dentre as instruções de escrita abaixo, quais estão sintaticamente corretas? O que essas
variações demonstram sobre a flexibilidade de espaçamento e formatação do compilador C?
a. printf ( "Primeiro programa" ); Correta
b. printf( "Primeiro programa" ); Correta
c. printf("Primeiro programa"); Correta
d. printf "Primeiro programa" ; Incorreta
Para o compilador, espaços entre a função (printf), os operadores/delimitadores ()"",; e os argumentos são tratados como um único separador ou completamente ignorados.
