#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 15 - Criando variáveis e lendo caracteres do teclado com a função getchar
    char sexo;

    printf("\n\tDigite f para feminino ou m para masculino: ");
    sexo = getchar();
    printf("\tSexo: %c\n", sexo);
    printf("\tInteiro: %d\n", sexo);
    printf("\tLetra g: %c\n", 103);

    return 0;
}
