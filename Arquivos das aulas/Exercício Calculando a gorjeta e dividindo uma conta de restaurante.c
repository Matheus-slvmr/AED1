#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
        Aula 39 - Exercício 4: Calculando a gorjeta e dividindo uma conta de restaurante.
        Exercício 4:
        Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta e o número de pessoas
        para dividir a conta. Imprima o valor que cada um deve pagar. Assuma que a conta será dividida igualmente.
    */
    int gorjeta, numPessoas;
    float valorConta;

    printf("\tDigite o valor da conta, a gorjeta e a quantidade de pessoa: ");
    scanf("%f%d%d", &valorConta, &gorjeta, &numPessoas);

    valorConta = valorConta + (valorConta * gorjeta/100);

    printf("\tValor da conta: R$%.2f\tValor por pessoa R$%.2f\n", valorConta, valorConta / numPessoas);


    return 0;
}
