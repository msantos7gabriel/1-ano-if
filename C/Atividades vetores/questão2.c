#include <stdio.h>

int main()
{
    int n, qdv = 0;
    printf("quantos elementos ele deseja utilizar ?: ");
    scanf("%d", &n);

    float vet[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &vet[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (vet[i] >= 5 && vet[i] <= 20)
        {
            qdv++;
        }
    }
    printf("\nVetores : quantidade %d", qdv);
}