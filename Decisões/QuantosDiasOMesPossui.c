#include <stdio.h>
int main ()
{
    int mes, ano;
    printf("Digite o mês escolhido (entre 1 a 12): ");
    scanf("%d", &mes);
    if ( (mes==1) || (mes==3) || (mes==5) || (mes==7) || (mes==8) || (mes==10) || (mes==12) )
        printf ("\nEsse mês tem 31 dias");
    else 
        if ( (mes==4) || (mes==6) || (mes==9) || (mes==11) )
            printf ("\nEsse mês possui 30 dias");
    else
        if (mes==2)
        {
            printf ("\nDigite o ano com 4 dígitos: ");
            scanf ("%d", &ano);
            if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)))
                printf ("\nEsse mês tem 29 dias");
            else
                printf ("\nEsse mês tem 28 dias");
        }
    else
        printf ("\nMês Inválido");
    return 0;
}