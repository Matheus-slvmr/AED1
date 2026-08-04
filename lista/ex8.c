/* Escreva um programa que imprima uma tabela de conversão de graus Fahrenheit para graus Celsius.
Dado um valor de temperatura F medida na escala Fahrenheit, seu valor equivalente C na escala Celsius é
dado pela seguinte equação:
C =
5(F − 32)
9
.
Entrada
A entrada conterá várias linhas. A primeira delas contém o número n de temperaturas em Fahrenheit a
serem convertidas para Celsius. Cada uma das n linhas seguintes contém um valor real (float) com a medida
de uma temperatura em graus Fahrenheit.
Saída
O programa deve imprimir n linhas cada uma no seguinte formato x FAHRENHEIT EQUIVALE A y
CELSIUS, onde x corresponde a um valor de temperatura em Fahrenheit e y corresponde ao valor equivalente em graus Celsius. Logo após a palavra CELSIUS em cada linha de saída deve ser impresso o caractere
de quebra de linha. Os valores de x e y devem ser impressos com duas casas decimais.
Exemplo
Entrada
3
8
60
-20
Saída
8.00 FAHRENHEIT EQUIVALE A -13.33 CELSIUS
60.00 FAHRENHEIT EQUIVALE A 15.56 CELSIUS
-20.00 FAHRENHEIT EQUIVALE A -28.89 CELSIUS
 */
#include <stdio.h>

float conta (float num) {
return (((num-32)*5)/9);
}

int main (int) {
    int n;
    float temp;
    scanf("%d",&n);
    for ( int i = 1; i <= n; i++)
    {
        scanf("%f", &temp);
        printf("%.2f Fahrenheit equivale a %.2f Celsius\n", temp, conta(temp));
    }
    
}