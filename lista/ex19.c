/* Escreva um programa para ler uma linha com dois números inteiros x e y. O programa deve verificar se
x é um número par. Se for, o programa deve imprimir uma sequência de y números pares, iniciando com x.
Se x não for par, o programa deve imprimir uma linha com a mensagem: O PRIMEIRO NUMERO NAO E
PAR.
Entrada
A entrada conterá uma linha com dois números inteiros separados entre si por um caractere de espaço.
Após o segundo número na entrada há um caractere de quebra de linha (\n).
Saída
Se o primeiro número for par, o programa deve imprimir uma linha contendo a sequência de números
pares, com um espaço entre cada número par. Após o último número da serie, o programa deve imprimir
um espaço seguido de um caractere de quebra de linha (‘\n’). Se o primeiro número não for par, o programa
deve imprimir a mensagem O PRIMEIRO NUMERO NAO E PAR e logo em seguida, o caractere de quebra
de linha.
Exemplo
Entrada
20 10
Saída
20 22 24 26 28 30 32 34 36 38
Entrada
3 20
Saída
O PRIMEIRO NUMERO NAO E PAR */
#include <stdio.h>
int main (void) {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    if (n1 % 2 ==0)
    {
        for (int i = 0; i < n2; i++)
        {
        
            printf("%d ",(n1 + i*2));
             
        }
    }else{
        printf("O PRIMEIRO NUMERO NAO E PAR");
    }
    return 0;
}