#include <stdio.h>

int main()
{
    int i, k;										

    printf("Resultado fragmento (a): \n");
    k = 5;
    for (i = 0; i < 3; i++)
    {
        k = k + 10;
        printf("%d %d\n", i, k);
    }
    printf("%d %d\n", i, k);
    printf("\n\n");


    printf("Resultado fragmento (b): \n");
    i = 0;
    k = 5;
    while (i < 3)
    {
        k = k + 10;
        printf("%d %d\n", i, k);
        i = i+1;
    }
    printf("%d %d\n", i, k);
    printf("\n\n");


    printf("Resultado fragmento (c): \n");

    i = 0;
    k = 5;
    do { 
        k = k + 10;
        printf("%d %d\n", i, k);
        i = i +1;
    } while (i < 3);
    printf("%d %d\n", i, k);
    printf("\n\n");
}
