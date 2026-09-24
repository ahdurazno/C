//Exercício de fixação

/*Faça um programa em linguagem C que leia um valor em reais (R$) e a 
cotação atual do dólar (US$). O programa deve calcular e mostrar quantos 
dólares a pessoa pode comprar com aquele valor.
- O consumo médio é calculado pela fórmula: Valor em dólar = reais / cotação*/

#include <stdio.h>
int main()
{
    float reais, cotacao_dolar, dolar;
    printf ("Digite qual o valor em reais você possui: ");
    scanf ("%f", &reais);
    printf ("Qual a cotação do dólar hoje?: ");
    scanf ("%f", &cotacao_dolar);
    dolar = reais / cotacao_dolar;
    printf ("\nCom R$%.2f, você pode comprar US$%.2f", reais, dolar);
    return 0;
}