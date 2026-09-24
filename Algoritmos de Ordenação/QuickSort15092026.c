# include <stdio.h>        // Inclui a biblioteca padrão de entrada e saída (printf, scanf, etc.)
# include <conio.h>        // Inclui a biblioteca conio.h (usada para getch)
# define MAX 23          // Define uma constante MAX como 23 (tamanho fixo do vetor)

// Função que implementa o algoritmo de ordenação QuickSort
void quick ( int v [ MAX ], int primeiro, int ultimo ) {
     int inicio, fim, meio, pivo, aux ;   // Variáveis auxiliares usadas no algoritmo
     
     inicio = primeiro ;                  // Marca o início do subvetor
     fim = ultimo ;                       // Marca o fim do subvetor
     meio = ( inicio + fim ) / 2 ;        // Calcula o índice central
     pivo = v [ meio ] ;                  // Define o pivô como o elemento do meio
     
     while ( inicio <= fim ) {             // Loop enquanto os ponteiros não se cruzam
          while ( v [ inicio ] < pivo )   // Avança o ponteiro da esquerda enquanto menor que o pivô
               inicio++ ;
          while ( v [ fim ] > pivo )      // Recua o ponteiro da direita enquanto maior que o pivô
               fim-- ;
         
          if ( inicio <= fim ) {           // Se ainda não cruzaram, troca os elementos
               aux = v [ inicio ] ;       // Salva temporariamente v[inicio]
               v [ inicio++ ] = v [ fim ] ; // Move v[fim] para v[inicio] e avança inicio
               v [ fim-- ] = aux ;        // Coloca o valor salvo em v[fim] e recua fim
          }
     }
     
     if ( inicio == fim ) {               // Ajuste se os índices se encontram
          inicio++ ;
          fim-- ;
     }
     
     if ( fim > primeiro )                // Chamada recursiva para ordenar a metade esquerda
          quick ( v, primeiro, fim ) ;
     
     if ( inicio < ultimo )               // Chamada recursiva para ordenar a metade direita
          quick ( v, inicio, ultimo ) ;
}

// Função principal
int main ( ) {
     // Vetor de 23 posições, inicializado com valores desordenados
     int i, vetor [ MAX ] = { 47, 8, 92, 31, 65, 14, 76, 53, 2, 88, 39, 22, 59, 97, 45, 70, 11, 83, 26, 61, 35, 5, 72 };
     printf ("\nVetor Desordenado: \n47, 8, 92, 31, 65, 14, 76, 53, 2, 88, 39, 22, 59, 97, 45, 70, 11, 83, 26, 61, 35, 5, 72");
     
     quick ( vetor, 0, MAX-1 ) ;           // Chama QuickSort para ordenar o vetor inteiro
     
     printf ( "\n\nVetor Ordenado:\n" ) ; // Exibe mensagem de título
     
     for ( i = 0; i < MAX; i++ )          // Percorre o vetor
          printf ( "%d ", vetor [ i ] ) ; // Imprime cada elemento já ordenado
     
     getch ( ) ;                          // Aguarda o usuário pressionar uma tecla
     return 0 ;                           // Finaliza o programa
}