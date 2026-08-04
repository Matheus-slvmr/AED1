/* Muitos países estão passando a utilizar o sistema métrico. Faça um programa para executar as seguintes
conversões:
• Ler uma temperatura em Fahrenheit e imprimir o equivalente em Celsius (C = (5F − 160)/9).
• Ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em milímetros (1 polegada
= 25.4 mm).
Entrada
O programa deve ler dois valores na entrada: um valor em Fahrenheit e outro valor em polegadas.
Ambos os valores são do tipo float. Cada valor ocorre em uma linha diferente na entrada.
Saída
O programa deve imprimir duas linhas. Aa primeira contém a frase: O VALOR EM CELSIUS = X,
onde X é o valor de temperatura convertido de Fahrenheit para Celsius e deve ter duas casas decimais. A
segunda linha deve conter a frase: A QUANTIDADE DE CHUVA E = Y, onde Y é o valor em milímetros
correspondente ao valor em polegadas dado como entrada. Y é um valor real (float) e deve ter duas casas
decimais. Logo após o valor de Y, o programa deve imprimir o caractere de quebra de linha ‘\n’.
Exemplo
Entrada
53
120
Saída
O VALOR EM CELSIUS = 11.67
A QUANTIDADE DE CHUVA E = 3048.00 */
#include <stdio.h>
float conta (float num) {
return (((num-32)*5)/9);
}

float polegadas (float polegadas) {
return (polegadas * 25.4);
}

int main (void) {
float F;
float P;

scanf("%f",&F);
scanf("%f",&P);
printf("O valor em celsius = %.2f\n", conta(F));
printf("A quantidade de chuma e = %.2f\n", polegadas(P));


}