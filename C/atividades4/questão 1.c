#include <stdio.h>
#include <math.h>

int main()
{

    double n1;

    printf("Insira um numero: ");
    scanf("%lf", &n1);

    while (n1 != 0)
    {

        if (n1 < 0)
        {
            n1 = pow(n1, 2);
            printf("O quadrado do seu numero e: %.0lf\n", n1);
        }
        else if (n1 > 0)
        {
            n1 = sqrt(n1);
            printf("A raiz do seu numero e: %.4lf\n", n1);
        }
        printf("\nInsira um numero: ");
        scanf("%lf", &n1);
    }
    return 0;
}