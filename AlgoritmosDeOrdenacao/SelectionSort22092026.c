#include <stdio.h> //Inclui a biblioteca padrão para usar printf()
int main () //Função principal do programa
{
    int x[] = {4, 2, 7, 1}; //Cria o vetor x com os elementos 4, 2, 7 e 1
    int n = 4; //Armazena a quantidade de elementos do vetor
    int i, j, menor, temp; //Declara as variáveis que serão usadas no algoritmo

    for (i = 0; i < n - 1; i++) { // Percorre o vetor, posição por posição
        menor = i; //Assume que o menor elemento está na posição atual

        for (j = i + 1; j < n; j++) { // Procura um elemento menor nas posições seguintes
            if (x[j] < x[menor]) { // Verifica se o elemento atual é menor que o menor encontrado
                menor = j; // Atualiza a posição do menor elemento
            }
        }

        temp = x[i]; // Guarda temporariamente o elemento da posição atual
        x[i] = x[menor]; //Coloca o menor elemento na posição atual
        x[menor] = temp; // Coloca o elemento antigo na posição do menor
    } // Fim do primeiro for

    printf("Vetor Ordenado: "); // Exibe uma mensagem antes do vetor

    for (i = 0; i < n; i++) { // Percorre o vetor já ordenado
        printf ("%d ", x[i]); // Imprime cada elemento do vetor
    } //Fim do último for

    printf("\n"); //Pula para a próxima linha
    return 0; // Indica que o programa terminou corretamente
} // Fim da função main