#include <stdio.h>
#include <stdlib.h>
/* Faça um algoritmo que determine o maior entre N números lidos. A condição de parada é a entrada de
um valor 0, ou seja, o algoritmo deve ficar calculando o maior até que a entrada seja igual a 0 (ZERO) */


int main()
{
	int numero, maior = 0;
	
	do 
	{
		printf("digite um numero: ");
		scanf("%d", &numero);
		
		if (numero > maior)
		{
			maior = numero;
		}
	}
	while (numero != 0);
	
	printf("o maior numero foi: %d", maior);
	
	
}