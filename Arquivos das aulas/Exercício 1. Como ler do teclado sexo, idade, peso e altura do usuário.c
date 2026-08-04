#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 19 - Exercício 1. Como ler do teclado sexo, idade, peso e altura do usuário?
    char sexo;
    int idade;
    float peso, altura;

    printf("\n\tDigite seu sexo(f ou m), idade, peso e altura: ");
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
    printf("\n\tSexo: %c\tIdade: %d\tPeso: %f\tAltura: %f\n", sexo, idade, peso, altura);

    return 0;
}
