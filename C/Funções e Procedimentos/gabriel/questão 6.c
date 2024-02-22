#include <stdio.h>

int media(int sdn, int m1);

int main()
{
    int n2[5], n[5], sdn = 0, m1 = 0, m2;

    printf("Escreva 5 numeros: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        n2[i] = n[i];
        n[i] = n[i] % 2;

        if (n[i] == 0)
        {
            sdn = sdn + n2[i];
            m1++;
        }
    }
    printf("Soma dos Numeros: %d  M1: %d", sdn, m1);
    m2 = media(sdn, m1);

    printf("\nA media dos numeros pares e de: %d", m2);
}

int media(int sdn, int m1)
{
    int media;
    media = sdn / m1;
    return media;
}