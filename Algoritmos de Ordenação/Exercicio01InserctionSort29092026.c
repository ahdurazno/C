#include <stdio.h>

void imprimirVetor(int item[], int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        printf("%d ", item[i]);
    }
}

void insert(int item[], int count)
{
    int a, b;
    int t;

    printf("\nVetor inicial:\n");
    imprimirVetor(item, count);

    for (a = 1; a < count; a++)
    {
        t = item[a];

        for (b = a - 1; b >= 0 && t < item[b]; b--)
        {
            item[b + 1] = item[b];
        }

        item[b + 1] = t;
        printf("\n\nEstado do vetor depois da insercao:\n");
        imprimirVetor(item, count);
    }

    printf("\n\nVetor final ordenado:\n");
    imprimirVetor(item, count);
}

int main()
{
    int tamanho;
    int vetor[100];
    int i;

    do
    {
        printf("Digite o tamanho do vetor (entre 10 e 100): ");
        scanf("%d", &tamanho);

        if (tamanho < 10 || tamanho > 100)
        {
            printf("Tamanho invalido! Digite um valor entre 10 e 100.\n");
        }
    } while (tamanho < 10 || tamanho > 100);

    printf("Digite os %d numeros:\n", tamanho);

    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }

    insert(vetor, tamanho);

    return 0;
}