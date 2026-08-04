#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 13 - Criando variáveis e lendo números reais do teclado com a função scanf
    float peso = 75.380;

    printf("\n\tDigite seu peso: ");
    scanf("%f", &peso);
    printf("\n\tPeso: %f\n", peso);

    return 0;
}
