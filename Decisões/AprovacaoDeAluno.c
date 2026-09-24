#include <stdio.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, n4, media;
    printf ("Forneça as 4 notas: \n");
    scanf ("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = (n1+n2+n3+n4)/4;
    if (media >=7)
    {
        printf ("\nAluno aprovado com nota: %.2f", media);
    }
    else
    {
        printf ("\nAluno reprovado com nota: %.2f", media);
    }
    return 0;
}