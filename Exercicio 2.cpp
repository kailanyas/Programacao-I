#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3, num4, quad1, quad2, quad3, quad4;

    printf("Digite um numero: ", num1);
    scanf("%f", &num1);
    printf("Digite um numero: ", num2);
    scanf("%f", &num2);
    printf("Digite um numero: ", num3);
    scanf("%f", &num3);
    printf("Digite um numero: ", num4);
    scanf("%f", &num4);

    quad1 = (num1 * num1);
    quad2 = (num2 * num2);
    quad3 = (num3 * num3);
    quad4 = (num4 * num4);

    if (quad3 >= 1000) {
        printf("O quadrado do terceiro valor e: %.2f\n", quad3);
    }
    else {
        printf("O primeiro valor lido e: %f \n", num1);
        printf("O quadrado do primeiro valor lido e: %.2f \n", quad1);
        printf("O segundo valor lido e: %f \n", num2);
        printf("O quadrado do segundo valor lido e: %.2f \n", quad2);
        printf("O terceiro valor lido e: %f \n", num3);
        printf("O quadrado do terceiro valor lido e: %.2f \n", quad3);
        printf("O quarto valor lido e: %f \n", num4);
        printf("O quadrado do quarto valor lido e: %.2f \n", quad4);
    }



    return 0;
}
