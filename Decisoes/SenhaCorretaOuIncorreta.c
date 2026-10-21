#include <stdio.h>
int main ()
{
    int senha;
    printf ("Digite a senha correta: ");
    scanf ("%d", &senha);
    if (senha == 1234)
        printf ("Acesso permitido!");
    else
        printf ("Acesso negado!");
    return 0;
}

//If Else