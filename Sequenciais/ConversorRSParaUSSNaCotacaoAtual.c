#include <stdio.h>
int main ()
{
    float reais, cotacao_dolar, dolar;
    printf ("Digite qual o valor em reais que você possui: ");
    scanf ("%f", &reais);
    printf ("Qual a cotação do dolar hoje?: ");
    scanf ("%f", &cotacao_dolar);
    dolar = reais / cotacao_dolar;
    printf ("\nCom R$ %.2f você pode comprar US$ %.2f", reais, dolar);
    return 0;
}

//Estrutura Sequencial