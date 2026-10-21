#include <stdio.h>
int main ()
{
    int valor;
    printf("Digite 1 para Bom dia, 2 para Boa tarde e 3 para Boa noite: ");
    scanf("%d", &valor);
    switch (valor)
    {
        case 1:
            printf ("\nBom dia!");
            break;
        case 2:
            printf ("\nBoa tarde!");
            break;
        case 3:
            printf ("\nBoa noite!");
            break;
        default:
            printf ("\nNúmero inválido");
            break;
    }
    return 0;
}