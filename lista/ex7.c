/* Desenvolver um programa para calcular a conta de água para uma empresa de saneamento. O custo da
água varia dependendo se o consumidor é residencial, comercial ou industrial. A regra para calcular a conta
é:
• Residencial: R$ 5, 00 de taxa mais R$ 0, 05 por metros cúbicos gastos;
• Comercial: R$ 500, 00 para os primeiros 80 metros cúbicos gastos mais R$ 0, 25 por metros cúbicos
gastos;
• Industrial: R$ 800, 00 para os primeiros 100 metros cúbicos gastos mais R$ 0, 04 por metros cúbicos
gastos;
O programa deverá ler a conta do cliente, o consumo de água por metros cúbicos e o tipo de consumidor (
residencial, comercial e industrial ). Como resultado, o programa deve imprimir a conta do cliente e o valor
em Reais a ser pago pelo mesmo.
Entrada
O programa deverá ler uma linha na entrada contendo: a conta do cliente (um número inteiro), o consumo de água por metros cúbicos (float) e o tipo do consumidor (um caractere: ‘C’ - COMERCIAL, ‘I’ -
INDUSTRIAL ou ‘R’ - RESIDENCIAL). Há um espaço entre os valores na linha de entrada
Saída
O programa deve imprimir duas linhas, contendo o seguinte:
• CONTA = u, onde u é o código inteiro identificador da conta;
• VALOR DA CONTA = v, onde v é o valor da conta com duas casas decimais, a ser pago pelo
consumidor;
Após o valor impresso em cada linha, o programa dev imprimir o caractere de quebra de linha; ‘\n’. Os
valores de v,x e w devem conter duas casas decimais.
Exemplo
Abaixo são mostrados dois exemplos de entrada e saída, mas há apenas um caso de entrada (uma linha)
para esse programa.
Entrada
39393939 230 C
Saída
CONTA = 39393939
VALOR DA CONTA = 537.50
Entrada
888 3752 I
Saída
CONTA = 888
VALOR DA CONTA = 946.08 */
#include <stdio.h>

float consumor(float num){
    return ((num * 0.05) + 5.0);
}

float consumoc(float num){
    if (num > 80.0){

        return (((num-80.0) * 0.25) + 500.0);
    }else{
        
        return (500.0);
    }
}

float consumoi(float num){
    if (num > 100){

        return (((num-100.0) * 0.04) + 800.0);
    }else{
        
        return (800.0);
    }
}

int main(void){
    int conta;
    float consumo;
    char type ;
scanf("%d %f %c",&conta, &consumo, &type);
//contas

    switch (type)
    {
    case 'R':
        printf("\nconta: %d", conta);
        printf("\n valor da conta: %f", consumor(consumo));
        break;
        
    case 'C':
        printf("\nconta: %d", conta);
        printf("\n valor da conta: %f", consumoc(consumo));
        break;
        
        case 'I':
        printf("\nconta: %d", conta);
        printf("\n valor da conta: %f", consumoi(consumo));
        break;
    
    default:
        break;
    }

}
