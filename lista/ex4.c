/* Escrever um algoritmo que lê o público total de futebol, as percentagens de pessoas nas seguintes
categorias: popular, geral, arquibancada e cadeiras e forneça a renda total do jogo. Sabe-se que o valor
dos ingressos por categoria são dados pela tabela abaixo:

Categoria Valor ingresso

Popular R$ 1,00
Geral R$ 5,00
Arquibancada R$10,00
Cadeiras R$ 20,00

Entrada

A entrada contém uma linha inicial com um valor inteiro informando o número de casos de testes que
ocorrem nas linhas seguintes. Cada caso de teste seguinte é formado por uma linha contendo os seguintes
valores, separados entre si por um espaço:

• O número de pessoas que compraram ingresso para o jogo correspondente ao caso de teste.
• A percentagem de pessoas que compraram ingresso na categoria Popular.
• A percentagem de pessoas que compraram ingresso na categoria Geral.
• A percentagem de pessoas que compraram ingresso na categoria Arquibancada.
• A percentagem de pessoas que compraram ingresso na categoria Cadeiras.

Saída
O programa deve gerar uma linha para cada caso de teste na entrada, contendo a frase: A RENDA DO
JOGO N. x E = y, onde x corresponde a ordem do caso de teste na entrada e y é um valor real com duas
casas decimais que corresponde ao valor da renda total do jogo x.

Exemplo

Entrada
3
55000 20.2 50.4 30.2 10.2
49732 15.2 53.4 20.24 11.16
67890 30.0 42.20 23.8 4.0

Saída
A RENDA DO JOGO N. 1 E = 428010.00
A RENDA DO JOGO N. 2 E = 352003.09
A RENDA DO JOGO N. 3 E = 379505.09
*/

#include <stdio.h>
int main (void){
    float const popular = 1.0;
    float const geral = 5.0;
    float const arquibancada = 10.0;
    float const cadeiras = 20.0;
    int count;
    int ingressos;
    float soma;
    float popular_m,geral_m,arquibancada_m,cadeiras_m;
    float popular_num,geral_num,arquibancada_num,cadeiras_num;
    printf("quantos testes serao executadoS? (MAX 5)");
    scanf("%d",&count);
    for ( int i = 1; i <= count; i++)
    {

        scanf("%d""%f""%f""%f""%f",&ingressos,&popular_num,&geral_num,&arquibancada_num,&cadeiras_num);
        popular_m = ((popular_num/100) * ingressos) * popular;
        geral_m = ((geral_num/100) * ingressos) * geral;
        arquibancada_m = ((arquibancada_num/100) * ingressos) * arquibancada;
        cadeiras_m = ((cadeiras_num/100) * ingressos) * cadeiras;
        soma = popular_m + geral_m + arquibancada_m + cadeiras_m;

            printf("A RENDA DO JOGO N%d : %.2f\n",i,soma);
        
        
      
    }
    

return 0;  
}