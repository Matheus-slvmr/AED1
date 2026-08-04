/* Fazer um algoritmo que calcule e imprima o salário reajustado de um funcionário de acordo com as
seguintes regras:
• Salário de até R$ 300,00, reajuste de 50%;
• Salário maior que R$300,00 reajuste de 30%;
Entrada
A entrada conterá uma linha com o salário do funcionário.
Saída
A saída deve conter, numa linha com a frase: SALARIO COM REAJUSTE = x, onde x é um valor real
com duas casas decimais e corresponde ao valor do salário reajustado. Logo em seguida ao valor de x, o
programa devem imprimir o caractere de quebra de linha: ‘\n’.
Exemplo
A seguir são mostrados dois casos distintos de entrada, somente para efeito de ilustração, porém, esse
problema contém apenas um caso de teste na entrada, formado por apenas uma linha de entrada.
Entrada
755.00
Saída
SALARIO COM REAJUSTE = 981.50
Entrada
265.32
Saída
SALARIO COM REAJUSTE = 397.98
 */
#include <stdio.h>
int main (void) {
    float salario;
    scanf("%f", &salario);
    if (salario <= 300.0) {
        salario += ((50.0/100.0)* salario);
    }else if (salario >300.0) {
    salario += ((30.0/100.0)* salario);;
    }
    printf("SALARIO COM REAJUSTE = %.2f\n",salario);

    return 0;
}