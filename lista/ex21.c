/* Faça um programa que leia um valor n, inteiro e positivo, calcule e mostre a seguinte soma:
S =
Xn
k=1
=
1
k
= 1 + 1/2 + 1/3 + 1/4 + . . . + 1/n (3)
Entrada
O programa deve ler um número inteiro positivo e maior que 1.
Saída
O programa deve apresentar uma linha contendo o valor final do somatório com 6 casas decimais. Caso
o número lido não atenda as especificações da entrada, o programa deve apresentar a mensagem: "Numero
invalido!".
Observações
Use precisão dupla para o cálculo de S.
Exemplo
Entrada
10
Saída
2.928968
 */
#include <stdio.h>
float somatorio(int n){
    double result =0.0;
        for ( int i = 1.0; i <= n; i++)
        {
           result += 1.0/i;

        }
        return result;
}
int main (void) {

int n;
scanf("%d",&n);
    if (n > 1)
    {
        printf("%.6lf",somatorio(n));
        
    }else{
        printf("Numero invalido\n");
    }
    
    return 0;
}