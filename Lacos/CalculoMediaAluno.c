#include <stdio.h>
int main()
{
    int cont = 1;
    float media, n1, n2, n3;
    do
    {
        printf ("Digite a primeira nota: ");
        scanf ("%f", &n1);
        printf ("Digite a segunda nota: ");
        scanf ("%f", &n2);
        printf ("Digite a terceira nota: ");
        scanf ("%f", &n3);
        media = (n1 + n2 + n3)/3; //calculo da media realizada
        printf("Média do aluno %d = %.1f \n\n", cont, media);
        cont++;
    }
    while (cont <= 3);
    return 0;
}