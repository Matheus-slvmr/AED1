#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /*
        Aula 35 - Acentuação e a tabela ascii. -128 a 127
        include <locale.h>
        1ª = setlocale(LC_ALL, NULL); // padrão da linguagem C
        2ª = setlocale(LC_ALL, ""); // padrão do sistema operacional
        3ª = setlocale(LC_ALL, "Portuguese"); // português brasileiro
    */

    setlocale(LC_ALL, "Portuguese");

    printf("\n\tCoração, paixão, alaúde...\n");
    int i;
    for(i = 0; i <= 256; i++){
        printf("%c, ", i);
    }
    printf("\n\n");

    return 0;
}
