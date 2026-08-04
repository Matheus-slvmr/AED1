/* #include <stdio.h>
void main (void)
{
int MATRIZ [20][10];
int i,j,cont;
cont=1;
for (i=0;i<20;i++)
 for (j=0;j<10;j++)
 {
 MATRIZ[i][j]=cont;
cont++;
printf("%d",MATRIZ[cont][cont]);
 }
}  */
#include <stdio.h>

int main(void)
{
    int MATRIZ[20][10];
    int i, j, cont = 1;

    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 10; j++)
        {
            MATRIZ[i][j] = cont;
            cont++;
            
            // Imprime o valor da posição atual formatado com espaço
            printf("%d\t", MATRIZ[i][j]); 
        }
       printf("\n"); 
    }

    return 0;
}
