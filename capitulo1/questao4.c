/* Código original
#include <stdio.h>
#include <stdlib.h>; <--- não se utiliza ; para chamar as bibliotecas
int Main{}   <--- toda a função ficou fora do main, as chaves {} e parênteses () ficaram invertidos
(
printf( Existem %d semanas no ano.,52); <--- Faltou as aspas ""
cout << endl;   <--- utilizou variáveis sem declarar, com comandos de C++
system("PAUSE");
return 0;
)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Existem %d semanas no ano.", 52);
    system("PAUSE");
    return 0;
}