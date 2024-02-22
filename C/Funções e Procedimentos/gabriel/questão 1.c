#include <stdio.h>
#include <math.h>

void esfera(float raio);

int main()
{
    float raio;

    printf("Insira o valor do raio: ");
    scanf("%f", &raio);

    esfera(raio);
}

void esfera(float raio)
{
    float volume;
    volume = 4 / 3 * 3.14 * pow(raio, 3);
    printf("Volume: %f", volume);
}