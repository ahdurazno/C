#include <stdio.h>
int main ()
{
    int num;
    printf ("Digite um número inteiro: ");
    scanf ("%d", &num);
    do
    {
        printf ("%d", &num);
        num--;
    }
    while (num >= 0);
    return 0;
}

//Do While