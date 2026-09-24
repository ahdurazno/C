#include <stdio.h>
int main()
{
    float salario, novo_salario;
    printf("Qual é o salário atual? ");
    scanf ("%f", &salario);
    if (salario <= 2000)
    {
        novo_salario = salario * 1.3;
    }
    else
    {
        novo_salario = salario * 1.1;
    }
    printf ("\nO novo salário é R$ %.2f ", novo_salario);
    return 0;
}