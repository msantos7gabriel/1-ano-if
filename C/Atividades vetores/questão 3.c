
#include <stdio.h>

int main()

{

    int n, sdv1 = 0, sdv2 = 0;

    printf("quantos elementos ele deseja utilizar ?: ");

    scanf("%d", &n);

    float vet[n], vet2[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nescreva os valores do vetor 1: ");
        scanf("%f", &vet[i]);
    }

    printf("\n\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nescreva os valores do vetor 2: ");
        scanf("%f", &vet2[i]);
    }

    for (int i = 0; i < n; i++)

    {

        sdv1 = vet[i] + sdv1;
    }
    for (int i = 0; i < n; i++)
    {
        sdv2 = vet2[i] + sdv2;
    }

    printf("\nsdv1 = %d\n", sdv1);
    printf("sdv2 = %d\n", sdv2);

    if (sdv1 > sdv2)

    {

        printf("\nos valores somados dos vetores do vetor 1 sao maior\nResultado da soma: %d", sdv1);
    }

    else if (sdv2 > sdv1)

    {

        printf("\nos valores somados dos vetores do vetor 1 sao maior\nResultado da soma: %d", sdv2);
    }

    else

    {
        printf("\nos valores somados dos vetores sao iguais");
    }
}