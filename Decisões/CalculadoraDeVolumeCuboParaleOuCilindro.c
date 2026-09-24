#include <stdio.h>
#include <locale.h>
int main ()
{
    setlocale (LC_ALL, "Portuguese");
    int solido_geometrico;
    printf ("Qual volume deseja calcular?:\n ");
    printf ("Para cubo digite 1 \n");
    printf ("Para paralelepípedo digite 2 \n");
    printf ("Para cilindro digite 3 \n");
    scanf ("%d", &solido_geometrico);
    switch (solido_geometrico)
    {
        case 1:
            printf ("\nVocê escolheu a opção 1: Cubo");
            float lado, volume_cubo;
            printf ("\nInforme a medida do lado em cm: ");
            scanf ("%f", &lado);
            volume_cubo = lado*lado*lado;
            printf ("\nO volume do cubo é %.1f centímetros cúbicos", volume_cubo);
            break;
        case 2:
            printf ("\nVocê escolheu a opção 2: Paralelepípedo");
            float compr, larg, altura, volume_paral;
            printf ("\nInforme o comprimento em cm: ");
            scanf ("%f", &compr);
            printf ("\nInforme a largura em cm: ");
            scanf ("%f", &larg);
            printf ("\nInforme a altura em cm: ");
            scanf ("%f", &altura);
            volume_paral = compr * larg * altura;
            printf ("\nO volume do paralelepípedo é %.1f centímetros cúbicos", volume_paral);
            break;
        case 3:
            printf ("\nVocê escolheu a opção 3: Cilindro");
            float PI, raio_base, altura_cil, volume_cil;
            PI = 3.14;
            printf ("\nInforme o raio da base em cm: ");
            scanf ("%f", &raio_base);
            printf ("Informe a altura em cm: ");
            scanf ("%f", &altura_cil);
            volume_cil = PI * (raio_base * raio_base) * altura_cil;
            printf ("\nO volume do cilindro é %.1f centímetros cúbicos", volume_cil);
            break;
        default: printf ("\nOpção Inválida!");
    }
    return 0;
}

//Switch Case