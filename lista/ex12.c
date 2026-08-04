/* Fazer um programa tal que dados os quatro elementos de uma matriz 2 × 2, calcule e escreva o valor do
determinante desta matriz.
Entrada
O programa deve ler os quatro elementos a, b, c e d que formam uma matriz quadrada bidimensional.
Há um valor por linha de entrada. Cada valor corresponde a um número real (float).
Saída
O programa deve imprimir uma linha contendo a frase: O VALOR DO DETERMINANTE E = X, onde
X é o valor do determinante computado pelo seu programa e deve conter no máximo 2 casas decimais.
Após o valor do determinante, o programa deve imprimir um caractere de quebra de linha: "\n".
Observações
Dada uma matriz quadrada bidimensional M =

| a b |
| c d |
, o determinante de M, denotado por det(M)
é definido como: det(M) = ad − bc.
Exemplo
Entrada
4
3
5
4
Saída

O VALOR DO DETERMINANTE E = 1.00 */
#include <stdio.h>
float det (float matriz[2][2]) {
    float a = matriz[0][0];
    float b = matriz[0][1];
    float c = matriz[1][0];
    float d = matriz[1][1];
    float det = ((a * d) - (b*c));
    return det;
}

int main (void) {
    float M[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
    {
        scanf("%f",&M[i][j]);
    }
    }
    printf("O VALOR DO DETERMINANTE E = %.2f\n", det(M));
 return 0;   
}