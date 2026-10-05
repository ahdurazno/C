#include <stdio.h> //biblioteca para entrada e saída (printf)
void insert (int item[], int count) //função de ordenação usando Insertion Sort
{
    int a, b; //variáveis de controle dos loops
    int t; //variável auxiliar para armazenar o valor atual

    for (a = 1; a < count; a++) //percorre o vetor a partir da segunda posição (indice 1)
    {
        t = item[a]; //guarda o elemento atual que será inserido na posição correta
        
        /*percorre os elementos anteriores enquanto:
        - não chega no início do vetor (b > 0)
        - o valor atual (t) é menor que o elemento anterior*/
        for (b = a - 1; b >= 0 && t < item[b]; b--){
            item[b + 1] = item[b]; //desloca o elemento uma posição à direita
        }
        item[b + 1] = t; //insere o valor t na posição correta
    }
}

int main()
{
    int vetor[] = {8, 4, 3, 2}; //declara e inicializa o vetor com valores desordenados
    int i; //variável para percorrer o vetor
    int tamanho = 4; //quantidade de elementos no vetor

    insert(vetor, tamanho); //chama a função para ordenar o vetor
    printf("Vetor Ordenado:\n"); //imprime a mensagem na tela

    for (i = 0; i < tamanho; i++) { //percorre o vetor já ordenado
        printf ("%d ", vetor[i]); //imprime cada elemento do vetor
    }
    return 0; //indica que o programa terminou corretamente
}