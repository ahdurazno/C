#include <stdio.h>
int main ()
{
    int cont, idade, maior = 0;
    for (cont = 1; cont <= 10; cont++)
    {
        printf ("Digite a idade: ");
        scanf ("%d", &idade);
        if (idade >= 18)
            maior++;
    }
    printf ("%d pessoas são maiores de 18 anos!", maior);
    return 0;
}

//If For