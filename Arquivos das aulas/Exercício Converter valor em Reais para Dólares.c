#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
        Aula 41 - Exercício 6:
        Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere como taxa de
        câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em Dólares.
    */
    float reais, dolares;

    printf("Digite o valor em reais a ser convertido em dolar: R$");
    scanf("%f", &reais);

    dolares = reais / 5.3;

    printf("R$%.2f corresponde a $%.2f\n", reais, dolares);


    return 0;
}
