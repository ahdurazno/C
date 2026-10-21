#include <stdio.h>
int main ()
{
    float temperatura;
    printf ("Qual a temperatura atual da agua?: ");
    scanf ("%f", &temperatura);
    if (temperatura > 0 && temperatura < 100)
        printf ("A agua esta em estado liquido!");
    return 0;
}

//If