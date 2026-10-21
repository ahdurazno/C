#include <stdio.h>
int main()
{
    int x[] = {50, 120, 30, 200, 80};
    int n = 5;
    int i,j, maior, temp;
   
    printf("Precos desordenados: ");
    for (i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
   
    printf("\n");
   
    for (i = 0; i < n - 1; i++) {
        maior = i;
       
        for (j = i + 1; j < n; j++){
        if (x[j] > x[maior]) {
        maior = j;
        }
    }
   
    temp = x[i];
    x[i] = x[maior];
    x[maior] = temp;
   
    }
   
    printf("Precos ordenados: ");

    for (i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
   
    printf("\n");
    return 0;
}