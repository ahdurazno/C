#include <stdio.h>
int main ()
{
    float nota[4];
    float media, soma = 0;
    int i;
    for (i = 0; i <= 3; i++)
    {
        printf ("Digite a nota [%d]: ", i);
        scanf ("%f", &nota[i]);
        soma = soma + nota[i];
    }
    printf ("\nAs notas são: ");
    for (i = 0; i <= 3; i++)
    {
        printf ("%.1f, ", nota[i]);
    }
    media = soma/4;
    if (media >= 7)
        printf ("\nALUNO APROVADO COM MÉDIA %.1f", media);
    else
        printf ("\n ALUNO REPROVADO COM MÉDIA %.1f", media);
    return 0;
}