#include <stdio.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float total, valor_compra;
    int codigo;
    printf ("Informe o valor total da compra: ");
    scanf ("%f", &total);
    printf ("\nDigite seu código: ");
    printf ("\n1: Cliente comum ");
    printf ("\n2: Funcionário ");
    printf ("\n3: Cliente VIP \n\n");
    scanf ("%d", &codigo);
    switch (codigo)
    {
        case 1: printf ("\nValor total a ser pago: R$ %.2f", total); 
        break;
        case 2: 
            valor_compra = total - (total * 0.1);
            printf ("\nValor total a ser pago: R$ %.2f", valor_compra);
            break;
        case 3:
            valor_compra = total - (total * 0.05);
            printf ("\nValor total a ser pago: R$ %.2f", valor_compra);
            break;
        default: printf ("\nOpção Inválida!");
    }
    return 0;
}

//Switch Case