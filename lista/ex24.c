// Estruturas de Dados - 1 (NBC - INF/UFG)
// Lista n. 01 - Revisao
// Exercicio n. 01 - Cometa


#include <stdio.h>
#define P 76

int main() {
   int i, N, ano, anoHalley, resposta;
   int bissexto, contaBissexto;
   
   scanf("%d", &N);
   
   contaBissexto = 0;
   anoHalley     = 1986;
   if (N >= anoHalley) {
      bissexto = 1984;
      for (i = 1986; (i < N); i=i+4) {
          ano            = i;
          if(((ano-1986)%76)==0)
             anoHalley = ano;
            else anoHalley = anoHalley;
          if((ano-bissexto%4)!= 0)
            contaBissexto += 1;
           else contaBissexto += 0;
      } 
      resposta = anoHalley + P + (contaBissexto / 365);
   }
   else {
      bissexto = 1984;
      for (i = 1986; (i > N); i=i-4) {
          ano = i;
          if (((1986 - ano) % 76)==0) 
              anoHalley = ano;
            else anoHalley = anoHalley;
          if((ano - bissexto %4) != 0)
            contaBissexto += 1;
           else contaBissexto += 0;
      }
      resposta = anoHalley - (contaBissexto / 365);
   } 
   printf("%d\n", resposta);
   return (0);
   // observação
   // (contaBissexto / 365) essa conta sempre dará 0 
   //   só quando passar 365 anos bissexto que dara 1
 
}
