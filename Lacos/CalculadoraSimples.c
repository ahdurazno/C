#include <stdio.h>
int main ()
{
    float a, b;
    char op;
    do
    {
        printf ("CALCULADORA - Você vai digitar + para soma, - para subtração, * para multiplicação, / para divisão e $ para sair \n");
        printf ("Qual operação você deseja somar?: ");
        scanf ("%c", &op);
        printf ("Digite os 2 números que você deseja somar: ");
        scanf ("%f %f", &a, &b);
        switch (op)
        {
            case '+': printf ("\nSOMA: %.2f \n\n", a+b); break;
            case '-': printf ("\nSUBTRAÇÃO: %.2f \n\n", a-b); break;
            case '*': printf ("\nMULTIPLICAÇÃO: %.2f \n\n", a*b); break;
            case '/':
                if (b==0)
                {
                    printf ("Impossivel divir por zero! \n\n");
                    break;
                }
                printf ("\nDIVISÃO: %.2f \n\n", a/b); break;
            default: printf ("\nOperador Inválido! \n\n"); break;
        }
    }
    while (op != '$');
    return 0;
}