#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 38 - Exercício 3: Trocar os valores de duas variáveis sem usar uma variável auxiliar.
    int valor1, valor2;

    printf("Digite dois valores inteiros: ");
    scanf("%d%d", &valor1, &valor2);

    valor1 = valor1 + valor2;
    valor2 = valor1 - valor2;
    valor1 = valor1 - valor2;

    printf("\nValor 1: %d\tValor 2: %d\n", valor1, valor2);

    return 0;
}
