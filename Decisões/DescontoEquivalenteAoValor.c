#include <stdio.h>
int main ()
{
    float valor, valor_desc, valor_final;
    printf ("Digite o valor da compra: \n");
    scanf ("%f", &valor);
    if (valor <= 100)
    {
        valor_desc = valor * 0.05;
    } 
    else if (valor > 100 && valor <= 500)
    {
        valor_desc = valor * 0.10;
    }
    else
    {
        valor_desc = valor * 0.15;
    }
    valor_final = valor - valor_desc;
    printf("\nO valor inicial da compra é R$%.2f", valor);
    printf("\nO valor de desconto aplicado é R$%.2f", valor_desc);
    printf("\nO valor final da compra é R$%.2f", valor_final);
    return 0;
}

//If Else Elif