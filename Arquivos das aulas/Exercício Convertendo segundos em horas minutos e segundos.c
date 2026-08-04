#include <stdio.h>
#include <stdlib.h>

int main(){

    /* Aula 42 - Exercício 7:
        Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a conversão para
        horas, minutos e segundos.
        Exemplo:
        Entrada: 3672
        Saída: 1:1:12
    */
    int segundos, h, m, s, resto;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &segundos);

    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;

    printf("\t%d:%d:%d\n", h, m, s);


    return 0;
}
