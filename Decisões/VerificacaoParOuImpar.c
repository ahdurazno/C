//ATIVIDADE EXERCÍCIO - 20_03_2026
//Faça um programa em C para verificar se um número que o usuário digitou é par ou ímpar e mostrar isso na template

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    printf ("Forneça um número para saber se é Par ou ímpar \n");
    int n1;
    scanf ("%d", &n1);
    if (n1%2 == 0)
        printf ("\nO número %d é Par", n1);
    else
        printf ("\nO número %d é Ímpar", n1);
    return 0;
    
}