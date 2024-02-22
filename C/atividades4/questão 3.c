#include <stdio.h>

int main()
{

    float b_maior, b_menor, altura, area;

    printf("Area do Trapezio\n\n");

    printf("Insira a altura: ");
    scanf("%f", &altura);

    while (altura > 0)
    {
        printf("\nInsira a base menor: ");
        scanf("%f", &b_menor);

        printf("\nInsira a base maior: ");
        scanf("%f", &b_maior);

        area = (b_maior + b_menor) * altura / 2;
        printf("\nA area do seu Trapezio e de: %.2f", area);

        printf("\n\nInsira a altura: ");
        scanf("%f", &altura);
    }
    return 0;
}