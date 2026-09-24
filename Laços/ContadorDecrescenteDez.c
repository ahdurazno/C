#include <stdio.h>
int main()
{
    int contador = 1; //declarando e inicializando a variavel de controle
    while (contador <= 10) //testando a condição
    { //abertura da estrutura de repetição
        printf("%d", contador); //executando um comando dentro do laço
        contador++; //atualizando a variavel de controle
    } //fechamento da estrutura de repetição
    return 0;
}