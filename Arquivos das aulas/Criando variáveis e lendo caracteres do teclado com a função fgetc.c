#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 17 - Criando variáveis e lendo caracteres do teclado com a função fgetc
    char sexo = 'a';

    printf("\n\tDigite f para feminino ou m para masculino: ");
    sexo = fgetc(stdin);
    printf("\n\tSexo: %c\n", sexo);

    return 0;
}
