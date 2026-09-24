#include <stdio.h>
int main ()
{
    float temperat;
    printf ("Escreva uma temperatura: \n");
    scanf ("%f", &temperat);
    if (temperat < 10)
    {
        printf("A temperatura %.2f é muito frio, brrr", temperat);
    }
    else if (temperat >= 10 && temperat <= 25 )
    {
        printf ("A temperatura %.2f é uma temperatura ideal, que fresquinho!", temperat);
    }
    else
    {
        printf ("A temperatura %.2f é muito quente, uff", temperat);
    }
    return 0;
}

//IF Else Elif