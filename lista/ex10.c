/* Um fabricante de latas deseja desenvolver um programa para calcular o custo de uma lata cilíndrica de
alumínio, sabendo-se que o custo do alumínio por m2
é R$ 100,00.
Entrada
O programa deve ler dois valores na entrada: o raio e a altura da lata. Ambos os valores correspondem
a valores em metros. Cada valor ocorre em uma linha diferente na entrada.
Saída
O programa deve imprimir a frase: O VALOR DO CUSTO E = XXX.XX, onde XXX.XX é o valor do
custo da lata. Logo após o valor do custo da lata o programa deve imprimir o caractere de quebra de linha
‘\n’.
Observações
• O seu programa deve utilizar a constante π com o valor aproximado de 3.14159.
• O valor total da área de um cilindro é dada por At = 2Ac + Al
, onde Ac é a área do círculo, calculada
como: Ac = πr2
e Al é a área lateral do cilindro, computada por Al = 2πra, onde r é o raio e a a
altura da lata em metros.
Exemplos
Entrada
0.02
0.09
Saída
O VALOR DO CUSTO E = 1.38
 */
#include <stdio.h>
int main (void) {
    float raio, altura;
    scanf("%f %f",&raio,&altura);
    float const PI = 3.14159;
    float areal = 2 * PI * raio * altura;
    float areac = PI * (raio * raio);
    float area = 100 * (2 * areac + areal);
    printf("O VALOR DO CUSTO E = %f",area);

}