#include <stdio.h>

int main()
{
	int i = 1, n = 0, fatorial = 1;
	
	printf("digite um numero: ");
	scanf("%d", &n);
	
	do
	{
		fatorial *= i;
		i++;	
	}
	while (i <= n);
	
	printf ("%d", fatorial);
	
}