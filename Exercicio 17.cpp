/* Dado o trecho de programa abaixo:
...
leia (N)
R  1;
I  2;
enquanto I <= N-1 faça
R  R * 2;
I  I + 1;
fim-enquanto;
escreva (R);
...
Reescreva-o utilizando:
a) o comando para.
b) o comando repita ... até. */

#include <stdio.h>

int main()
{
	float n;
	int r = 1, i;
	
	printf("digite um numero: ");
	scanf("%f", &n);
	
	for (i = 2; i <= n-1; i++)
	{
		r *= 2;
	}
	
	printf("%d", r);
	
	
}