/* Em um curso de mestrado as avaliações dos alunos no histórico escolar aparecem em forma de conceito.
O regulamento do mestrado indica que um professor pode avaliar seus alunos com notas convencionais de
zero a dez, mas precisa repassar à secretaria do curso a avaliação em termos de conceito. Nesse caso, a
seguinte tabela de conversão deve ser usada pelo professor:
Intervalo da Nota Conceito
[9,0 a 10] A
[7,5,9,0) B
[6, 7,5) C
[0 ,6,0) D
Escreva um programa para ler um nota e converte-la no conceito correspondente.
Entrada
A entrada consiste de uma linha com um valor real entre 0 e 10 e com uma casa decimal.
Saída
O programa deve imprimir a seguinte frase: NOTA = x CONCEITO = y, onde x é o valor da nota lido
na entrada, impresso com uma casa decimal y é o conceito correspondente. Após a frase, o programa deve
imprimir o caractere de quebra de linha: ’\n’.
Exemplo
Entrada
3.4
Saída
NOTA = 3.4 CONCEITO = D
Entrada
6.0
Saída
NOTA = 6.0 CONCEITO = C */
#include <stdio.h>
int main (void) {
    float n;
    scanf("%f", &n);
    if (n >= 9.0)
    {
        printf("NOTA = %f CONCEITO = A", n);
    }else if (n <9.0 && n >= 7.5) {
        printf("NOTA = %f CONCEITO = B", n);
    }else if (n <7.5 && n >= 6.0) {
        printf("NOTA = %f CONCEITO = C", n);
    }else if (n <6.0 && n >= 0.0) {
        printf("NOTA = %f CONCEITO = D", n);
    }
    
}