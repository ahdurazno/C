#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    do
    {
     printf ("Digite um número inteiro: ");
     scanf ("%d", &num);
    }
    while ((num >= 15) && (num <= 75));
    printf ("\n %d está fora do intervalo entre 15 e 75", num);
    return 0;
}