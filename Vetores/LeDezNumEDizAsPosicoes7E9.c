#include <stdio>
int main ()
{
    int i;
    float notas[10];
    for (i = 0; i <= 9; i++)
    {
        printf ("Digite uma nota: ");
        scanf ("%f", &notas[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        if (i == 7)
            printf ("Na posição %d tem a nota %.1f \n", i, notas[i]);
        else if (i == 9)
            printf ("Na posição %d tem a nota %.1f", i, notas[i]);
    }
    return 0;
}

//Vetor For If Elseif