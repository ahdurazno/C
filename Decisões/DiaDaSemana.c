#include <stdio.h>
int main()
{
    int valor;
    printf("Digite o numero da semana: ");
    scanf("%d",&valor);
    switch (valor)
    {
        case 1:
          printf("\nDomingo");
          break;
        case 2:
          printf("\nSegunda-Feira");
          break;
        case 3:
          printf("\nTerça-Feira");
          break;
        case 4:
          printf("\nQuarta-Feira");
          break;
        case 5:
          printf("\nQuinta-Feira");
          break;
        case 6:
          printf("\nSexta-Feira");
          break;
        case 7:
          printf("\nSábado");
        default:
          printf("\nDIA INEXISTENTE");
          break;
    }
    return (0);
}