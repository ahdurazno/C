#include <stdio.h>
int main ()
{
    float vet1[5] = {33, 21, 45, 13, 3};
    float vet2[5] = {8, 4, 16, 28, 12};
    float vet3[5], soma, media;
    int i;
    soma = 0;
    for (i = 0; i < 5; i++)
    {
        vet3[i] = (vet1[i] + vet2[i]) / 2;
        soma = soma + vet3[i];
    }
    media = soma / 5;
    for (i = 0; i < 5; i++)
    {
        printf ("Na posição %d do vetor 3 tem o valor %.1f \n", i, vet3[i]);
    }
    printf ("A média dos valores do vetor 3 é %.1f", media);
    return 0;
}