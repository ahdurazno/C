#include <stdio.h>

int main()
{
    int numero;
    printf ("Digite um número: \n");
    scanf ("%d", &numero);
    if (numero >=0)
    {
        printf ("\nO número %d é um número positivo", numero);
    }
    else
    {
        printf ("\nO número %d é número negativo", numero);
    }
    return 0;
}