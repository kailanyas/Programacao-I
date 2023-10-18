#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	switch(idade)
	{
		case 5:
		case 6:
		case 7:
			printf("Infantil A");
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
			printf("Infantil B");
			break;
		
		case 12:
		case 13:
			printf("Juvenil A");
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
			printf("Juvenil B");
			break;
			
		default:
			printf("Adultos");
			
	}
}
