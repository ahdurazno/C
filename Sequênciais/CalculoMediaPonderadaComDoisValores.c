//Exercício de fixação 13_03_2026
/*Faça um programa que tenha como entrada de dados duas notas de um aluno, calcule e 
apresente a média ponderada, sabendo que a primeira nota tem peso 2,5 e a segunda nota 
tem peso 4,5.
- Fazer o cálculo de 2 maneiras:
pedindo as 2 notas de uma vez e
pedindo a primeira nota e depois a
segunda nota*/

#include <stdio.h>
#define P1 2.5
#define P2 4.5
int main ()
{
    printf("Calculando a média ponderada de um aluno \n\n"); //
    float n1, n2, media; //
    printf("Digite a primeira nota: "); //
    scanf("%f", &n1); //
    printf("Digite a segunda nota: "); //
    scanf("%f", &n2); //
    media=((n1*P1)+(n2*P2))/(P1+P2); //
    printf("\nA media ponderada é: %0.2f \n", media); //
    return 0; //
}