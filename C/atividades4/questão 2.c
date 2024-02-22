#include <stdio.h>
#include <math.h>

int main()
{

    double n1;
    int i = 0;

    while (i < 4)
    {
        printf("\nInsira um numero: ");
        scanf("%lf", &n1);

        if (n1 < 0)
        {

            n1 = pow(n1, 2);
            printf("\nO quadrado do seu numero e: %.0lf", n1);
        }
        else
        {
            n1 = sqrt(n1);
            printf("A raiz do seu numero e: %.4lf\n", n1);
        }
        i++;

        if (n1 == 0)
        {
            printf("\nNem um nem outro");
        }
    }
    return 0;
}