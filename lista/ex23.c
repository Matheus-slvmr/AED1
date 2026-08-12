/* 1. Escreva um programa que leia um valor inteiro e diga se o número informado é par ou ímpar */
#include <stdio.h>
int main (void) {

    int n;
    scanf("%d",&n);
    if (n%2 == 0)
    {
        printf("%d e par",n);
    }else{
        printf("e impar");
    }
    
    return 0;
}