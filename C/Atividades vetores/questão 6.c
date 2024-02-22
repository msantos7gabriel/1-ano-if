#include <stdio.h>

int main()
{
    int x, n, qdx, vet[n];

    printf("quantos elementos ele deseja utilizar ?: ");
    scanf("%d", &n);

    printf("escreva um elemento x");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (vet[i] == x)
        {
            qdx++;
        }
    }
    printf("quantas vezes o número X aparece no vetor %d", qdx);
}
