// Biblioteca responsável pelas funções de entrada e saída,
// como printf() e scanf()
#include <stdio.h>
// Biblioteca que permite utilizar funções do sistema,
// como system()
#include <stdlib.h>

// Define uma constante chamada MAX com valor 10,
// representando a capacidade máxima da fila
#define MAX 10

// Protótipo da função que realizará as operações da fila
void operafila(void);

// Declaração do vetor que armazenará os elementos da fila
int elementos[MAX];
// Variável que indica o início da fila
int inicio = 0;
// Variável que indica o final da fila
int fim = 0;
// Variável auxiliar usada para armazenar a quantidade de elementos
int i = 0;

// Função principal do programa
int main(void)
{
    // Inicializa a posição inicial da fila
    inicio = 0;
    // Inicializa a posição final da fila
    fim = 0;
    // Reinicializa a quantidade de elementos da fila
    i = 0;
    // Chama a função que controla as operações da fila
    operafila();
    // Finaliza o programa com sucesso
    return 0;
}

// Função auxiliar para limpar a tela em Windows ou Linux/macOS
void limpaTela(void)
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Função responsável pelo menu e operações da fila
void operafila(void)
{
    // Variável que armazenará a opção escolhida no menu
    int opc = 0;
    // Variável auxiliar usada na listagem dos elementos
    int a = 0;
    // Variável usada para limpar o buffer do teclado
    int c;

    do
    {
        limpaTela();
        printf("1 - Inclui elemento na fila\n");
        printf("2 - Exclui elemento da fila\n");
        printf("3 - Lista fila\n");
        printf("0 - Sair da fila\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opc);

        while ((c = getchar()) != '\n' && c != EOF)
        {
            // limpa o buffer do teclado
        }

        switch (opc)
        {
            case 1:
                if (i >= MAX)
                {
                    printf("Numero maximo de elementos atingido\n");
                }
                else
                {
                    printf("Digite o %d elemento da fila: ", i + 1);
                    scanf("%d", &elementos[fim]);
                    fim++;
                    i++;
                }
                break;

            case 2:
                if (i == 0)
                {
                    printf("A fila esta vazia.\n");
                }
                else
                {
                    printf("Elemento removido: %d\n", elementos[inicio]);
                    for (a = 0; a < i - 1; a++)
                    {
                        elementos[a] = elementos[a + 1];
                    }
                    fim--;
                    i--;
                }
                break;

            case 3:
                if (i == 0)
                {
                    printf("Fila vazia.\n");
                }
                else
                {
                    for (a = 0; a < i; a++)
                    {
                        printf("%d elemento: %2d\n", a + 1, elementos[a]);
                    }
                }
                printf("\nPressione ENTER para continuar...");
                while ((c = getchar()) != '\n' && c != EOF)
                {
                    // espera pela tecla Enter
                }
                break;

            case 0:
                printf("Saindo da fila...\n");
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }

        printf("\n");
        if (opc != 0)
        {
            printf("Pressione ENTER para continuar...");
            while ((c = getchar()) != '\n' && c != EOF)
            {
                // espera pela tecla Enter
            }
        }

    } while (opc != 0);
}