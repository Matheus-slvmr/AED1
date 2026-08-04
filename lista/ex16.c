/* (+) O volume (V ) de uma pirâmide cuja base é um hexágono regular é computado pela
Equação 1:
v =
1
3
· Ab · h, (1)
onde h é a altura da pirâmide e Ab é a área do hexágono que forma a base da pirâmide. A área do hexágono
é computada pela Equação 2:
Ab =
3 · a
2
·
√
3
2
, (2)
onde a é o comprimento de uma aresta do hexágono regular.
Entrada
O programa deve ler uma linha com dois números float, separados entre si por um espaço. O primeiro
número corresponde à altura da pirâmide e o segundo número corresponde a uma aresta do hexágono que
forma a abase da pirâmide. Ambos são valores em metros.
Saída
O programa deve emitir a frase: O VOLUME DA PIRAMIDE E = x METROS CUBICOS, onde x é o
valor do volume da pirâmide em metros cúbicos e com duas casas decimais. Ao final da frase o programa
deve imprimir o caractere de quebra de linha (\n).
Exemplo
Entrada
12.0
8.0
Saída
O VOLUME DA PIRAMIDE E = 665.11 METROS CUBICOS
Entrada
0.45
0.23
Saída
O VOLUME DA PIRAMIDE */
#include <stdio.h>
#include <math.h>
float volume (float altura, float aresta){
    float areaB = (3.0 * (aresta*aresta) * sqrt(3)/2.0);
    float v = 1.0/3.0 * areaB * altura ;
    return v;
}
int main (void){
    float a, r;
    scanf("%f %f", &a, &r);
    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", volume(a,r));
    return 0;
}