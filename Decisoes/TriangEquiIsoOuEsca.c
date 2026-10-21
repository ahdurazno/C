#include <stdio.h>
int main ()
{
    int a, b, c;
    printf ("Digite o primeiro lado: ");
    scanf ("%d", &a);
    printf ("Digite o segundo lado: ");
    scanf ("%d", &b);
    printf ("Digite o terceiro lado: ");
    scanf ("%d", &c);
    if ((a < b + c) && (b < a + c) && (c < a + b))
    {
        if (a==b && b==c && c==a)
        {
            printf ("\nTriângulo equilátero");
        }
        else if (a==b || b==c || c==a)
        {
            printf ("\nTriângulo isósceles");
        }
        else if (a!=b && b!=c && c!=a)
            printf ("\nTriângulo escaleno");
    }
    else
        printf ("\nEsses valores não formam um triângulo");
    return 0;
}