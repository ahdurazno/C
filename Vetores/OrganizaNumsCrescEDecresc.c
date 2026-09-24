#include <stdio.h>
int main()
{
    int i, vetor[5];
    for (i = 0; i < 5; i++)
    {
        printf ("Digite um valor inteiro: ");
        scanf ("%d", &vetor[i]);
    }
    printf ("ORDEM CRESCENTE \n");
    for (i = 0; i < 5; i++)
    {
        printf ("%d ", vetor[i]);
    }
    printf ("\nORDEM DECRESCENTE \n");
    for (i = 4; i >= 0; i--)
    {
        printf ("%d ", vetor[i]);
    }
    return 0;
}