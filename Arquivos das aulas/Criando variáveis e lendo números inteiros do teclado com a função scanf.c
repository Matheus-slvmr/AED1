#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 13 - Criando variáveis e lendo números inteiros do teclado com a função scanf
    int num1, num2 = 50;

    printf("\nDigite dois valores inteiros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("\n\tSoma: %d\n", num1 + num2);

    return 0;
}
