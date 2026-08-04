#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 16 - Criando variáveis e lendo caracteres do teclado com a função getc().
    char sexo = 'a';

    printf("\n\tDigite f para feminino ou m para masculino: ");
    sexo = getc(stdin);
    printf("\n\tSexo: %c\n", sexo);

    return 0;
}
