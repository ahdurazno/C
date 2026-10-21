#include <stdio.h>
int main ()
{
	int num, cont, resultado;
	char opcao;
	do
	{
		printf ("Qual tabuada voce quer fazer?: ");
		scanf ("%d", &num);
		cont = 0;
		while (cont <= 10)
		{
			resultado = cont * num;
			printf ("%d x %d = %d \n", num, cont, resultado);
			cont++;
		}
		printf ("Deseja ver outra tabuada? (s/n): ");
		scanf ("%c", &opcao);
	}
	while (opcao == 's' || opcao == 'S');
	return 0;
}
