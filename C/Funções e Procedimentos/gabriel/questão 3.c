#include <stdio.h>

int deslocamento(int t, int t0, int s0, int v);

int main()
{

    int v, t, t0, s, s0;

    printf("Escreva o Instante final: ");
    scanf("%d", &t);

    printf("Escreva o Instante inicial: ");
    scanf("%d", &t0);

    printf("Escreva a Posicao inicial: ");
    scanf("%d", &s0);

    printf("Escreva a velocidade  : ");
    scanf("%d", &v);

    s = deslocamento(t, t0, s0, v);
    printf("Valor de S: %d", s);
}

int deslocamento(int t, int t0, int s0, int v)
{
    int d, s;
    d = t - t0;
    s = s0 + v * d;
    return s;
}