#include <stdio.h>
int main ()
{
    char codigo;
    int cont;
    float valor, vista, prazo, total;
    valor = vista = prazo = total = 0;
    for (cont = 1; cont <= 15; cont++)
    {
        printf ("Qual a forma de pagamento (V para a vista e P para parcelado): ");
        scanf ("%c", &codigo);
        if (codigo == 'v' || codigo == 'V')
        {
            printf ("Qual o valor da compra? ");
            scanf ("%f", &valor);
            vista = vista + valor;
            total = total + valor;
        }
        else
            if (codigo == 'p' || codigo == 'P')
            {
                printf ("Qual o valor da compra? ");
                scanf ("%f", &valor);
                prazo = prazo + valor;
                total = total + valor;
            }
            else
                printf ("Forma de pagamento inválida, pedido não foi concluido! \n");
    }
    printf ("O valor total das compras a vista é: %.2f \n", vista);
    printf ("O valor total das compras parcelado é: %.2f \n", prazo);
    printf ("O valor total das compras é: %.2f \n", total);
    return 0;
}

//For If Else