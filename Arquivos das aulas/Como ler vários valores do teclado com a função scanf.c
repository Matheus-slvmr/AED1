#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 18 - Como ler vários valores do teclado com a função scanf
    int idade;
    float peso, altura;

    printf("\n\tDigite sua idade, seu peso e sua altura: ");
    scanf("%d%f%f", &idade, &peso, &altura);
    printf("\n\tIdade: %d\tPeso: %f\tAltura: %f\n", idade, peso, altura);

    return 0;
}
