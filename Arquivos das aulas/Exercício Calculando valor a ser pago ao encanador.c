#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
        Aula 40 - Exercício 5
        Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o número de dias
        trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo que são descontados
        8% para imposto de renda.
    */
    int qtdDias;
    float valorRecebido;

    printf("Informe a quantidade de dias trabalhados: ");
    scanf("%d", &qtdDias);

    valorRecebido = 45 * qtdDias;
    valorRecebido = valorRecebido - valorRecebido * 0.08;

    printf("\tValor a ser pago R$%.2f\n", valorRecebido);


    return 0;
}
