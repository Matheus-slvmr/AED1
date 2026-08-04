/* Escreva um programa para ler um valor inteiro N e que gere o quadrado de cada um dos valores pares,
de 1 até N, inclusive N, se for o caso.
Entrada
A entrada conterá uma linha com um valor inteiro N, 5 < N < 2000.
Saída
A saída deve conter, uma linha para cada quadrado computado. Em cada linha deve constar uma expressão do tipo xˆ2 = y, onde x é um número par e y é o seu valor elevado ao quadrado. Imediatamente
após o valor de y deve aparecer o caractere de quebra de linha: ‘\n’.
Exemplo
Entrada
6
Saída
2ˆ2 = 4
4ˆ2 = 16
6ˆ2 = 36
 */
#include <stdio.h>
int main (void){
    
    int base;
    scanf("%d",&base);
    int cont = base / 2;
    for (int i = 2 ; i <= base ; i++){
        int exp;
        if (i%2 == 0)
        {
            exp = (i * i);
            printf("%d ^ %d = %d\n",i,i,exp);
        }
        
        
        
    }

    return 0;
}