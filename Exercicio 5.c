#include <stdio.h>
#include <stdlib.h>


/* Elabore um algoritmo para ler um
número e verificar se ele é par ou ímpar. Quando for par armazenar esse valor em P e quando for ímpar
armazená-lo em I. Exibir P e I no final do processamento. */

int main()
{
    int num, p=0, i=0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num%2 == 0)
    {
    (p = num);
    }

    else
    {
    (i = num);
    }

    printf("P = %d\n", p);

    printf("I = %d", i);
    return 0;
}
