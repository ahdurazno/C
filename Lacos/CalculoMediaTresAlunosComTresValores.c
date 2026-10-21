#include <stdio.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int cont = 1;
    float media, n1, n2, n3;
    while (cont <= 3)
    {
        printf ("Digite a primeira nota: ");
        scanf ("%f", &n1);
        printf ("Digite a segunda nota: ");
        scanf ("%f", &n1);
        printf ("Digite a terceira nota: ");
        scanf ("%f", &n1);
        media = (n1 + n2 + n3)/3;
        printf("Media do aluno %d = %.1f \n\n", cont, media);
        cont++;
    }
    return 0;
}