/* Fazer um algoritmo que calcule a média aritmética das três notas de um aluno e mostre, além do valor
da média, uma mensagem de "APROVADO", caso a média seja igual ou superior a seis, ou a mensagem
"REPROVADO", caso contrário.
Entrada
A entrada conterá uma linha com as três notas do aluno, separadas entre si por um caractere de espaço.
Saída
A saída deve conter duas linhas. A primeira linha deve conter uma frase com o seguinte formato:
MEDIA = x, onde x é o valor da média entre as três notas do aluno, contendo duas casas decimais. A
segunda linha contém uma das duas mensagens: APROVADO ou REPROVADO. Após o valor da média e
após a mensagem, o programa deve imprimir o caractere de quebra de linha: ‘\n’.

Exemplo

Entrada
7.4 6.2 3.7

Saída
MEDIA = 5.77
REPROVADO

Entrada
5.1 9.9 7.2

Saída
MEDIA = 7.40
APROVADO */

#include <stdio.h>
int main(void){
    printf("\nDigite a nota do aluno: \n");
    float nota;
    scanf("%f",&nota);
    if (nota >= 6.0)
    {
        printf("APROVADO, sua nota: %f",nota);
    }else{
        printf("REPROVADO, sua nota: %f",nota);
    }
    
}
