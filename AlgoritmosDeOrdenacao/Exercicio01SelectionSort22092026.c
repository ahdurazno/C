#include <stdio.h>
int main()
{
    int x[] = {70,85, 60, 90,75};
    int n = 5;
    int i,j, menor, temp;
   
    for (i = 0; i < n - 1; i++) {
        menor = i;
       
        for (j = i + 1; j < n; j++){
        if (x[j] < x[menor]) {
        menor = j;
        }
    }
   
    temp = x[i];
    x[i] = x[menor];
    x[menor] = temp;
    }
   
    printf("Notas em ordem crescente: ");

    for (i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
   
    printf("\n");
    return 0;
}