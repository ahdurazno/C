#include <stdio.h>
int main ()
{
    float distancia, litros, consumo;
    printf ("Digite a distancia percorrida: ");
    scanf ("%f", &distancia);
    printf ("Digite a quantidade de litros gastos: ");
    scanf ("%f", &litros);
    consumo = distancia / litros;
    printf ("\nO consumo médio é de %.2f km/l", consumo);
    return 0;
}