#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num1, num2, resultado;
	char op;
	
	printf("Dado que:\n1 - Soma (+)\n2 - Subtracao (-)\n3 - Multiplicacao (*)\n4 - Divisao (/)\nEscolha um operador: ");
	scanf("%c", &op);
	printf("Digite um numero: ");
	scanf("%f", &num1);
	printf("Digite um numero: ");
	scanf("%f", &num2);

		
	if (op == '+')
	{
		resultado = num1 + num2;
		printf("%.2f", resultado);
	}
	else if (op == '-')
	{
		resultado = num1 - num2;
		printf("%.2f", resultado);
	}
	else if (op == '*')
	{
		resultado = num1 * num2;
		printf("%.2f", resultado);
	}
	else if (op == '/')
	{
		resultado = num1 / num2;
		printf("%.2f", resultado);
	}
	
}