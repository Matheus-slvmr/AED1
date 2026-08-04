#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 21 - Como ler dois caracteres e limpar o buffer do teclado com um espaço?
    char a, b;

    printf("\n\tDigite dois caracteres: ");
    scanf("%c %c", &a, &b);
    printf("\ta = %c\tb = %c\n", a, b);
    printf("\ta = %d\tb = %d\n", a, b);

    return 0;
}
