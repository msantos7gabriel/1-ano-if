#include <stdio.h>

int main()
{
    int n;
    printf("quantos elementos ele deseja utilizar ?: ");
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            vet[i] = vet[i] * 0;
        }
        printf("\nVetores : vetor %d", vet[i]);
    }
}
