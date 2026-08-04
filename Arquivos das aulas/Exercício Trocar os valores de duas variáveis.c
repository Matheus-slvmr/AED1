#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 37 - Exercício 2: Trocar os valores de duas variáveis.
    int valor1, valor2, copia;
    int copia;
    printf("Digite dois valores inteiros: ");
    scanf("%d%d", &valor1, &valor2);

    copia = valor1;
    valor1 = valor2;
    valor2 = copia;

    printf("\nValor 1: %d\tValor 2: %d\n", valor1, valor2);

    return 0;
}
