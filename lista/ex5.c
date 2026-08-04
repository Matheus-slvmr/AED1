/* Escreva um algoritmo em Linguagem C que leia três números inteiros separados (n1, n2, n3) e calcule
o número inteiro correspondente à concatenação dos três números lidos, de modo que n1 seja a centena, n2
a dezena e n3 a unidade. O programa deve apresentar o número calculado e também o seu quadrado. Caso
n1, n2 ou n3 tenham mais que 1 dígito, o programa deve apresentar a mensagem: "DIGITO INVALIDO"e
encerrar a execução. O valor de saída não deve ter zeros à esquerda.
Entrada
O programa deve ler 3 números inteiros.
Saída
O programa deve imprimir uma linha contendo o número resultado da composição dos três números
inteiros e seu quadrado separados por vírgula e um espaço.
Exemplo
Entrada
1
2
3
Saída
123, 15129
Entrada
10
0
3
Saída
DIGITO INVALIDO */
#include <stdio.h>
int main (void){
    int n1,n2,n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int soma =(n1 * 100) + (n2 * 10) + (n3*1);
    int exp = soma * soma;
    if (n1 > 9 || n2 > 9 || n3 > 9 )
    {
        printf("numero invalido");

    }else{
        printf("%d", exp);
    }
    return 0;
}