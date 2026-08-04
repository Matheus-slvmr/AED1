#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
        Aula 23 - Como descobrir o tamanho em memória de cada tipo de dado com o operador sizeof?
        sizeof x; onde x é uma variável, e;
        sizeof(tipo); substituindo a palavra tipo pelo tipo de dado cujo quantidade de memória queremos descobrir.
    */
    int a;
    char b;
    float c;

    printf("\n\tint = %d\n", sizeof(int));
    printf("\tchar = %d\n", sizeof(char));
    printf("\tfloat = %d\n", sizeof(float));
    printf("\tdouble = %d\n", sizeof(double));

    printf("\tint = %d\n", sizeof a);
    printf("\tchar = %d\n", sizeof b);
    printf("\tfloat = %d\n", sizeof c);

    return 0;
}
