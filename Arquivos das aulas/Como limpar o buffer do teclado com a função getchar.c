#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 21 - Como limpar o buffer do teclado com a função getchar()?
    char a, b;

    printf("\n\tDigite dois caracteres: ");
    scanf("%c", &a);
    getchar();
    scanf("%c", &b);
    printf("\n\ta = %c\tb = %c", a, b);
    printf("\n\ta = %d\tb = %d", a, b);

    return 0;
}
