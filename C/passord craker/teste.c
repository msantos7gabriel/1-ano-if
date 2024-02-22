int main(void)
{
    int contaDigitos = 0, valor;
    scanf("%d", &valor);
    if (valor == 0)
        contaDigitos = 1;
    else
        while (valor != 0)
        {
            contaDigitos = contaDigitos + 1;
            printf("\nantes Valor: %d ", valor);
            valor = valor / 10;
            printf("\ndps Valor: %d ", valor);
            printf("\n");
        }
    printf("%d\n", contaDigitos);
    return 0;
}