#include <stdio.h>
int main ()
{
    int cont;
    float media, n1, n2, n3;
    for (cont = 1; cont <=5; cont++)
    {
        printf ("Digite a primeira nota: ");
        scanf ("%f", &n1);
        printf ("Digite a segunda nota: ");
        scanf ("%f", &n2);
        printf ("Digite a terceira nota: ");
        scanf ("%f", &n3);
        media = (n1 + n2 + n3)/3;
        printf("Media do aluno %d = %.1f \n\n", cont, media);
    }
    return 0;
}