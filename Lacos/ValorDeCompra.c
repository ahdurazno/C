#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float valor, total_pedido;
	total_pedido = 0;
	do
	{
		printf ("Digite o valor do produto comprado (caso n�o tenha mais produtos, digite 0): ");
		scanf ("%f", &valor);
		total_pedido = total_pedido + valor;
	}
	while (valor != 0);
	printf ("O valor do pedido R$: %.2f", total_pedido);
	return 0;
}
