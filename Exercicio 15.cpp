/* Faça um algoritmo que conte de 1 a 100 e a cada múltiplo de 10 emita a mensagem „Múltiplo de 10‟ */

#include <stdio.h>

int main()
{
	int i;
	
	for (i = 1; i <= 100; i++)
	{
		printf("%d\n", i);
		
		if (i % 10 == 0)
		{
			printf("multiplo de 10\n");
		}		
	}
}
		