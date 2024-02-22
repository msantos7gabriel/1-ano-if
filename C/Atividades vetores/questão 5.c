#include <stdio.h>

int main()
{
    int n;

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
        if (vet[i] == vet2[i])
        {
            printf("\nvetores Iguais");
        }
        else
        {
            printf("\nvetores difrentes");
        }
    }
}