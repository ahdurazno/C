#include <stdio.h>
int main()
{
    int n1, n2, cont;
    printf ("Você quer que os números dento de qual intervalo sejam exibidos? ");
    scanf ("%d %d", &n1, &n2);
    for (cont = n1; cont <= n2; cont++)
    {
        printf ("%d ", cont);
    }
    return 0;
}