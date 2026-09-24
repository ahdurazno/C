#include <stdio.h>
int main ()
{
    int idade;
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);
    if (idade <= 17 )
    {
        printf ("Você é menor de idade!\nSua idade: %d", idade);
    }
    else
    {
        printf ("Voce é maior de idade!\nSua idade: %d", idade);
    }
    return 0;
}