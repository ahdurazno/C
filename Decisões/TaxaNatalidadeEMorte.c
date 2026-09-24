#include <stdio.h>
#include <locale.h>
int main ()
{
    setlocale (LC_ALL, "Portuguese");
    float tx_nat, tx_mort, habit, obitos, nasc;
    char op;
    printf ("Digite 1 para a taxa de natalidade ou 2 para a taxa de mortalidade \n\n");
    scanf ("%c", &op);
    switch (op)
    {
        case '1':
            printf ("Digite o número de nascimentos: ");
            scanf ("%f", &nasc);
            printf ("\nDigite o número de habitantes: ");
            scanf ("%f", &habit);
            tx_nat = (nasc * 1000)/habit;
            printf ("\n\nA Taxa de Natalidade é: %.2f", tx_nat);
            break;
        case '2':
            printf ("Digite o número de óbitos: ");
            scanf ("%f", &obitos);
            printf ("\nDigite o número de habitantes: ");
            scanf ("%f", &habit);
            tx_mort = (obitos * 1000)/habit;
            printf ("\n\nA Taxa de mortalidade é: %.2f", tx_mort);
            break;
        default: printf ("Opção Inválida");
    }
    return 0;
}

//Switch Case