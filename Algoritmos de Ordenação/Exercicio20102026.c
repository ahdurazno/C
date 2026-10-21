#include <stdio.h>
#include <conio.h>

#define FALSO 0
#define VERDADEIRO 1
#define N 10

int vet[N+1];
int i, k, achou;

int main()
{
    printf("\n--- Sistema de Pesquisa de Codigos de Livros ---\n");

    printf("\nForneca os 10 codigos de livros cadastrados no sistema:\n");

    for (i = 1; i <= N; i++)
    {
        printf("Livro [%d] = ", i);
        scanf("%d", &vet[i]);
    }

    while (VERDADEIRO)
    {
        printf("\nDigite o codigo do livro a ser procurado (ou 0 para sair): ");
        scanf("%d", &k);

        if (k == 0)
        {
            printf("\nEncerrando a pesquisa...\n");
            break; 
        }

        achou = FALSO;
        i = 1;

        while (achou == FALSO && i <= N)
        {
            if (vet[i] == k)
            {
                printf("\nO livro com o codigo %d foi encontrado na posicao %d do vetor! \n", k, i);
                achou = VERDADEIRO;
            }
            else
                ++i;
        }
        
        if (achou == FALSO)
            printf("\nAviso: O livro com o codigo %d nao foi localizado no sistema. \n", k);
    }

    printf("\n\nFim Do Programa\n");
    
    getch();
    
    return 0;
}