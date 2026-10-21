#include <stdio.h>
int main ()
{
    int num;
    printf ("Digite 1 número: \n");
    scanf ("%d", &num);
    if (num > 0)
    {
        num +=10;
        printf("\nOs número atualizado será %d", num);
    }
    else if (num < 0)
    {
        num *= 5;
        printf ("\nO número atualizado será %d", num);
    }
    else (num == 0);  
    {
        num -= 2;
        printf ("O número atualizado será %d", num);
    }
    return 0;
}