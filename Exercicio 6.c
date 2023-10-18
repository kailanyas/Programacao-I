#include <stdio.h>
#include <stdlib.h>


/*Elabore um algoritmo para ler uma variável numérica N e mostrá-la somente se a mesma
for maior que 100, caso contrário mostrá-la com o valor zero. */

int main()
{
    float N;

    printf("Digite um numero: ");
    scanf("%f", &N);

    if (N > 100)
    {
        printf("%.2f", N);
    }
    else
    {
        N = 0;
        printf("%.2f", N);
    }

    return 0;
}

