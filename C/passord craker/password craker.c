#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int senha_tamanho(int senha);

int main()
{

    int senha, crack, tamanho = 0;

    printf("Insira sua senha: ");
    scanf("%d", &senha);
    tamanho = senha_tamanho(senha);

    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", i);
        if (i == senha)
        {
            crack = i;
            break;
        }
    }
    system("cls");

    printf("\nProcessando.");
    sleep(1);

    printf("\nProcessando..");
    sleep(1);

    printf("\nProcessando...");
    sleep(1);

    printf("\nProcessando.");
    sleep(1);

    printf("\nProcessando..");
    sleep(1);

    printf("\nProcessando...");
    sleep(1);

    printf("\n\nConcluido!");
    sleep(2);
    system("cls");

    printf("\nsua senha e: %d", crack);
}

int senha_tamanho(int senha)
{
    int contador = 0;

    if (senha == 0)
        contador = 1;
    else
        while (senha != 0)
        {
            contador = contador + 1;
            senha = senha / 10;
        }
    contador = pow(10, contador);
    return contador;
}