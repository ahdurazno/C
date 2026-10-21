#include <stdio.h>
int main ()
{
    int n1, n2;
    printf ("Digite 2 números inteiros: \n");
    scanf ("%d %d", &n1, &n2);
    if (n1 == n2)
    {
        printf("\nOs números são iguais");
    }
    else if (n1 > n2)
    {
        printf ("\nO número %d é maior", n1);
    }
    else
    {
        printf ("O número %d é maior", n2);
    }
    return 0;
}