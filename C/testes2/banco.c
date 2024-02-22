#include <stdio.h>

double adicao(double deposito, double saldo);
double subtracao(double saque, double saldo);

int main()
{

    double saque, deposito;
    static double saldo = 0;
    int operacao;

    printf("\nDepositar: [1]\n");
    printf("Sacar: [2]\n");
    scanf("%d", &operacao);

    if (operacao == 1)
    {
        saldo = adicao(deposito, saldo);
    }
    else if (operacao == 2)
    {
        saldo = subtracao(saque, saldo);
    }
    else
    {
        printf("\n%d não e uma operaçao valida", operacao);
        main();
    }
    main();
}

double adicao(double deposito, double saldo)
{
    double resultado;
    printf("Digite o valor a ser depositado: ");
    scanf("%lf", &deposito);
    resultado = saldo + deposito;
    printf("\nSeu saldo final = R$%.2lf", resultado);
    return resultado;
}

double subtracao(double saque, double saldo)
{
    double resultado;
    printf("\nDigite o valor a ser sacado: ");
    scanf("%lf", &saque);
    resultado = saldo - saque;
    printf("Seu saldo final = R$%.2lf", resultado);
    return resultado;
}
