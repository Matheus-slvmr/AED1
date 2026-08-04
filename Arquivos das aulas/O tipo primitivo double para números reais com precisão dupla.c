#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 29 - O tipo primitivo double para números reais com precisão dupla - __mingw_printf
    long double x = 3.141519;

    printf("\tValor de x: %lf\n", x);
    __mingw_printf("\n\tValor de x: %Le\n", x);
    printf("\tTamanho de um double: %d\n", sizeof x);

    return 0;
}
