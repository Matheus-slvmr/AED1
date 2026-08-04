#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 26 - Somei dois números inteiros positivos e o resultado ficou negativo, por quê?
    int a, b, c;

    a = 2147483647 ;
    b = 1;
    c = a + b;

    printf("\n\ta = %d\tb = %d\tc = %d\n", a, b, c);

    return 0;
}
