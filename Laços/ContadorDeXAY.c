#include <stdio.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    printf ("Digite o primeiro número: ");
    scanf ("%d", &a);
    printf ("Digite o segundo número: ");
    scanf("%d", &b);
    if (a > b)
        printf ("\nO primeiro número deve ser menor que o segundo!");
    else
        while (a <= b)
        {
            printf("%d \n", a);
            a++;
        }
        return 0;
}