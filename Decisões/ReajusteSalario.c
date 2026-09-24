#include <stdio.h>
#include <locale.h>
int main ()
{
    setlocale (LC_ALL, "Portuguese");
    float sal_ant, aumento, sal_novo;
    printf ("Digite o salário atual: ");
    scanf ("%f", &sal_ant);
    if (sal_ant <= 280)
    {
        aumento = sal_ant * 0.20;
        sal_novo = sal_ant + aumento;
        printf ("\nO salário anigo é: R$ %0.2f", sal_ant);
        printf ("\nO reajuste é de 20 porcento");
        printf ("\nO valor do aumento é de R$ %0.2f", aumento);
        printf ("\nO salário novo é: R$ %0.2f", sal_novo);
    }
    else if (sal_ant > 280 && sal_ant <= 700)
    {
        aumento = sal_ant * 0.15;
        sal_novo = sal_ant + aumento;
        printf ("\nO salário anigo é: R$ %0.2f", sal_ant);
        printf ("\nO reajuste é de 15 porcento");
        printf ("\nO valor do aumento é de R$ %0.2f", aumento);
        printf ("\nO salário novo é: R$ %0.2f", sal_novo);
    }
    else if (sal_ant > 700 && sal_ant <= 1500)
    {
        aumento = sal_ant * 0.10;
        sal_novo = sal_ant + aumento;
        printf ("\nO salário anigo é: R$ %0.2f", sal_ant);
        printf ("\nO reajuste é de 10 porcento");
        printf ("\nO valor do aumento é de R$ %0.2f", aumento);
        printf ("\nO salário novo é: R$ %0.2f", sal_novo);
    }
    else
    {
        aumento = sal_ant * 0.05;
        sal_novo = sal_ant + aumento;
        printf ("\nO salário anigo é: R$ %0.2f", sal_ant);
        printf ("\nO reajuste é de 5 porcento");
        printf ("\nO valor do aumento é de R$ %0.2f", aumento);
        printf ("\nO salário novo é: R$ %0.2f", sal_novo);
    }
}

//If Else Elif