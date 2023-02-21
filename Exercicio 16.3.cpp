#include <stdio.h>

int main()
{
	int i = 1, n = 0, fatorial = 1;
	
	printf("digite um numero: ");
	scanf("%d", &n);
	
	while (i <= n)
	{
		fatorial *=i;
		i++;
	}
	
	printf ("%d", fatorial);
	
}