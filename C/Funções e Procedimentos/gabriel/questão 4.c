#include <stdio.h>
#include <math.h>

void raizes(int delta, int a, int b);

int main()
{

    int a, b, c, delta;

    printf("Escreva o Valor de A: ");
    scanf("%d", &a);

    printf("\nEscreva o Valor de B: ");
    scanf("%d", &b);

    printf("\nEscreva o Valor de C: ");
    scanf("%d", &c);

    delta = pow(b, 2) + -4 * a * c;

    raizes(delta, a, b);
}

void raizes(int delta, int a, int b)
{
    float x1, x2;
    x1 = -b + sqrt(delta) / 2 * a;
    x2 = -b - sqrt(delta) / 2 * a;
    printf("\nValor de x1: %.2f\n Valor de x2: %.2f", x1, x2);
}