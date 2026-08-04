#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 14 - Criando variáveis e lendo caracteres do teclado com a função scanf()
    char sexo = 'w';

    printf("\n\tDigite f para feminino ou m para masculino: ");
    scanf("%c", &sexo);
    printf("\n\tSexo digitado: %c\n", sexo);

    return 0;
}
