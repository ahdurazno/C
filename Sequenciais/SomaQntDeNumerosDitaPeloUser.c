#include <stdio.h>
int main()
{
    int cont, num, num2, soma;
    soma = 0;
    printf ("Quantos números você deseja somar? ");
    scanf ("%d", &num);
    for (cont = 1; cont <= num; cont++)
    {
        printf ("Digite um número inteiro: ");
        scanf ("%d", &num2);
        soma = soma + num2;
    }
    printf ("A soma total é: %d", soma);
    return 0;
}