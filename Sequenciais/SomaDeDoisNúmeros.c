/*Aula 3 ALP - Soma de dois números
13/03/2026 - Estrutura Sequencial*/

#include <stdio.h>
int main()
{
    int n1, n2, resultado;
    printf ("Digite o primeiro valor: ");
    scanf ("%d", &n1);
    printf ("\nDigite o segundo valor: ");
    scanf ("%d", &n2);
    resultado = n1 + n2;
    printf ("\n O resultado da soma é: %d.", resultado);
    return 0;
}