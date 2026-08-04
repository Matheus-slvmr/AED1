#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
        Aula 34 - Operador unsigned (número sem sinal).
        %u para int
    */
    unsigned int aa = 10;

    printf("\ta = %u\n\n", aa);

    unsigned int aa, bb, cc;
	
    aa = 2147483647 ;
    bb = 1;
    cc = aa + bb;

    printf("\n\ta = %u\tb = %u\tc = %u\n\n", aa, bb, cc);

    return 0;
}
