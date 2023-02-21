#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 5 && idade <= 7)
	{
		printf("Infantil A");
	}
	
	if (idade >= 8 && idade <= 11)
	{
		printf("Infantil B");
	}
	
	if (idade >= 12 && idade <= 13)
	{
		printf("Juvenil A");
	}
	
	if (idade >= 14 && idade <= 17)
	{
		printf("Juvenil B");
	}
	if (idade > 18)
	{
		printf("Adultos");
	}
	
	
}