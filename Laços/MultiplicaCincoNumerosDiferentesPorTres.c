#include <stdio.h>
int main ()
{
	int n1, total, cont;
	cont = 1;
	total = 0;
	do
	{
		printf ("Digite um numero inteiro: ");
		scanf ("%d", &n1);
		total = n1 * 3;
		printf ("%d X 3 = %d \n", n1, total);
		cont++;
	}
	while (cont <= 5);
	return 0;
}
