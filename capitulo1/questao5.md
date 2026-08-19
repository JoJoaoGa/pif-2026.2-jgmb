Falta da biblioteca <stdio.h> para a função printf, e a <stdlib.h> para a função system()

De acordo com os padrões modernos de C, é obrigatório declarar o tipo do retorno, usando "int" em "main()". E no mesmo sentido está faltando o "return 0;" no final, que depende da declaração do tipo da função, e mostraria que a função terminou sem erros.