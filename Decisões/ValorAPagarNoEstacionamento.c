#include <stdio.h>
int main ()
{
    int ent, sai, tempo;
    float valor;
    printf ("Hora de entrada: ");
    scanf ("%d", &ent);
    printf ("Hora de saida: ");
    scanf ("%d", &sai);
    if ((ent >=8 && ent <=18) && (sai>=8 && sai <=18) && (ent <=sai))
    {
        tempo = sai - ent;
        if ((tempo == 1) || (tempo == 0))
            valor = 8;
        else
            if (tempo == 2)
                valor = 15;
            else
                valor = tempo * 5;
        printf ("\nValor a ser pago: R$ %.2f", valor);
    }
    else
        printf ("\nA hora digitada está incorreta");
    return 0;
}

// If Else