#include <stdio.h>
#include <stdlib.h>

int main(){

    // Aula 20 - Problema ao ler caracteres. Como ler um caractere depois de outros dados?
    char sexo;
    int idade;
    float peso, altura;

    printf("\n\tDigite sua idade, seu peso, sua altura e seu sexo(f ou m): ");
    scanf("%d%f%f%c", &idade, &peso, &altura, &sexo);
    printf("\n\tSexo: %d\tIdade: %d\tPeso: %f\tAltura: %f\n", sexo, idade, peso, altura);

    return 0;
}
