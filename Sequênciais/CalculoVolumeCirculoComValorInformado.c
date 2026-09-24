//Exercício de fixação Algoritmos e Logica de Programação 13_03_2026

/*Fazer um programa que solicite ao usuário um número inteiro, que 
erá o raio de um círculo, e exibir o volume desse círculo.
- Fórmula: V = π ∗ r3
- Função: pow(variável, expoente)*/

#include <stdio.h> //inclusão da biblioteca
#include <math.h> //inclusão da biblioteca matemática
#define PI 3.14 //PI passa a valer 3.14
int main ()
{
    printf("Calculando o volume de um circulo \n\n"); //Exibe o texto na tela
    float vol, raio; //float declara as variáveis de valor real
    printf("Qual o raio do circulo? "); //Pergunta ao usuário o valor do raio do círculo
    scanf("%f", &raio); //Lê a resposta do usuário
    vol=PI*pow(raio,3); //Processa o valor do volume de acordo com a fórmula
    printf ("\nO volume do circulo é: %0.2f \n", vol); //Responde ao usuário o valor do volume do círculo
    return 0; //fim do código
}