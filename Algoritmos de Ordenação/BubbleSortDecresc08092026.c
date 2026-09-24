#include <stdio.h>
int main ()
{
    int notas[8] = {125, 78, 210, 95, 160, 45, 132, 87}; // vetor que armazenará as notasdos alunos
    int i, j, temp; // variáveis auxiliares
    printf ("Notas antes da ordenacao: \n"); //exibe as notas antes da ordenação
    for (i = 0; i < 8; i++) //percorre o vetor exibindo os valores originais
    {
        printf("%d ", notas[i]); // %d -> especificador de formato (máscara)
    }
    printf ("\n\n");
    
    /*
    Implementação do algoritmo Bubble sort
    
    O Bubble Sort funciona comparando dois elementos vizinhos 
    e trocando suas posições caso estejam fora de ordem.
    
    A cada passagem pelo vetor, o maior valor "sobe" para
    o final da lista.
    */
    
    //Laço externo controla o número de passagens pelo vetor
    for (i = 0; i < 7; i++)
    {
        //Laço interno realiza as comparações entre elementos vizinhos
        for (j = 0; j < 7 - i; j++)
        {
            //Verifica se o elemento atual é maior que o próximo
            if (notas[j] < notas[j + 1]){
                temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }
    
    //Exibe as notas após a ordenacao
    printf("Notas depois da ordenacao (Decrescente): \n");
    
    //Percorre o vetor já ordenado e exibe os valores
    for (i = 0; i < 8; i++)
    {
        printf ("%d ", notas[i]);
    }
    
    printf("\n");
    return 0;
}