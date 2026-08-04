#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
        Aula 27 - Como aumentar o espaço de memória para um inteiro com o operador long?
        %lld (long long decimal) ou %lli (long long integer)
    */
    long long int valor;
    long long int a, b, c;

    a = 2147483647 ;
    b = 1;
    c = a + b;

    printf("\ta = %lld\tb = %lld\tc = %lli\n", a, b, c);

    printf("\n\tTamanho: %d\n", sizeof valor);

    return 0;
}
