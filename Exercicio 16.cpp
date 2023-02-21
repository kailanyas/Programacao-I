/* Faça três algoritmos que leiam um valor N (inteiro), e calcule o fatorial de N. Um com repetição
incondicional (para), e dois com condicional, do tipo 1 (enquanto ... faça) e 2 (repita ... até). */

#include <stdio.h>

int main()
{
	int n = 0, fatorial = 1;
	
	printf("digite um numero: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		fatorial *= i;
	}
	
	printf ("%d", fatorial);
}