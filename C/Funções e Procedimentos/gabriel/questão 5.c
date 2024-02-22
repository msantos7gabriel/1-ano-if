#include <stdio.h>

void classe(float l1, float l2, float l3);

int main()
{

    float l1, l2, l3;

    printf("\nEscreva o Valor Primeiro Lado: ");
    scanf("%f", &l1);

    printf("\nEscreva o Valor Segundo Lado: ");
    scanf("%f", &l2);

    printf("\nEscreva o Valor Terceiro Lado: ");
    scanf("%f", &l3);

    classe(l1, l2, l3);
}

void classe(float l1, float l2, float l3)
{
    if (l1 == l3 && l1 == l2)
    {
        printf("\nTriângulo equilátero");
    }
    else if (l1 != l2 && l1 != l3)
    {
        printf("\nTriângulo escaleno");
    }
    else
    {
        printf("\nTriângulo isósceles");
    }
}