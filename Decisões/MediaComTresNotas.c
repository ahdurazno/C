#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    printf ("Forneça as 3 notas: \n");
    scanf ("%f %f %f", &n1, &n2, &n3);
    media = (n1+n2+n3)/3;
    if (media >=7)
    {
        printf ("\nO aluno com as notas %.2f %.2f %.2f foi aprovado com nota: %.2f",n1, n2, n3, media);
    }
    else
    {
        printf ("\nO aluno com as notas %.2f %.2f %.2f foi reprovado com nota: %.2f",n1, n2, n3, media);
    }
    return 0;
}