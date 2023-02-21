#include <stdio.h>
#include <stdlib.h>

int main()
{
	float altura, peso;
	char sexo;
	
	printf("Digite seu sexo: ");
	scanf("%c", &sexo);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	
	
	if (sexo == 'M' || sexo == 'm')
	{
		peso = (72.7 * altura) - 58;
		printf("Seu peso ideal e: %.2f", peso);
	}
	if (sexo == 'F' || sexo == 'f')
	{
		peso = (62.1 * altura) - 44.7;
		printf("Seu peso ideal e: %.2f", peso);
	}
	
	
}