//Exercício de fixação de Algoritmos e Praticas de Programação. Linguagem C. 13/03/2026

/*Faça um programa que calcule e exiba na tela a soma e o produto de dois 
números reais, sendo um deles 91,37 e o outro 7,351. Exiba o resultado na tela*/

#include <stdio.h> //inclusão da biblioteca digital
#define n1 91.37 //
#define n2 7.351 //

int main ()
{
    printf("Fazendo calculo com constantes \n\n"); //exibe na tela o texto que está entre aspas
    float soma, produto; //
    soma = n1+n2; //
    produto = n1*n2; //
    printf ("Resultado da soma: %0.3f \n", soma); //
    printf ("Resultado da multiplicação: %0.3f \n", produto); //
    return 0; //
}