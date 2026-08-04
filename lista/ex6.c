/* Sabendo-se que 100 kW de energia custam 70% do salário mínimo, escreva um algoritmo em Linguagem C que leia o valor do salário mínimo e a quantidade de kW gasta por uma residência. Calcule e
imprima:
• o valor em reais de cada kW;
• o valor em reais a ser pago pelo consumo da residência;
• o novo valor a ser pago pela residência com um desconto de 10%.
Entrada
O programa deve ler o valor do salário mínimo e a quantidade de kW gasta por uma residência. Ambos
os valores são reais.
Saída
O programa deve imprimir três linhas contento o texto:
Custo por kW: R$ x.xx
Custo do consumo: R$ x.xx
Custo com desconto: R$ x.xx
Exemplo
Entrada
81
3.54
Saída
Custo por kW: R$ 0.57
Custo do consumo: R$2.01
Custo com desconto: R$ 1.81 */
#include <stdio.h>
int main (void){
    float salario;
    float residencia;
    scanf("%f", &salario);
    scanf("%f",&residencia);
    float conta = 0.7 * salario;
    //conta = 100kw preco
    float kw_valor = conta / 100.0;
    float valor = (residencia * kw_valor);
    float desc = valor - (valor*(10.0/100.0));
    printf("\nCusto por Kw: R$%.2f", kw_valor);
    printf("\nCusto por consumo: R$%.2f",valor);
    printf("\nCusto com desconto: R$%.2f",desc);

    return 0;
}